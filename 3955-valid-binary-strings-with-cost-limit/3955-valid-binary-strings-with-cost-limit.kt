class Solution {
    fun generateValidStrings(n: Int, k: Int): List<String> {
        val ans = mutableListOf<String>()

        fun dfs(i: Int, c: Int, p: Boolean, s: String) {
            if (c > k) return

            if (i == n) {
                ans.add(s)
                return
            }

            dfs(i + 1, c, false, s + "0")

            if (!p) {
                dfs(i + 1, c + i, true, s + "1")
            }
        }

        dfs(0, 0, false, "")
        return ans
    }
}