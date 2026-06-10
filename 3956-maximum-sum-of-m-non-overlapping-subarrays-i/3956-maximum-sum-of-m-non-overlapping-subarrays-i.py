from collections import deque

class Solution(object):

    def unboundDP(self, pre, n, l, r):
        dp = [0] * (n + 1)
        dq = deque()
        ans = -10**18

        for i in range(l, n + 1):
            t = i - l
            cur = dp[t] - pre[t]

            while dq and dp[dq[-1]] - pre[dq[-1]] <= cur:
                dq.pop()

            dq.append(t)

            while dq and dq[0] < i - r:
                dq.popleft()

            dp[i] = dp[i - 1]

            if dq:
                v = pre[i] + dp[dq[0]] - pre[dq[0]]
                dp[i] = max(dp[i], v)
                ans = max(ans, v)

        return ans

    def maximumSum(self, nums, m, l, r):
        n = len(nums)

        pre = [0] * (n + 1)
        for i in range(n):
            pre[i + 1] = pre[i] + nums[i]

        neg = -10**18

        if m >= n // l:
            return self.unboundDP(pre, n, l, r)

        prev = [0] * (n + 1)
        ans = neg
        last = neg

        for _ in range(m):
            cur = [neg] * (n + 1)
            dq = deque()

            for i in range(l, n + 1):
                t = i - l
                val = prev[t] - pre[t]

                while dq and prev[dq[-1]] - pre[dq[-1]] <= val:
                    dq.pop()

                dq.append(t)

                while dq and dq[0] < i - r:
                    dq.popleft()

                if dq:
                    cur[i] = pre[i] + prev[dq[0]] - pre[dq[0]]
                    ans = max(ans, cur[i])

            if ans == last:
                break

            last = ans

            best = [neg] * (n + 1)
            for i in range(1, n + 1):
                best[i] = max(best[i - 1], cur[i])

            prev = best

        return ans