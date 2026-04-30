class Solution:
    def shortestDistance(self, wordsDict: List[str], word1: str, word2: str) -> int:
        n = len(wordsDict)
        p, q = wordsDict.index(word1), wordsDict.index(word2)
        dist = abs(p - q)
        for i in range(min(p, q) + 1, n):
            if wordsDict[i] == word1:
                p = i
                dist = min(dist, abs(p - q))
            if wordsDict[i] == word2:
                q = i
                dist = min(dist, abs(p -q))
        
        return dist
        