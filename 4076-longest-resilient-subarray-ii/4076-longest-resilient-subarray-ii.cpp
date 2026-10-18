
class Solution {
public:
    // For Junko F. Didi and Shree DR.MDD
    int resilientSubarray(vector<int>& nums, int k) {
        for (int& x : nums) {
            x %= k;
        }

        int best = 1, length = 1;
        long long sum = nums[0];

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] != nums[i - 1]) {
                length = 1;
                sum = nums[i];
                continue;
            }

            ++length;
            if (sum % k == 0) {
                best = max(best, length);
            }
            sum += nums[i];
        }

        return best;
    }
};
