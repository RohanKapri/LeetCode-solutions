class Solution {
public:
    const long long MOD = 1000000007;

    // How many picks of index i have gain >= threshold
    long long countAtLeast(long long val, long long dec, long long threshold) {
        if (val < threshold) return 0;
        return (val - threshold) / dec + 1;
    }

    // Sum of the first k picks of index i: val + (val-dec) + (val-2*dec) + ...
    long long sumOfPicks(long long val, long long dec, long long k) {
        if (k <= 0) return 0;
        long long decTimesKMinus1 = dec * (k - 1);    // bounded by val, safe
        long long pairSum = decTimesKMinus1 * k / 2;  // fits in long long
        return k * val - pairSum;
    }

    // Total picks across all indices with gain >= threshold, capped at "cap"
    long long totalCountAtLeast(vector<int>& value, vector<int>& decay, long long threshold, long long cap) {
        long long total = 0;
        int n = value.size();
        for (int i = 0; i < n; i++) {
            if (value[i] < threshold) continue;
            long long k = countAtLeast(value[i], decay[i], threshold);
            total += k;
            if (total >= cap) return cap;
        }
        return total;
    }
    int maxTotalValue(vector<int>& value, vector<int>& decay, int m) {
        int n = value.size();
        long long totalPicks = m;

        long long totalNonNegative = totalCountAtLeast(value, decay, 0, totalPicks + 1);

        long long answer = 0;

        if (totalNonNegative <= totalPicks) {
            // Not even m picks have non-negative gain; take all of them, no more
            for (int i = 0; i < n; i++) {
                long long k = (long long)value[i] / decay[i] + 1;
                answer = (answer + sumOfPicks(value[i], decay[i], k)) % MOD;
            }
        } else {
            // Find the largest threshold X such that at least totalPicks
            // picks across all indices have gain >= X
            long long low = 0, high = 0;
            for (int i = 0; i < n; i++) {
                if (value[i] > high) high = value[i];
            }

            while (low < high) {
                long long mid = low + (high - low + 1) / 2;
                if (totalCountAtLeast(value, decay, mid, totalPicks + 1) >= totalPicks) {
                    low = mid;
                } else {
                    high = mid - 1;
                }
            }

            long long threshold = low;
            long long countAboveThreshold = 0;
            long long sumAboveThreshold = 0;

            for (int i = 0; i < n; i++) {
                long long k = countAtLeast(value[i], decay[i], threshold + 1);
                countAboveThreshold += k;
                sumAboveThreshold += sumOfPicks(value[i], decay[i], k);
            }

            long long remaining = totalPicks - countAboveThreshold;
            answer = (sumAboveThreshold + remaining * threshold) % MOD;
        }

        return (int)answer;
    }
};