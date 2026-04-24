class Solution {
    Integer[] dp;
    public int helper(int i, String s) {
        if (i == s.length()) return 1;
        if (s.charAt(i) == '0') return 0;
        if (dp[i] != null) return dp[i];
        int res = helper(i + 1, s);
        if (i + 1 < s.length()) {
            int num = (s.charAt(i) - '0') * 10 + (s.charAt(i + 1) - '0');
            if (num >= 10 && num <= 26) {
                res += helper(i + 2, s);
            }
        }
        return dp[i] = res;
    }
    public int numDecodings(String s) {
        dp = new Integer[s.length()];
        return helper(0, s);
    }
}