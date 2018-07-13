import streams
import strutils
import strformat
import sequtils
import arraymancer
import logging
import math
import parsecsv
import csvtools

proc makeRow(tensor: Tensor[float]): seq[string] =
  result = map(tensor.toSeq2D()[0], proc(x: float): string = $(round(x, 10)))

proc makeFields*(prefix: string, nDimensions: int): seq[string] =
  result = @[]
  for i in  1..nDimensions:
     result.add(fmt"{prefix}{i}")

proc writeBody*(body: string, fields: seq[string], data: Tensor[float]): string =
  result = ""
  var
    p: CsvParser
    bodyStream = newStringStream(body)
    i: int

  # Open stream
  p.open(bodyStream, "input") 
  # Get headers
  p.readHeaderRow()
  # Rewrite new header
  let headers = concat(p.headers, fields).connect()
  result.add(headers)
  # Read and write rows
  while p.readRow(): 
    if not isNil(bodyStream):
      let newStuff = makeRow(data[i, _])
      let row = concat(p.row, newStuff).connect()
      result.add(row)
      inc i 
  bodyStream.close()
    