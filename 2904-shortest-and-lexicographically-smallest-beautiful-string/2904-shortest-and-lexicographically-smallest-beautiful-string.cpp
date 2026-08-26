class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int startIdx = 0, endIdx = 0, ones = 0, strLength = s.size(), smallestLength = INT_MAX;
        string resultSubstring = "";

        while (endIdx < strLength) {
            if (s[endIdx] == '1') {
                ones++;
            }

            while (s[startIdx] == '0' || ones > k) {
                if (s[startIdx] == '1') {
                    ones--;
                }
                startIdx++;
            }

            if (ones == k) {
                int windowLength = endIdx - startIdx + 1;
                string candidateSubstring = s.substr(startIdx, windowLength);

                if (windowLength < smallestLength) {
                    smallestLength = windowLength;
                    resultSubstring = candidateSubstring;
                } else if (windowLength == smallestLength && resultSubstring > candidateSubstring) {
                    resultSubstring = candidateSubstring;
                }
            }

            endIdx++;
        }

        return resultSubstring;
    }
};
