import java.util.*;

class Solution {

    private long unboundDP(long[] pre, int n, int l, int r) {
        long[] dp = new long[n + 1];
        ArrayDeque<Integer> dq = new ArrayDeque<>();
        long ans = Long.MIN_VALUE / 2;

        for (int i = l; i <= n; i++) {
            int t = i - l;
            long cur = dp[t] - pre[t];

            while (!dq.isEmpty() &&
                   dp[dq.peekLast()] - pre[dq.peekLast()] <= cur) {
                dq.pollLast();
            }

            dq.offerLast(t);

            while (!dq.isEmpty() && dq.peekFirst() < i - r) {
                dq.pollFirst();
            }

            dp[i] = dp[i - 1];

            if (!dq.isEmpty()) {
                long v = pre[i] + dp[dq.peekFirst()] - pre[dq.peekFirst()];
                dp[i] = Math.max(dp[i], v);
                ans = Math.max(ans, v);
            }
        }

        return ans;
    }

    public long maximumSum(int[] nums, int m, int l, int r) {
        int n = nums.length;

        long[] pre = new long[n + 1];
        for (int i = 0; i < n; i++) {
            pre[i + 1] = pre[i] + nums[i];
        }

        long neg = Long.MIN_VALUE / 2;

        if (m >= n / l) {
            return unboundDP(pre, n, l, r);
        }

        long[] prev = new long[n + 1];
        long ans = neg, last = neg;

        for (int k = 1; k <= m; k++) {

            long[] cur = new long[n + 1];
            Arrays.fill(cur, neg);

            ArrayDeque<Integer> dq = new ArrayDeque<>();

            for (int i = l; i <= n; i++) {

                int t = i - l;
                long val = prev[t] - pre[t];

                while (!dq.isEmpty() &&
                       prev[dq.peekLast()] - pre[dq.peekLast()] <= val) {
                    dq.pollLast();
                }

                dq.offerLast(t);

                while (!dq.isEmpty() && dq.peekFirst() < i - r) {
                    dq.pollFirst();
                }

                if (!dq.isEmpty()) {
                    cur[i] = pre[i] + prev[dq.peekFirst()] - pre[dq.peekFirst()];
                    ans = Math.max(ans, cur[i]);
                }
            }

            if (ans == last) {
                break;
            }

            last = ans;

            long[] best = new long[n + 1];
            Arrays.fill(best, neg);

            for (int i = 1; i <= n; i++) {
                best[i] = Math.max(best[i - 1], cur[i]);
            }

            prev = best;
        }

        return ans;
    }
}