class Solution {
    public int maxCoins(int[] nums) {
        int n = nums.length;
        int[] balloons = new int[n + 2];
        balloons[0] = balloons[n + 1] = 1;
        
        for (int i = 1; i <= n; i++) {
            balloons[i] = nums[i - 1];
        }
        
        int[][] dp = new int[n + 2][n + 2];
        
        for (int length = 3; length <= n + 2; length++) {
            for (int left = 0; left <= n + 2 - length; left++) {
                int right = left + length - 1;
                for (int i = left + 1; i < right; i++) {
                    dp[left][right] = Math.max(dp[left][right], dp[left][i] + dp[i][right] + balloons[left] * balloons[i] * balloons[right]);
                }
            }
        }
        
        return dp[0][n + 1];
    }
    
    public static void main(String[] args) {
        Solution solution = new Solution();
        int[] nums = {3, 1, 5, 8};
        System.out.println(solution.maxCoins(nums)); // Should output 167
    }
}
