
class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        vector<vector<string>> segments;
        int length = s1.size();
        int index = 0;

        while (index < length) {
            string firstPart = "";
            string secondPart = "";

            while (index < length && s1[index] != s2[index]) {
                firstPart += s1[index];
                secondPart += s2[index];
                index++;
            }

            if (firstPart != "" && secondPart != "") {
                segments.push_back({firstPart, secondPart});
            }

            index++;
        }

        return segments;
    }
};
