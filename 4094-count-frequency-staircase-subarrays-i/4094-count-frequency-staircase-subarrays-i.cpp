class Solution {
public:
    int countStaircase(vector<int>& nums) {
        int result = 0;

        for (int start = 0; start < nums.size(); start++) {
            unordered_map<int, int> frequency;
            unordered_map<int, int> expected;
            int nextValue = 1;
            int invalid = 0;

            for (int end = start; end < nums.size(); end++) {
                int element = nums[end];

                if (frequency[element] > 0 && frequency[element] != expected[element])
                    invalid--;

                if (frequency[element] == 0)
                    expected[element] = nextValue++;

                frequency[element]++;

                if (frequency[element] != expected[element])
                    invalid++;

                if (invalid == 0)
                    result++;
            }
        }

        return result;
    }
};
