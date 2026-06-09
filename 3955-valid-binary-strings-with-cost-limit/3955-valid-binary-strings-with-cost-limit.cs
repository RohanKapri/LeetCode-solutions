public class Solution {
    public IList<string> GenerateValidStrings(int n, int k) {
        List<string> ans = new List<string>();

        void Dfs(int i, int c, bool p, string s) {
            if (c > k) return;

            if (i == n) {
                ans.Add(s);
                return;
            }

            Dfs(i + 1, c, false, s + "0");

            if (!p) {
                Dfs(i + 1, c + i, true, s + "1");
            }
        }

        Dfs(0, 0, false, "");
        return ans;
    }
}