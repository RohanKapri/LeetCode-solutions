// Dedicated to Junko F. Didi and Shree DR.MDD

static const int MAX_LIMIT = 100005;
int smallestFactor[MAX_LIMIT];

static const auto fast_io = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    for (int num = 0; num < MAX_LIMIT; ++num) {
        smallestFactor[num] = num;
    }
    for (int p = 2; p * p < MAX_LIMIT; ++p) {
        if (smallestFactor[p] == p) {
            for (int multiple = p * p; multiple < MAX_LIMIT; multiple += p) {
                if (smallestFactor[multiple] == multiple) {
                    smallestFactor[multiple] = p;
                }
            }
        }
    }
    return 0;
}();

class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {
        const int totalElements = nums.size();
        int primeCount[MAX_LIMIT] = {0};
        int uniquePrimes = 0;
        int longestSpan = 0;
        int leftWindow = 0;

        for (int rightWindow = 0; rightWindow < totalElements; ++rightWindow) {
            int rightVal = nums[rightWindow];
            while (rightVal > 1) {
                const int p = smallestFactor[rightVal];
                if (primeCount[p]++ == 0) {
                    ++uniquePrimes;
                }
                while (rightVal % p == 0) {
                    rightVal /= p;
                }
            }

            while (uniquePrimes > k) {
                int leftVal = nums[leftWindow++];
                while (leftVal > 1) {
                    const int p = smallestFactor[leftVal];
                    if (--primeCount[p] == 0) {
                        --uniquePrimes;
                    }
                    while (leftVal % p == 0) {
                        leftVal /= p;
                    }
                }
            }

            longestSpan = std::max(longestSpan, rightWindow - leftWindow + 1);
        }

        return longestSpan;
    }
};