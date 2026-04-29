class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        while (left < right) {
            right &= (right - 1);  // Remove the rightmost 1 bit in 'right'
        }
        return left & right;
    }
};
