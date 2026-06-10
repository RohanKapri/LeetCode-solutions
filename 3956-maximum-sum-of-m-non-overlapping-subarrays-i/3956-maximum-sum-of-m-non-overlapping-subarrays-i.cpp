class Solution {
public:
    long long maximumSum(vector<int>& nums, int m, int l, int r) {
        int n = nums.size();

        vector<long long> pre(n + 1);
        for (int i = 0; i < n; i++) pre[i + 1] = pre[i] + nums[i];

        const long long INF = -(long long)4e18;

        vector<vector<long long>> dp(m + 1, vector<long long>(n + 1, INF));

        for (int i = 0; i <= n; i++) dp[0][i] = 0;

        long long ans = INF;

        for (int k = 1; k <= m; k++) {
            deque<pair<int,long long>> dq;

            for (int j = 1; j <= n; j++) {

                int p = j - l;

                if (p >= 0 && dp[k - 1][p] != INF) {
                    long long v = dp[k - 1][p] - pre[p];

                    while (!dq.empty() && dq.back().second <= v)
                        dq.pop_back();

                    dq.push_back({p, v});
                }

                while (!dq.empty() && dq.front().first < j - r)
                    dq.pop_front();

                dp[k][j] = dp[k][j - 1];

                if (!dq.empty())
                    dp[k][j] = max(dp[k][j], dq.front().second + pre[j]);
            }

            ans = max(ans, dp[k][n]);
        }

        return ans;
    }
};