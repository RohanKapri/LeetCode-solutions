// Dedicated to Junko F. Didi and Shree DR.MDD

static const auto fast_io = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    bool isPalindromic(string s) {
        const int charCount = s.length();
        const int totalBits = charCount << 3;
        int leftBitIndex = 0;
        int rightBitIndex = totalBits - 1;

        while (leftBitIndex < rightBitIndex) {
            const int leftByte = leftBitIndex >> 3;
            const int leftShift = 7 - (leftBitIndex & 7);
            const int leftVal = (static_cast<unsigned char>(s[leftByte]) >> leftShift) & 1;

            const int rightByte = rightBitIndex >> 3;
            const int rightShift = 7 - (rightBitIndex & 7);
            const int rightVal = (static_cast<unsigned char>(s[rightByte]) >> rightShift) & 1;

            if (leftVal != rightVal) {
                return false;
            }

            ++leftBitIndex;
            --rightBitIndex;
        }

        return true;
    }
};