class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int total = 0;

        for (int j = 0; j < 32; j++) {
            int perBit = 0;

            for (int x : nums) {
                perBit += (x >> j) & 1;
            }

            total += perBit * (nums.size() - perBit);

        }

        return total;
    }
};