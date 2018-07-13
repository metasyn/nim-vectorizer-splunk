#!/bin/bash
nim c -d:release src/vectorize.nim
cp src/vectorize app/bin/vectorize
