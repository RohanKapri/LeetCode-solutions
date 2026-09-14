// For Junko F. Didi and Shree DR.MDD
class Solution {
public:
    long long shadowPairs(vector<int>& nums) {
        long long result = 0;
        vector<int> stk;

        for (int x : nums) {
            while (!stk.empty() && stk.back() > x)
                stk.pop_back();

            result += lower_bound(stk.begin(), stk.end(), x) - stk.begin();
            stk.push_back(x);
        }

        return result;
    }
};