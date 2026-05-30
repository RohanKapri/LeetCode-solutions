object Solution {
    def maxScore(grid: Array[Array[Int]]): Int = {
        val n = grid.length
        val m = grid(0).length

        var best = -100

        for (i <- 1 until n - 1) {
            var curr = grid(i)(0)

            for (j <- 1 until m - 1) {
                curr = math.max(grid(i)(j), curr + grid(i)(j))
                best = math.max(best, curr)
            }

            best = math.max(best, curr + grid(i)(m - 1))
        }

        for (j <- 1 until m - 1) {
            var curr = grid(0)(j)

            for (i <- 1 until n - 1) {
                curr = math.max(grid(i)(j), curr + grid(i)(j))
                best = math.max(best, curr)
            }

            best = math.max(best, curr + grid(n - 1)(j))
        }

        var borderRow = 0
        while (borderRow < n) {
            var curr = grid(borderRow)(0)

            for (j <- 1 until m) {
                curr += grid(borderRow)(j)
                best = math.max(best, curr)
                curr = math.max(curr, grid(borderRow)(j))
            }

            if (n == 1) {
                borderRow = n
            } else {
                borderRow += n - 1
            }
        }

        var borderCol = 0
        while (borderCol < m) {
            var curr = grid(0)(borderCol)

            for (i <- 1 until n) {
                curr += grid(i)(borderCol)
                best = math.max(best, curr)
                curr = math.max(curr, grid(i)(borderCol))
            }

            if (m == 1) {
                borderCol = m
            } else {
                borderCol += m - 1
            }
        }

        best
    }
}