class Solution {
    public List<List<Integer>> shiftGrid(int[][] grid, int k) {
        int m = grid.length, n = grid[0].length;
        int total = m * n;
        k = k % total;
        int[] flatGrid = new int[total];
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                flatGrid[i * n + j] = grid[i][j];
        int[] shifted = new int[total];
        for (int i = 0; i < total; i++)
            shifted[(i + k) % total] = flatGrid[i];
        List<List<Integer>> result = new ArrayList<>();
        for (int i = 0; i < m; i++) {
            List<Integer> row = new ArrayList<>();
            for (int j = 0; j < n; j++)
                row.add(shifted[i * n + j]);
            result.add(row);
        }
        return result;
    }
}
