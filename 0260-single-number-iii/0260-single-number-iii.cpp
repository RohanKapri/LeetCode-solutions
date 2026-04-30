class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xorResult = 0;
        
        // Step 1: XOR all elements to get the XOR of the two unique numbers
        for (int num : nums) {
            xorResult ^= num;
        }

        // Step 2: Find a rightmost set bit (a bit where the two unique numbers differ)
        int diffBit = 1;
        while ((xorResult & diffBit) == 0) {
            diffBit <<= 1;  // Shift to find the first set bit
        }
        
        // Step 3: Partition the numbers into two groups and XOR separately
        int num1 = 0, num2 = 0;
        for (int num : nums) {
            if (num & diffBit) {
                num1 ^= num;  // XOR with num1 if the bit is set
            } else {
                num2 ^= num;  // XOR with num2 if the bit is not set
            }
        }
        
        return {num1, num2};  // The two unique numbers
    }
};
