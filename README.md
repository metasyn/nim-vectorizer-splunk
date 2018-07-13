# vectorizer app

Adds a new search command `vectorize`:

```
| inputlookup airline_tweets.csv
| vectorize text n_features=100 ngram_range=1-5
```

Written in nim. Relies on nim-cexc: https://nimble.directory/pkg/nimcexc

See HACK-711 for details.

# building

Requirements: 
 * nim 0.18+ 
 * develop [arraymancer](https://github.com/mratsim/arraymancer)
 * murmur3

If you don't have nim, try installing with choosenim:

```
curl https://nim-lang.org/choosenim/init.sh -sSf | sh
choosenim stable
nim -v
```

then install packages

```
nimble install murmur3
git clone https://github.com/mratsim/arraymancer
cd arraymancer
nimble install
```

Then you can should be able to run:

```
./build.sh
./package.sh
```

To build and package the app, `vectorizer.tgz`.
