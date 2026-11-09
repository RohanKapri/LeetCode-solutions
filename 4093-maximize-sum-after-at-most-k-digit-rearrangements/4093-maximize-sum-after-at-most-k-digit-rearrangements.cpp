
class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
        vector<int> gains;
        long long totalSum = 0;

        for (int idx = 0; idx < nums.size(); idx++) {
            totalSum += nums[idx];

            int value = nums[idx];
            vector<int> digits;

            while (value) {
                digits.push_back(value % 10);
                value /= 10;
            }

            sort(digits.begin(), digits.end());

            long long rearranged = 0;

            for (int pos = digits.size() - 1; pos >= 0; pos--) {
                rearranged = 1LL * rearranged * 10 + digits[pos];
            }

            if (nums[idx] < rearranged) {
                int difference = rearranged - nums[idx];
                gains.push_back(difference);
            }
        }

        sort(gains.begin(), gains.end());

        for (int idx = gains.size() - 1; idx >= 0 && k != 0; idx--) {
            totalSum += gains[idx];
            k--;
        }

        return totalSum;
    }
};
