function maxScore(grid: number[][]): number {
    const n = grid.length;
    const m = grid[0].length;
    const { max } = Math;

    let best = -100;

    for (let i = 1; i < n - 1; i++) {
        let curr = grid[i][0];

        for (let j = 1; j < m - 1; j++) {
            best = max(
                best,
                curr = max(grid[i][j], curr + grid[i][j])
            );
        }

        best = max(best, curr + grid[i][m - 1]);
    }

    for (let j = 1; j < m - 1; j++) {
        let curr = grid[0][j];

        for (let i = 1; i < n - 1; i++) {
            best = max(
                best,
                curr = max(grid[i][j], curr + grid[i][j])
            );
        }

        best = max(best, curr + grid[n - 1][j]);
    }

    for (let i = 0; i < n; i += n - 1) {
        let curr = grid[i][0];

        for (let j = 1; j < m; j++) {
            best = max(best, curr += grid[i][j]);
            curr = max(curr, grid[i][j]);
        }
    }

    for (let j = 0; j < m; j += m - 1) {
        let curr = grid[0][j];

        for (let i = 1; i < n; i++) {
            best = max(best, curr += grid[i][j]);
            curr = max(curr, grid[i][j]);
        }
    }

    return best;
}