class Solution {
    using ll = long long;
public:
    long long countMagicalPairs(string s) {
        int length = s.size();
        vector<vector<int>> positions(26, vector<int>());

        for (int idx = 0; idx < length; idx++) {
            positions[s[idx] - 'a'].push_back(idx);
        }

        ll answer = 0;

        for (int split = 0; split <= length - 2; split++) {
            vector<int> leftPositions;
            vector<int> rightPositions;

            for (int letter = 0; letter < 26; letter++) {
                if (positions[letter].empty()) continue;

                auto itr = lower_bound(
                    positions[letter].begin(),
                    positions[letter].end(),
                    split + 1
                );

                if (itr != positions[letter].end()) {
                    int offset = itr - positions[letter].begin();
                    rightPositions.push_back(positions[letter][offset]);
                }

                if (itr != positions[letter].begin()) {
                    int offset = itr - positions[letter].begin() - 1;
                    leftPositions.push_back(positions[letter][offset]);
                }
            }

            leftPositions.push_back(-1);
            rightPositions.push_back(length);

            sort(leftPositions.begin(), leftPositions.end());
            sort(rightPositions.begin(), rightPositions.end());

            int leftPtr = leftPositions.size() - 1;
            int rightPtr = 0;

            while (leftPtr >= 1 && rightPtr <= (int)rightPositions.size() - 2) {
                int leftBoundary = leftPositions[leftPtr];
                int previousBoundary = leftPositions[leftPtr - 1] + 1;

                int rightBoundary = rightPositions[rightPtr];
                int nextBoundary = rightPositions[rightPtr + 1] - 1;

                int leftLength = leftBoundary - previousBoundary + 1;
                int rightLength = nextBoundary - rightBoundary + 1;

                answer += 1LL * leftLength * rightLength;

                leftPtr--;
                rightPtr++;
            }
        }

        return answer;
    }
};
