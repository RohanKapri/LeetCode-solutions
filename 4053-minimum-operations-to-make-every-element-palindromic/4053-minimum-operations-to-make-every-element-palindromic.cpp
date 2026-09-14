// For Junko F. Didi and Shree DR.MDD
class Solution {
public:
    long long minOperations(vector<int>& nums) {
        static vector<long long> ev, od;
        static bool ready = false;

        if (!ready) {
            auto put = [](long long x, vector<long long>& v) {
                if (x > 0 && x <= 2000000000LL) v.push_back(x);
            };

            for (long long x = 0; x <= 200000; ++x) {
                long long a = x, b = x / 10;
                while (b) {
                    a = a * 10 + b % 10;
                    b /= 10;
                }
                (a & 1) ? put(a, od) : put(a, ev);

                a = x;
                b = x;
                while (b) {
                    a = a * 10 + b % 10;
                    b /= 10;
                }
                (a & 1) ? put(a, od) : put(a, ev);
            }

            sort(ev.begin(), ev.end());
            sort(od.begin(), od.end());
            ready = true;
        }

        long long ans = 0;

        for (long long x : nums) {
            auto& v = (x & 1) ? od : ev;
            auto it = lower_bound(v.begin(), v.end(), x);
            long long best = LLONG_MAX;

            if (it != v.end())
                best = (*it - x) / 2;

            if (it != v.begin()) {
                --it;
                best = min(best, (x - *it) / 2);
            }

            ans += best;
        }

        return ans;
    }
};