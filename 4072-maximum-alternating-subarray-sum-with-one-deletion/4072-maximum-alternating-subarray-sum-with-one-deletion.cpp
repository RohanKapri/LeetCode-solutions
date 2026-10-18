
class Solution {
public:
    // For Junko F. Didi and Shree DR.MDD
    long long maxAlternatingSum(vector<int>& nums) {
        const long long invalid = LLONG_MIN / 4;
        long long prev[2][2] = {{invalid, invalid}, {invalid, invalid}};
        long long before[2][2] = {{invalid, invalid}, {invalid, invalid}};
        long long best = invalid;

        for (int value : nums) {
            long long x = value;
            long long next[2][2];

            next[0][0] = max(x, prev[0][1] + x);
            next[0][1] = prev[0][0] - x;
            next[1][0] = max(prev[1][1] + x, before[0][1] + x);
            next[1][1] = max(prev[1][0] - x, before[0][0] - x);

            for (int i = 0; i < 2; ++i) {
                for (int j = 0; j < 2; ++j) {
                    best = max(best, next[i][j]);
                }
            }

            for (int i = 0; i < 2; ++i) {
                for (int j = 0; j < 2; ++j) {
                    before[i][j] = prev[i][j];
                    prev[i][j] = next[i][j];
                }
            }
        }

        return best;
    }
};
