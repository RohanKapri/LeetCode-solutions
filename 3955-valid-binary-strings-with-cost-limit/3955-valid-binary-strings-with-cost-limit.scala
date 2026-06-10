object Solution {
    def generateValidStrings(n: Int, k: Int): List[String] = {
        var ans = List[String]()

        def dfs(i: Int, c: Int, p: Boolean, s: String): Unit = {
            if (c > k) return

            if (i == n) {
                ans = s :: ans
                return
            }

            dfs(i + 1, c, false, s + "0")

            if (!p) {
                dfs(i + 1, c + i, true, s + "1")
            }
        }

        dfs(0, 0, false, "")
        ans.reverse
    }
}