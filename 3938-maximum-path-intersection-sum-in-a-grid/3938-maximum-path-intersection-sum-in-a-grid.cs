public class Solution {
    public int MaxScore(int[][] grid) {
        int n = grid.Length;
        int m = grid[0].Length;

        int best = -100;

        for (int i = 1; i < n - 1; i++) {
            int curr = grid[i][0];

            for (int j = 1; j < m - 1; j++) {
                curr = Math.Max(grid[i][j], curr + grid[i][j]);
                best = Math.Max(best, curr);
            }

            best = Math.Max(best, curr + grid[i][m - 1]);
        }

        for (int j = 1; j < m - 1; j++) {
            int curr = grid[0][j];

            for (int i = 1; i < n - 1; i++) {
                curr = Math.Max(grid[i][j], curr + grid[i][j]);
                best = Math.Max(best, curr);
            }

            best = Math.Max(best, curr + grid[n - 1][j]);
        }

        for (int i = 0; i < n; i += n - 1) {
            int curr = grid[i][0];

            for (int j = 1; j < m; j++) {
                curr += grid[i][j];
                best = Math.Max(best, curr);
                curr = Math.Max(curr, grid[i][j]);
            }
        }

        for (int j = 0; j < m; j += m - 1) {
            int curr = grid[0][j];

            for (int i = 1; i < n; i++) {
                curr += grid[i][j];
                best = Math.Max(best, curr);
                curr = Math.Max(curr, grid[i][j]);
            }
        }

        return best;
    }
}