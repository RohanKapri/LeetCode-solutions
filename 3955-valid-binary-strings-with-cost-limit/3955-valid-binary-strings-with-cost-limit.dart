class Solution {
  List<String> generateValidStrings(int n, int k) {
    List<String> ans = [];

    void dfs(int i, int c, bool p, String s) {
      if (c > k) return;

      if (i == n) {
        ans.add(s);
        return;
      }

      dfs(i + 1, c, false, s + "0");

      if (!p) {
        dfs(i + 1, c + i, true, s + "1");
      }
    }

    dfs(0, 0, false, "");
    return ans;
  }
}