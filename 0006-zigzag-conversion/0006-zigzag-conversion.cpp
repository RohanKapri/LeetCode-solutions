class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.size()) {
            return s;
        }
        string output;
        int strLength = s.size();
        int interval = 2 * numRows - 2;
        for (int rowIdx = 0; rowIdx < numRows; rowIdx++) {
            for (int pos = 0; pos + rowIdx < strLength; pos += interval) {
                output.push_back(s[pos + rowIdx]);
                if (rowIdx != 0 && rowIdx != numRows - 1 && pos + interval - rowIdx < strLength) {
                    output.push_back(s[pos + interval - rowIdx]);
                }
            }
        }
        return output;
    }
};
