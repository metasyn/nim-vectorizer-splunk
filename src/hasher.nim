import arraymancer
from murmur3 import murmur_hash

proc hashSubstring(s: string, a, b, nFeatures: int): int=
    return abs((murmur_hash(s[a..b], 0)[0] mod nFeatures).int)

proc makeMurmurTensor*(s: string, nFeatures: int, nGramRange: tuple[l, h: int]): Tensor[float] =
    result = newTensor[float](nFeatures)
    let
      start = 0
      ending = len(s)
      (l, h) = nGramRange

    for i in start..ending:
        # Uni
        var idx = hashSubstring(s, i, i, nFeatures)
        result[idx] += 1

        for u in l..h-1:
            if i + u < ending:
                idx = hashSubstring(s, i, i+u, nFeatures)
                result[idx] += 1

    # Make it into a row
    return result.reshape(1, nFeatures)
