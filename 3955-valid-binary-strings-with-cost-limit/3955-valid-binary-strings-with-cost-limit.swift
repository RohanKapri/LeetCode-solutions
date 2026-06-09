class Solution {
    func generateValidStrings(_ n: Int, _ k: Int) -> [String] {
        var ans = [String]()

        func dfs(_ i: Int, _ c: Int, _ p: Bool, _ s: String) {
            if c > k { return }

            if i == n {
                ans.append(s)
                return
            }

            dfs(i + 1, c, false, s + "0")

            if !p {
                dfs(i + 1, c + i, true, s + "1")
            }
        }

        dfs(0, 0, false, "")
        return ans
    }
}