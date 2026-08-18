class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        vector<int> freqCount(51, 0);
        for (int num : nums) {
            freqCount[num]++;
        }
        if (k == 1) {
            for (int i = 50; i >= 0; i--) {
                if (freqCount[i] == 1) return i;
            }
        } else if (k == nums.size()) {
            return *max_element(nums.begin(), nums.end());
        } else {
            int maxValue = -1;
            if (freqCount[nums.front()] == 1) maxValue = max(maxValue, nums.front());
            if (freqCount[nums.back()] == 1) maxValue = max(maxValue, nums.back());
            return maxValue;
        }
        return -1;
    }
};
