using System;
using System.Collections.Generic;

public class Solution {
    public long MaxSum(int[] nums, int k) {

        int n = nums.Length;

        long ans = int.MinValue;

        if (k == 0 || n == 1)
        {
            long sm = 0;
            foreach (int num in nums)
            {
                sm += num;
                ans = Math.Max(ans, sm);
                if (sm < 0)
                    sm = 0;
            }
            return ans;
        }

        int cnt = 0;
        long cur = 0;
        long[] pref = new long[n + 1];

        for (int i = 0; i < n; i++)
        {
            if (nums[i] >= 0)
                cur += nums[i];
            else
                cnt++;

            pref[i + 1] = pref[i] + nums[i];
            ans = Math.Max(ans, (long)nums[i]);
        }

        if (cnt <= k)
            return cur;

        long[][] dp = new long[n][];
        for (int i = 0; i < n; i++)
            dp[i] = new long[n];

        for (int i = 0; i < n; i++)
        {
            PriorityQueue<int, int> pq = new PriorityQueue<int, int>();
            long sm = 0;

            for (int j = i; j < n; j++)
            {
                if (nums[j] >= 0)
                {
                    dp[i][j] = sm;
                    continue;
                }

                if (pq.Count < k)
                {
                    pq.Enqueue(nums[j], -nums[j]);
                    sm += nums[j];
                }
                else
                {
                    int top = pq.Peek();
                    if (top > nums[j])
                    {
                        sm -= top;
                        pq.Dequeue();
                        sm += nums[j];
                        pq.Enqueue(nums[j], -nums[j]);
                    }
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            PriorityQueue<int, int> pqmax = new PriorityQueue<int, int>();
            long sm = 0;

            for (int j = 0; j < i; j++)
            {
                if (nums[j] < 0)
                    continue;

                if (pqmax.Count < k)
                {
                    pqmax.Enqueue(nums[j], nums[j]);
                    sm += nums[j];
                }
                else
                {
                    int top = pqmax.Peek();
                    if (top < nums[j])
                    {
                        sm -= top;
                        pqmax.Dequeue();
                        sm += nums[j];
                        pqmax.Enqueue(nums[j], nums[j]);
                    }
                }
            }

            for (int j = n - 1; j > i; j--)
            {
                long curSum = pref[j + 1] - pref[i];
                curSum -= dp[i][j];
                curSum += sm;

                ans = Math.Max(ans, curSum);

                if (nums[j] < 0)
                    continue;

                if (pqmax.Count < k)
                {
                    pqmax.Enqueue(nums[j], nums[j]);
                    sm += nums[j];
                }
                else
                {
                    int top = pqmax.Peek();
                    if (top < nums[j])
                    {
                        sm -= top;
                        pqmax.Dequeue();
                        sm += nums[j];
                        pqmax.Enqueue(nums[j], nums[j]);
                    }
                }

                if (pqmax.Count > 0)
                    ans = Math.Max(ans, sm);
            }
        }

        return ans;
    }
}