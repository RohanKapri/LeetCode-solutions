class Solution:
    def generateValidStrings(self, n: int, k: int) -> list[str]:
        ans = []

        def dfs(s: str, k: int, n: int) -> None:
            if n == 0:
                if k >= 0:
                    ans.append(s)
                return

            l = len(s)

            if not s or s[-1] != '1':
                dfs(s + '1', k - l, n - 1)

            dfs(s + '0', k, n - 1)

        dfs("", k, n)
        return ans