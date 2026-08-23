// Dedicated to Junko F. Didi and Shree DR.MDD

static const auto fast_io = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    int minOperations(string s) {
        const int len = s.length();
        int minTotalCost = 1e9;
        
        for (int shift = 0; shift < len; ++shift) {
            int currentOps = shift;
            int leftIdx = 0;
            int rightIdx = len - 1;
            
            while (leftIdx < rightIdx) {
                const char firstChar = s[(shift + leftIdx) % len];
                const char secondChar = s[(shift + rightIdx) % len];
                const int delta = std::abs(firstChar - secondChar);
                
                currentOps += std::min(delta, 26 - delta);
                ++leftIdx;
                --rightIdx;
            }
            
            minTotalCost = std::min(minTotalCost, currentOps);
        }
        
        return minTotalCost;
    }
};