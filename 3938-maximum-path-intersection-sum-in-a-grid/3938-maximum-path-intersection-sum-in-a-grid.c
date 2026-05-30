int maxScore(int** grid, int gridSize, int* gridColSize) {
    int n = gridSize;
    int m = gridColSize[0];

    int best = -100;

    for (int i = 1; i < n - 1; i++) {
        int curr = grid[i][0];

        for (int j = 1; j < m - 1; j++) {
            curr = (grid[i][j] > curr + grid[i][j])
                ? grid[i][j]
                : curr + grid[i][j];

            best = (best > curr) ? best : curr;
        }

        best = (best > curr + grid[i][m - 1])
            ? best
            : curr + grid[i][m - 1];
    }

    for (int j = 1; j < m - 1; j++) {
        int curr = grid[0][j];

        for (int i = 1; i < n - 1; i++) {
            curr = (grid[i][j] > curr + grid[i][j])
                ? grid[i][j]
                : curr + grid[i][j];

            best = (best > curr) ? best : curr;
        }

        best = (best > curr + grid[n - 1][j])
            ? best
            : curr + grid[n - 1][j];
    }

    for (int i = 0; i < n; i += n - 1) {
        int curr = grid[i][0];

        for (int j = 1; j < m; j++) {
            curr += grid[i][j];

            best = (best > curr) ? best : curr;

            curr = (curr > grid[i][j])
                ? curr
                : grid[i][j];
        }
    }

    for (int j = 0; j < m; j += m - 1) {
        int curr = grid[0][j];

        for (int i = 1; i < n; i++) {
            curr += grid[i][j];

            best = (best > curr) ? best : curr;

            curr = (curr > grid[i][j])
                ? curr
                : grid[i][j];
        }
    }

    return best;
}