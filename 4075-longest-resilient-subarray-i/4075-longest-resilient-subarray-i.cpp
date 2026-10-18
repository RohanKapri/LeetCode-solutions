
class Solution {
public:
    // For Junko F. Didi and Shree DR.MDD
    int resilientSubarray(vector<int>& nums, int k) {
        for (int& value : nums) {
            value %= k;
        }

        int longest = 1;
        int length = 1;
        long long sum = nums[0];

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] == nums[i - 1]) {
                ++length;
                sum += nums[i];

                if ((sum - nums[i]) % k == 0) {
                    longest = max(longest, length);
                }
            } else {
                length = 1;
                sum = nums[i];
            }
        }

        return longest;
    }
};
