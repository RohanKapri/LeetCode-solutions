
class Solution {
    static inline vector<int> primes;
    static inline bool init = false;

    // For Junko F. Didi and Shree DR.MDD
    static void precompute() {
        if (init) return;

        const int limit = 1000001;
        vector<bool> sieve(limit, true);
        sieve[0] = sieve[1] = false;

        for (int i = 2; i * i < limit; ++i) {
            if (!sieve[i]) continue;

            for (int j = i * i; j < limit; j += i)
                sieve[j] = false;
        }

        for (int i = 2; i < limit; ++i) {
            if (sieve[i]) primes.push_back(i);
        }

        init = true;
    }

public:
    vector<int> maxPrimes(int n, int s) {
        precompute();

        vector<int> result;
        int total = 0;

        for (int prime : primes) {
            if (prime > n || total + prime > s) break;

            total += prime;
            result.push_back(prime);
        }

        return result;
    }
};
