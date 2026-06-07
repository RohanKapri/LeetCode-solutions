public class Solution {
    public long MaxTotal(int[] nums, string s) {
        long neg = (long)-1e18;

        long dp0 = 0;
        long dp1 = neg;

        for (int i = 0; i < nums.Length; i++) {
            long nxt0 = neg;
            long nxt1 = neg;

            if (s[i] == '0') {
                nxt0 = Math.Max(dp0, dp1);
            } else {
                nxt1 = Math.Max(dp0, dp1) + nums[i];

                if (i > 0) {
                    nxt0 = dp0 + nums[i - 1];
                }
            }

            dp0 = nxt0;
            dp1 = nxt1;
        }

        return Math.Max(dp0, dp1);
    }
}