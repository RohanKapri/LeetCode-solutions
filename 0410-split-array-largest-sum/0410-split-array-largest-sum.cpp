class Solution {
public:
    bool canSplit(const vector<int>& nums, int k, int maxSum) {
        int subarrayCount = 1, currentSum = 0;
        
        for (int num : nums) {
            currentSum += num;
            if (currentSum > maxSum) {
                subarrayCount++;
                currentSum = num;
                if (subarrayCount > k) {
                    return false;
                }
            }
        }
        
        return true;
    }

    int splitArray(vector<int>& nums, int k) {
        int left = *max_element(nums.begin(), nums.end());
        int right = accumulate(nums.begin(), nums.end(), 0);
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (canSplit(nums, k, mid)) {
                right = mid;  // Try for a smaller max sum
            } else {
                left = mid + 1;  // Increase the sum to split into k subarrays
            }
        }
        
        return left;
    }
};
