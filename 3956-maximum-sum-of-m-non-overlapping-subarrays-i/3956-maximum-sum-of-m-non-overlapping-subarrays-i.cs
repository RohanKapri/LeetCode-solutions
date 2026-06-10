using System;
using System.Collections.Generic;

public class Solution
{
    private long UnboundDP(long[] pre, int n, int l, int r)
    {
        long[] dp = new long[n + 1];
        LinkedList<int> dq = new LinkedList<int>();
        long ans = long.MinValue / 2;

        for (int i = l; i <= n; i++)
        {
            int t = i - l;
            long cur = dp[t] - pre[t];

            while (dq.Count > 0 &&
                   dp[dq.Last.Value] - pre[dq.Last.Value] <= cur)
            {
                dq.RemoveLast();
            }

            dq.AddLast(t);

            while (dq.Count > 0 && dq.First.Value < i - r)
            {
                dq.RemoveFirst();
            }

            dp[i] = dp[i - 1];

            if (dq.Count > 0)
            {
                long v = pre[i] + dp[dq.First.Value] - pre[dq.First.Value];
                dp[i] = Math.Max(dp[i], v);
                ans = Math.Max(ans, v);
            }
        }

        return ans;
    }

    public long MaximumSum(int[] nums, int m, int l, int r)
    {
        int n = nums.Length;

        long[] pre = new long[n + 1];
        for (int i = 0; i < n; i++)
        {
            pre[i + 1] = pre[i] + nums[i];
        }

        long neg = long.MinValue / 2;

        if (m >= n / l)
        {
            return UnboundDP(pre, n, l, r);
        }

        long[] prev = new long[n + 1];
        long ans = neg;
        long last = neg;

        for (int k = 1; k <= m; k++)
        {
            long[] cur = new long[n + 1];
            Array.Fill(cur, neg);

            LinkedList<int> dq = new LinkedList<int>();

            for (int i = l; i <= n; i++)
            {
                int t = i - l;
                long val = prev[t] - pre[t];

                while (dq.Count > 0 &&
                       prev[dq.Last.Value] - pre[dq.Last.Value] <= val)
                {
                    dq.RemoveLast();
                }

                dq.AddLast(t);

                while (dq.Count > 0 && dq.First.Value < i - r)
                {
                    dq.RemoveFirst();
                }

                if (dq.Count > 0)
                {
                    cur[i] = pre[i] + prev[dq.First.Value] - pre[dq.First.Value];
                    ans = Math.Max(ans, cur[i]);
                }
            }

            if (ans == last) break;

            last = ans;

            long[] best = new long[n + 1];
            Array.Fill(best, neg);

            for (int i = 1; i <= n; i++)
            {
                best[i] = Math.Max(best[i - 1], cur[i]);
            }

            prev = best;
        }

        return ans;
    }
}