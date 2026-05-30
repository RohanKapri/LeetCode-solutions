class Solution {
    func maxScore(_ grid: [[Int]]) -> Int {
        let n = grid.count
        let m = grid[0].count

        var best = -100

        for i in 1..<(n - 1) {
            var curr = grid[i][0]

            for j in 1..<(m - 1) {
                curr = max(grid[i][j], curr + grid[i][j])
                best = max(best, curr)
            }

            best = max(best, curr + grid[i][m - 1])
        }

        var borderRow = 0
        while borderRow < n {
            var curr = grid[borderRow][0]

            for j in 1..<m {
                curr += grid[borderRow][j]
                best = max(best, curr)
                curr = max(curr, grid[borderRow][j])
            }

            if n == 1 { break }
            borderRow += n - 1
        }

        for j in 1..<(m - 1) {
            var curr = grid[0][j]

            for i in 1..<(n - 1) {
                curr = max(grid[i][j], curr + grid[i][j])
                best = max(best, curr)
            }

            best = max(best, curr + grid[n - 1][j])
        }

        var borderCol = 0
        while borderCol < m {
            var curr = grid[0][borderCol]

            for i in 1..<n {
                curr += grid[i][borderCol]
                best = max(best, curr)
                curr = max(curr, grid[i][borderCol])
            }

            if m == 1 { break }
            borderCol += m - 1
        }

        return best
    }
}