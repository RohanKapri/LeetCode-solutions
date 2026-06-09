class Solution {
public:
    vector<string> ans;

    void dfs(string s, int k, int n) {
        if (n == 0) {
            if (k >= 0) ans.push_back(s);
            return;
        }

        int len = s.size();

        if (s.empty() || s.back() != '1')
            dfs(s + '1', k - len, n - 1);

        dfs(s + '0', k, n - 1);
    }

    vector<string> generateValidStrings(int n, int k) {
        dfs("", k, n);
        return ans;
    }
};