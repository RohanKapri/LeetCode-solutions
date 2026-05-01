class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        vector<int> uglyNumbers(n, INT_MAX);
        vector<int> indices(primes.size(), 0);
        vector<long long> nextMultiples(primes.begin(), primes.end()); // Use long long to prevent overflow
        
        uglyNumbers[0] = 1;
        for (int i = 1; i < n; ++i) {
            long long minVal = *min_element(nextMultiples.begin(), nextMultiples.end());
            uglyNumbers[i] = (int)minVal;

            for (int j = 0; j < primes.size(); ++j) {
                if (nextMultiples[j] == minVal) {
                    indices[j]++;
                    nextMultiples[j] = (long long)uglyNumbers[indices[j]] * primes[j]; // Use long long here
                }
            }
        }
        return uglyNumbers[n - 1];
    }
};
