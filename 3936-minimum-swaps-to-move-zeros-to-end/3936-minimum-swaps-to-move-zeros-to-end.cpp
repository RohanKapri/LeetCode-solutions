class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int i = 0, j = static_cast<int>(nums.size()) - 1;
        int c = 0;

        while (i <= j) {
            if (nums[i] > 0) {
                i++;
            } else if (nums[j] == 0) {
                j--;
            } else {
                c++;
                i++;
                j--;
            }
        }

        return c;
    }
};