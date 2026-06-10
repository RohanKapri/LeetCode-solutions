import 'dart:math';

class Solution {
  int maximumSum(List<int> nums, int m, int l, int r) {
    int unboundDP(List<int> pre, int n, int l, int r) {
      List<int> dp = List.filled(n + 1, 0);
      List<int> dq = [];
      int head = 0;
      int ans = -(1 << 60);

      for (int i = l; i <= n; i++) {
        int t = i - l;
        int cur = dp[t] - pre[t];

        while (dq.length > head &&
            dp[dq.last] - pre[dq.last] <= cur) {
          dq.removeLast();
        }

        dq.add(t);

        while (dq.length > head && dq[head] < i - r) {
          head++;
        }

        dp[i] = dp[i - 1];

        if (dq.length > head) {
          int v = pre[i] + dp[dq[head]] - pre[dq[head]];
          dp[i] = max(dp[i], v);
          ans = max(ans, v);
        }
      }

      return ans;
    }

    int n = nums.length;

    List<int> pre = List.filled(n + 1, 0);
    for (int i = 0; i < n; i++) {
      pre[i + 1] = pre[i] + nums[i];
    }

    int neg = -(1 << 60);

    if (m >= n ~/ l) {
      return unboundDP(pre, n, l, r);
    }

    List<int> prev = List.filled(n + 1, 0);

    int ans = neg;
    int last = neg;

    for (int k = 1; k <= m; k++) {
      List<int> cur = List.filled(n + 1, neg);

      List<int> dq = [];
      int head = 0;

      for (int i = l; i <= n; i++) {
        int t = i - l;
        int val = prev[t] - pre[t];

        while (dq.length > head &&
            prev[dq.last] - pre[dq.last] <= val) {
          dq.removeLast();
        }

        dq.add(t);

        while (dq.length > head && dq[head] < i - r) {
          head++;
        }

        if (dq.length > head) {
          cur[i] = pre[i] + prev[dq[head]] - pre[dq[head]];
          ans = max(ans, cur[i]);
        }
      }

      if (ans == last) break;

      last = ans;

      List<int> best = List.filled(n + 1, neg);

      for (int i = 1; i <= n; i++) {
        best[i] = max(best[i - 1], cur[i]);
      }

      prev = best;
    }

    return ans;
  }
}