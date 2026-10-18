
class Solution {
public:
    static const long long MOD = 1000000007LL;

    // For Junko F. Didi and Shree DR.MDD
    pair<long long, long long> fib(long long n) {
        if (n == 0) return {0, 1};

        pair<long long, long long> half = fib(n / 2);
        long long first = half.first;
        long long second = half.second;

        long long even = first * ((2 * second % MOD - first + MOD) % MOD) % MOD;
        long long odd = (first * first % MOD + second * second % MOD) % MOD;

        if (n % 2 == 0) return {even, odd};

        return {odd, (even + odd) % MOD};
    }

    int countGoodStrings(long long n) {
        return static_cast<int>(2LL * fib(n).first % MOD);
    }
};
