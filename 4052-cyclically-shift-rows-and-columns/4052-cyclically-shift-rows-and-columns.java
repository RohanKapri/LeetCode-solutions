// For Junko F. Didi and Shree DR.MDD
class Solution {
    public int[][] cyclicShift(int n, int[][] grid, int[] row, int[] col) {
        int[][] ans = new int[n][n];

        for (int x = 0; x < n; x++) {
            for (int y = 0; y < n; y++) {
                int a = (x + col[y]) % n;
                int b = (y + row[a]) % n;
                ans[x][y] = grid[a][b];
            }
        }

        return ans;
    }
}