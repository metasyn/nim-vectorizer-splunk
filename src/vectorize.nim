import logging
from json import JsonNode, `$`, `%*`, getStr, `[]`, getElems
from strformat import fmt
from streams import newFileStream, newStringStream, atEnd, readLine, writeLine, setPosition
import strutils
import parsecsv

import arraymancer

from nim_cexc import run
from nim_cexc/setupLogging import setupLogger

import ./hasher
import ./util

var 
  field = ""
  getinfo: JsonNode
  nFeatures = 1000
  nDimensions = 10
  nGramRange = (1, 5)

const syntax = "| vectorize <field> (n_features=<int>)? (n_dimensions=<int>)? (ngram_range=<int>-<int>)?"

proc parseArgs(args: JsonNode): tuple[field: string, nFeatures, nDimensions: int, nGramRange: tuple[l, h: int]] = 
  var elems = args.getElems()

  if len(elems) == 0:
    let err = fmt"Sytnax error: no field specified: {syntax}"
    error(err)
    raise newException(ValueError, err)
  
  let field = elems[0].getStr()
  
  for i in 1..len(elems)-1:
    let split = elems[i].getStr().split("=")
    error(split)
    if split[0] == "n_features":
      try:
        nFeatures = parseInt(split[1])
      except:
        let err = fmt"Sytnax error: cannot parse n_features: {syntax}"
        error(err)
        raise newException(ValueError, err)
    elif split[0] == "n_dimensions":
      try:
        nDimensions = parseInt(split[1])
      except:
        let err = fmt"Sytnax error: cannot parse n_dimensions: {syntax}"
        error(err)
        raise newException(ValueError, err)
    elif split[0] == "ngram_range":
      try:
        let splitRange = split(split[1], "-")
        nGramRange[0] = parseInt(splitRange[0])
        nGramRange[1] = parseInt(splitRange[1])
      except:
        let err = fmt"Sytnax error: cannot parse ngram_range: {syntax}"
        error(err)
        raise newException(ValueError, err)
    else:
      let err = fmt"Sytnax error: unrecognized parameter {split[0]}: {syntax}"
      error(err)
      raise newException(ValueError, err)

  return (field, nFeatures, nDimensions, nGramRange)

proc assertFieldPresent(f: string, h: seq[string]) = 
  if not (f in h):
    raise newException(ValueError, fmt"field {f} not present in: {h}")

proc handleGetinfo(metadata: JsonNode, body: string): tuple[metadata: JsonNode, body: string] =
  ## Use this method to communicate back to the chunked protocol what kind of command we are.

  getinfo = metadata
  let args = metadata["searchinfo"]["args"]
  (field, nFeatures, nDimensions, nGramRange) = parseArgs(args)
  # %* is a macro to convert an expression to a JsonNode
  let returnMetadata = %* {"type": "events"}
  return (metadata: returnMetadata, body: "")

proc handleExecute(metadata: JsonNode, body: string): tuple[metadata: JsonNode, body: string] =
  ## Use this method to interact with and change the data that we return to the chunked protocol.

  var p: CsvParser
  let 
    bodyStream = newStringStream(body)

  # Will slice this off later
  var baseTensor = newTensor[float](1, nFeatures)

  # Open stream
  p.open(bodyStream, "input") 
  # Get headers
  p.readHeaderRow()

  # Check that our field is here
  assertFieldPresent(field, p.headers)

  # Create giant tensor
  while p.readRow():
    baseTensor = concat(baseTensor, makeMurmurTensor(p.rowEntry(field), nFeatures, nGramRange), axis=0)
  p.close()

  # Chop off empty starter
  baseTensor = baseTensor[1.._, _]
  baseTensor = baseTensor.asType(float64)

  # Normalize
  let normTensor = baseTensor ./ sqrt(baseTensor * baseTensor).sum(axis=1)

  let 
    # (_, components) = pca(normTensor, nDimensions)
    returnMetadata = %* {"finished": true}
    fields = makeFields(fmt"{field}_hashed_", nFeatures)
    outBody = writeBody(body, fields, normTensor)

  return (metadata: returnMetadata, body: outBody)

proc handler(metadata: JsonNode, body: string): tuple[metadata: JsonNode, body: string] =
  let action = metadata["action"].getStr()
  # Handle the getinfo exchange
  if action == "getinfo":
    return handleGetinfo(metadata, body)

  # Handle the execute chunks
  if action == "execute":
    return handleExecute(metadata, body)


if isMainModule:
  let 
    i = newFileStream(stdin)
    o = newFileStream(stdout)
  setupLogger("vectorize")
  debug("Starting vectorize.")

  run(i, o, handler)

  debug("Exiting...")