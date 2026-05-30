class Solution {
  int maxScore(List<List<int>> grid) {
    final int n = grid.length;
    final int m = grid[0].length;

    int best = -100;

    for (int i = 1; i < n - 1; i++) {
      int curr = grid[i][0];

      for (int j = 1; j < m - 1; j++) {
        curr = curr + grid[i][j] > grid[i][j]
            ? curr + grid[i][j]
            : grid[i][j];

        if (curr > best) {
          best = curr;
        }
      }

      if (curr + grid[i][m - 1] > best) {
        best = curr + grid[i][m - 1];
      }
    }

    for (int j = 1; j < m - 1; j++) {
      int curr = grid[0][j];

      for (int i = 1; i < n - 1; i++) {
        curr = curr + grid[i][j] > grid[i][j]
            ? curr + grid[i][j]
            : grid[i][j];

        if (curr > best) {
          best = curr;
        }
      }

      if (curr + grid[n - 1][j] > best) {
        best = curr + grid[n - 1][j];
      }
    }

    int borderRow = 0;
    while (borderRow < n) {
      int curr = grid[borderRow][0];

      for (int j = 1; j < m; j++) {
        curr += grid[borderRow][j];

        if (curr > best) {
          best = curr;
        }

        if (grid[borderRow][j] > curr) {
          curr = grid[borderRow][j];
        }
      }

      if (n == 1) break;
      borderRow += n - 1;
    }

    int borderCol = 0;
    while (borderCol < m) {
      int curr = grid[0][borderCol];

      for (int i = 1; i < n; i++) {
        curr += grid[i][borderCol];

        if (curr > best) {
          best = curr;
        }

        if (grid[i][borderCol] > curr) {
          curr = grid[i][borderCol];
        }
      }

      if (m == 1) break;
      borderCol += m - 1;
    }

    return best;
  }
}