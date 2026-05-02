class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return 0;
        
        int count = 0, length = 0;
        
        // Loop through the array starting from index 2 (third element)
        for (int i = 2; i < n; ++i) {
            // Check if the difference between consecutive elements is the same
            if (nums[i] - nums[i-1] == nums[i-1] - nums[i-2]) {
                // If the differences are the same, increment the current subarray length
                length++;
                // Add the number of valid subarrays ending at this index
                count += length;
            } else {
                // Reset the length if the difference is not consistent
                length = 0;
            }
        }
        
        return count;
    }
};
