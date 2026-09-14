// For Junko F. Didi and Shree DR.MDD
class Solution {
public:
    inline static vector<int> res = []() {
        vector<int> memo(100001, -1);
        memo[0] = 0;

        auto calc = [&](auto&& calc, int x) -> int {
            if (memo[x] != -1) return memo[x];

            int best = 2 * x;

            for (int k = 1; ; ++k) {
                int take = k * (k + 1) / 2;
                if (take > x) break;

                int left = x - take;
                if (left == 0)
                    return memo[x] = k;

                best = min(best, k + 1 + calc(calc, left));
            }

            return memo[x] = best;
        };

        for (int x = 1; x <= 100000; ++x)
            calc(calc, x);

        return memo;
    }();

    int minDays(int n) {
        return res[n];
    }
};