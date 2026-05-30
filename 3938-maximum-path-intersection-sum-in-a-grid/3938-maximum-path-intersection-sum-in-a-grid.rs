impl Solution {
    pub fn max_score(grid: Vec<Vec<i32>>) -> i32 {
        let n = grid.len();
        let m = grid[0].len();

        let mut best = -100;

        for i in 1..n - 1 {
            let mut curr = grid[i][0];

            for j in 1..m - 1 {
                curr = std::cmp::max(grid[i][j], curr + grid[i][j]);
                best = std::cmp::max(best, curr);
            }

            best = std::cmp::max(best, curr + grid[i][m - 1]);
        }

        for j in 1..m - 1 {
            let mut curr = grid[0][j];

            for i in 1..n - 1 {
                curr = std::cmp::max(grid[i][j], curr + grid[i][j]);
                best = std::cmp::max(best, curr);
            }

            best = std::cmp::max(best, curr + grid[n - 1][j]);
        }

        let mut border_row = 0;
        while border_row < n {
            let mut curr = grid[border_row][0];

            for j in 1..m {
                curr += grid[border_row][j];
                best = std::cmp::max(best, curr);
                curr = std::cmp::max(curr, grid[border_row][j]);
            }

            if n == 1 {
                break;
            }

            border_row += n - 1;
        }

        let mut border_col = 0;
        while border_col < m {
            let mut curr = grid[0][border_col];

            for i in 1..n {
                curr += grid[i][border_col];
                best = std::cmp::max(best, curr);
                curr = std::cmp::max(curr, grid[i][border_col]);
            }

            if m == 1 {
                break;
            }

            border_col += m - 1;
        }

        best
    }
}