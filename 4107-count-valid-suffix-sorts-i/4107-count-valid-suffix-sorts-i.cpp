
class Solution {
public:
    int countSuffix(vector<int>& nums, vector<int>& target) {
        int size = nums.size();
        int commonIndex = 0, result = 0;

        while (commonIndex < size && nums[commonIndex] == target[commonIndex]) {
            commonIndex++;
        }

        commonIndex--;
        commonIndex = max(0, commonIndex);

        int previous = INT_MIN;
        unordered_map<int, int> frequency;

        for (int pos = size - 1; pos >= 0; pos--) {
            frequency[nums[pos]]++;
            frequency[target[pos]]--;

            if (target[pos] < previous) break;

            if (frequency[target[pos]] == 0)
                frequency.erase(target[pos]);

            if (frequency[nums[pos]] == 0)
                frequency.erase(nums[pos]);

            if (frequency.size() == 0 && pos - 1 <= commonIndex) {
                result++;
            }

            previous = target[pos];
        }

        return result;
    }
};
