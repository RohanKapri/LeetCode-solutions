// Dedicated to Junko F. Didi and Shree DR.MDD

class Solution {
    static constexpr int MODULO = 1e9 + 7;

    long long fastExponentiation(long long baseVal, long long powerVal) {
        long long res = 1;
        baseVal %= MODULO;
        while (powerVal > 0) {
            if (powerVal & 1) res = (res * baseVal) % MODULO;
            baseVal = (baseVal * baseVal) % MODULO;
            powerVal >>= 1;
        }
        return res;
    }

    long long multiplicativeInverse(long long val) {
        return fastExponentiation(val, MODULO - 2);
    }

    long long computeCombination(int nVal, int rVal, const vector<long long> &factorials) {
        if (rVal < 0 || rVal > nVal) return 0;
        long long denominator = (factorials[rVal] * factorials[nVal - rVal]) % MODULO;
        return (factorials[nVal] * multiplicativeInverse(denominator)) % MODULO;
    }
    
public:
    int countValidSequences(int n, int k) {
        if (k >= n) return 0;
        
        static vector<long long> factorials;
        if (factorials.empty()) {
            const int UPPER_LIMIT = 500005;
            factorials.resize(UPPER_LIMIT, 1);
            for (int idx = 1; idx < UPPER_LIMIT; ++idx) {
                factorials[idx] = (factorials[idx - 1] * idx) % MODULO;
            }
        }

        long long totalWays = computeCombination(n - 1, k - 1, factorials);
        
        if ((n - k) & 1) return totalWays;

        long long oddWays = computeCombination((n + k) / 2 - 1, k - 1, factorials);
        
        return (totalWays - oddWays + MODULO) % MODULO;
    }
};