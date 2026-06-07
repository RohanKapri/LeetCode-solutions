class Solution:
    def maxTotal(self, nums: List[int], s: str) -> int:
        n = len(nums)
        neg = -10**18

        dp0 = 0
        dp1 = neg

        for i in range(n):
            nxt0 = neg
            nxt1 = neg

            if s[i] == '0':
                nxt0 = max(dp0, dp1)
            else:
                nxt1 = max(dp0, dp1) + nums[i]

                if i > 0:
                    nxt0 = dp0 + nums[i - 1]

            dp0 = nxt0
            dp1 = nxt1

        return max(dp0, dp1)