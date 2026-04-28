class Solution {
public:
    int minCut(string s) {
        int n = s.size();
        vector<int> dp(n + 1, 0);
        vector<vector<bool>> isPalindrome(n, vector<bool>(n, false));

        for (int i = 0; i <= n; i++) {
            dp[i] = i - 1;
        }

        for (int right = 0; right < n; right++) {
            for (int left = right; left >= 0; left--) {
                if (s[left] == s[right] && (right - left <= 2 || isPalindrome[left + 1][right - 1])) {
                    isPalindrome[left][right] = true;
                    dp[right + 1] = min(dp[right + 1], dp[left] + 1);
                }
            }
        }

        return dp[n];
    }
};
