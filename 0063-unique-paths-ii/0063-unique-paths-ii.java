class Solution {
    public int uniquePathsWithObstacles(int[][] obstacleGrid) {
        int m = obstacleGrid.length;
        int n = obstacleGrid[0].length;
        
        // Initialize dp array
        int[][] dp = new int[m][n];
        
        // If the starting point has an obstacle, return 0
        if (obstacleGrid[0][0] == 1) {
            return 0;
        }
        
        // Base case: First row and first column
        dp[0][0] = 1;
        
        // Fill the first column
        for (int i = 1; i < m; i++) {
            if (obstacleGrid[i][0] == 0) {
                dp[i][0] = dp[i - 1][0];
            }
        }
        
        // Fill the first row
        for (int j = 1; j < n; j++) {
            if (obstacleGrid[0][j] == 0) {
                dp[0][j] = dp[0][j - 1];
            }
        }
        
        // Fill the rest of the grid using the recurrence relation
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (obstacleGrid[i][j] == 0) {
                    dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
                }
            }
        }
        
        // The bottom-right corner will have the total number of unique paths
        return dp[m - 1][n - 1];
    }
}
