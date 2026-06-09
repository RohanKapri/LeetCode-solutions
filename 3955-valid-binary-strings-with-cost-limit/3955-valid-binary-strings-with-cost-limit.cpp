class Solution {
    vector<string> ans;
    
    void f(int i, int oneAllowed, int n, int k, string s) {
        if(i == n) {
            ans.push_back(s);
            return;
        }


        if(oneAllowed && k>=i) {
                f(i+1, 0, n, k-i, s + '1');
        }
        f(i+1, 1, n, k, s + '0');
    }
public:
    vector<string> generateValidStrings(int n, int k) {
        f(0, 1, n, k, "");
        return ans;
    }
};