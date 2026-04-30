class Solution:
    def getFactors(self, n: int) -> List[List[int]]:
        

        self.res = []
        def dfs(start, num, path):
            for i in range(start, int(num**0.5) + 1):
                if num % i == 0 :
                    self.res.append(path + [i, num // i])
                    dfs(i, num //i , path + [i])
        dfs(2, n, [])
        return self.res