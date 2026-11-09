
class Solution {
public:
    int countMagicalPairs(string s) {
        int length = s.size();
        int result = 0;

        for (int start = 0; start < length - 1; start++) {
            unordered_map<int, int> leftFreq;
            unordered_map<int, int> rightFreq;

            int leftIndex = start;
            int rightIndex = start + 1;

            while (leftIndex >= 0 && rightIndex < length) {
                leftFreq[s[leftIndex]]++;
                rightFreq[s[rightIndex]]++;

                int leftDistinct = leftFreq.size();
                int rightDistinct = rightFreq.size();

                if (leftDistinct > rightDistinct) {
                    rightIndex++;
                } else if (rightDistinct > leftDistinct) {
                    leftIndex--;
                } else {
                    int leftCount = 0;
                    int rightCount = 0;

                    while (leftDistinct == leftFreq.size() && leftIndex >= 0) {
                        if (leftFreq[s[leftIndex]] == 0) break;

                        leftFreq[s[leftIndex]]++;
                        leftIndex--;
                        leftCount++;
                    }

                    while (rightDistinct == rightFreq.size() && rightIndex < length) {
                        if (rightFreq[s[rightIndex]] == 0) break;

                        rightFreq[s[rightIndex]]++;
                        rightIndex++;
                        rightCount++;
                    }

                    result += leftCount * rightCount;
                }
            }
        }

        return result;
    }
};
