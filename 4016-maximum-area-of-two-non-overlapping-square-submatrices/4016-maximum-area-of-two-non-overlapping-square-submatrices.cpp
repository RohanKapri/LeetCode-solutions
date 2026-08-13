class Solution {

    bool check(vector<vector<int>>& dp, int k) {

        int n = dp.size();
        int m = dp[0].size();

        int minR = n;
        int minC = m;
        int maxR = -1;
        int maxC = -1;

        for (int i = 0; i <= n - k; i++) {
            for (int j = 0; j <= m - k; j++) {

                if (dp[i + k - 1][j + k - 1] >= k) {

                    minR = min(minR, i);
                    minC = min(minC, j);

                    maxR = max(maxR, i);
                    maxC = max(maxC, j);
                }
            }
        }

        if (maxR == -1)
            return false;

        if (abs(minR - maxR) >= k ||
            abs(minC - maxC) >= k)
            return true;

        return false;
    }

public:

    int maxArea(vector<vector<int>>& mat) {

        int n = mat.size();
        int m = mat[0].size();

        vector<vector<int>> dp(n, vector<int>(m, 0));

        int maxK = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (mat[i][j] == 1) {

                    if (i == 0 || j == 0) {
                        dp[i][j] = 1;
                    }
                    else {
                        dp[i][j] =
                            min({
                                dp[i][j - 1],
                                dp[i - 1][j],
                                dp[i - 1][j - 1]
                            }) + 1;
                    }

                    maxK = max(maxK, dp[i][j]);
                }
            }
        }

        int s = 1;
        int e = maxK;
        int ans = 0;

        while (s <= e) {

            int mid = s + (e - s) / 2;

            if (check(dp, mid)) {
                ans = mid;
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
        }

        return ans * ans;
    }
};