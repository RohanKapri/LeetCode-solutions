class Solution:
    def wordBreak(self, s: str, wordDict: List[str]) -> bool:
  
        wordDict = set(wordDict)
        n = len(s)
        memoi = {}

        def dfs(i):
            if i == n:
                return True
            if i in memoi:
                return memoi[i]
            for w in wordDict:
                if s.startswith(w,i):
                    if dfs(i+len(w)):
                        memoi[i] = True
                        return True
            memoi[i] = False
            return False
        return dfs(0)