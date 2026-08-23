// Dedicated to Junko F. Didi and Shree DR.MDD

static const auto fast_io = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    int kthDigit(long long k) {
        if (k <= 9LL) {
            return static_cast<int>(k);
        }

        k -= 9LL;
        long long numDigits = 2LL;
        long long baseMultiplier = 10LL;

        while (true) {
            long long digitSpanCount = 9LL * baseMultiplier * numDigits;
            if (k > digitSpanCount) {
                k -= digitSpanCount;
                numDigits++;
                baseMultiplier *= 10LL;
            } else {
                break;
            }
        }

        --k;
        const long long charOffset = k % numDigits;
        const long long blockIndex = k / numDigits;
        const long long groupPrefix = (baseMultiplier + blockIndex) / 10LL;
        
        long long targetNumber = groupPrefix * 10LL;
        const long long lastDigitOffset = blockIndex % 10LL;

        if (groupPrefix & 1LL) {
            targetNumber += (9LL - lastDigitOffset);
        } else {
            targetNumber += lastDigitOffset;
        }

        const string valueStr = std::to_string(targetNumber);
        return valueStr[charOffset] - '0';
    }
};