
class Solution {
public:
    vector<int> countSuffix(vector<int>& nums, vector<int>& target) {
        int sizeA = nums.size(), sizeB = target.size(), totalSize = sizeA + sizeB;

        int first[sizeA + 10];
        memset(first, 0, sizeof(first));

        int second[sizeB + 10];
        memset(second, 0, sizeof(second));

        for (int pos = 1; pos <= sizeA; pos++) first[pos] = nums[pos - 1];
        for (int pos = 1; pos <= sizeB; pos++) second[pos] = target[pos - 1];

        int combined[totalSize + 10];
        memset(combined, 0, sizeof(combined));

        for (int pos = 1; pos <= sizeA; pos++) combined[pos] = first[pos];
        for (int pos = 1; pos <= sizeB; pos++) combined[sizeA + pos] = second[pos];

        int prefix[totalSize + 10];
        memset(prefix, 0, sizeof(prefix));

        for (int pos = 2, left = 0, right = 0; pos <= totalSize; pos++) {
            prefix[pos] = pos <= right ? min(prefix[pos - left + 1], right - pos + 1) : 0;

            while (pos + prefix[pos] <= totalSize &&
                   combined[1 + prefix[pos]] == combined[pos + prefix[pos]]) {
                prefix[pos]++;
            }

            if (pos + prefix[pos] - 1 > right) {
                left = pos;
                right = pos + prefix[pos] - 1;
            }
        }

        int decreasing[sizeB + 10];
        memset(decreasing, 0, sizeof(decreasing));

        for (int pos = 1; pos <= sizeB; pos++) {
            decreasing[pos] = (second[pos - 1] >= second[pos]
                               ? decreasing[pos - 1] : 0) + 1;
        }

        vector<int> answer;
        unordered_map<int, int> frequency;
        int difference = 0;

        for (int pos = 1; pos <= sizeA; pos++) {
            difference += ++frequency[first[pos]] == 1;
        }

        for (int pos = 1; pos <= sizeB; pos++) {
            difference += --frequency[second[pos]] == 0
                          ? -1 : (frequency[second[pos]] == -1 ? 1 : 0);

            if (pos - sizeA >= 1) {
                difference += ++frequency[second[pos - sizeA]] == 0
                              ? -1 : (frequency[second[pos - sizeA]] == 1 ? 1 : 0);
            }

            if (pos < sizeA) continue;
            else if (difference != 0) answer.push_back(0);
            else {
                int commonPrefix = prefix[sizeA + (pos - sizeA + 1)];
                int decreasingStart = sizeA - min(decreasing[pos], sizeA) + 1;

                answer.push_back(max(min(commonPrefix + 1, sizeA) - decreasingStart + 1, 0));
            }
        }

        return answer;
    }
};
