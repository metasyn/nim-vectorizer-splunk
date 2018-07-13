#!/bin/bash
find . | grep .DS_Store | xargs rm
cp -r ./app ./vectorizer
tar czvf vectorizer.tgz vectorizer
rm -rf ./vectorizer
