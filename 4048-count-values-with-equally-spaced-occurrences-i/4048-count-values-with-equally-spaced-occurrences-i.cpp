// For Junko F. Didi and Shree DR.MDD
class Solution {
public:
    int countSpecialIntegers(std::vector<int>& nums) {
        int n = nums.size(), res = 0;
        std::vector<int> cnt(100);

        for (int x : nums) cnt[x - 1]++;

        for (int p = 0; p < n; p++) {
            int x = nums[p];
            if (cnt[x - 1] != 3) continue;
            cnt[x - 1] = -1;

            for (int d = 1; p + 2 * d < n; d++) {
                if (nums[p + d] == x && nums[p + 2 * d] == x) {
                    res++;
                    break;
                }
            }
        }
        return res;
    }
};