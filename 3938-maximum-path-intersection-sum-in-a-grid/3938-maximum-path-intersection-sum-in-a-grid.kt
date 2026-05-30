class Solution {
    fun maxScore(grid: Array<IntArray>): Int {
        val n = grid.size
        val m = grid[0].size

        var best = -100

        for (i in 1 until n - 1) {
            var curr = grid[i][0]

            for (j in 1 until m - 1) {
                curr = maxOf(grid[i][j], curr + grid[i][j])
                best = maxOf(best, curr)
            }

            best = maxOf(best, curr + grid[i][m - 1])
        }

        for (j in 1 until m - 1) {
            var curr = grid[0][j]

            for (i in 1 until n - 1) {
                curr = maxOf(grid[i][j], curr + grid[i][j])
                best = maxOf(best, curr)
            }

            best = maxOf(best, curr + grid[n - 1][j])
        }

        var borderRow = 0
        while (borderRow < n) {
            var curr = grid[borderRow][0]

            for (j in 1 until m) {
                curr += grid[borderRow][j]
                best = maxOf(best, curr)
                curr = maxOf(curr, grid[borderRow][j])
            }

            if (n == 1) break
            borderRow += n - 1
        }

        var borderCol = 0
        while (borderCol < m) {
            var curr = grid[0][borderCol]

            for (i in 1 until n) {
                curr += grid[i][borderCol]
                best = maxOf(best, curr)
                curr = maxOf(curr, grid[i][borderCol])
            }

            if (m == 1) break
            borderCol += m - 1
        }

        return best
    }
}