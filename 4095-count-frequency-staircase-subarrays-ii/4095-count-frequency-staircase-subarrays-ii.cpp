
class Solution {
public:
    int countStaircase(vector<int>& nums) {
        int length = nums.size();
        int result = 0;

        vector<int> frequency(100001, 0);
        vector<int> required(100001, 0);

        vector<int> visited;
        visited.reserve(450);

        for (int start = 0; start < length; start++) {
            int distinct = 0;
            int satisfied = 0;

            for (int end = start; end < length; end++) {
                int value = nums[end];

                if (frequency[value] == 0) {
                    visited.push_back(value);
                    distinct++;

                    if (start + (1LL * distinct * (distinct + 1) / 2) > length) {
                        break;
                    }

                    required[value] = distinct;
                }

                frequency[value]++;

                if (frequency[value] > required[value]) {
                    break;
                }
                else if (frequency[value] == required[value]) {
                    satisfied++;

                    if (distinct == satisfied) {
                        result++;
                    }
                }
            }

            for (int element : visited) {
                frequency[element] = 0;
            }

            visited.clear();
        }

        return result;
    }
};
