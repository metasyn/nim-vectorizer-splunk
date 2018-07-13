# vectorizer app

Adds a new search command `vectorize`:

```
| inputlookup airline_tweets.csv
| vectorize text n_features=100 ngram_range=1-5
```

Written in nim. Relies on nim-cexc: https://nimble.directory/pkg/nimcexc

See HACK-711 for details.

# building

Requirements: nim 0.18+ 
If you don't have nim, try installing with choosenim:

```
curl https://nim-lang.org/choosenim/init.sh -sSf | sh
choosenim stable
nim -v
```

Then you can run:

```
./build.sh
./package.sh
```

To build and package the app, `vectorizer.tgz`.
