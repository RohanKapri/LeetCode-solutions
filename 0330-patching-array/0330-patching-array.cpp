class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long long current = 1;
        int i = 0, patches = 0;
        while (current <= n) {
            if (i < nums.size() && nums[i] <= current) {
                current += nums[i++];
            } else {
                current += current;
                patches++;
            }
        }
        return patches;
    }
};
