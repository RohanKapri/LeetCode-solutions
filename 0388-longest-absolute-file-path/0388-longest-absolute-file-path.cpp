class Solution {
public:
    int lengthLongestPath(string input) {
        vector<int> pathLengths(1, 0);
        int maxLength = 0;
        
        istringstream ss(input);
        string line;
        
        while (getline(ss, line)) {
            int level = count(line.begin(), line.end(), '\t');
            int len = line.length() - level;
            if (level + 1 >= pathLengths.size()) {
                pathLengths.resize(level + 2, 0);
            }
            if (line.find('.') != string::npos) {
                maxLength = max(maxLength, pathLengths[level] + len);
            } else {
                pathLengths[level + 1] = pathLengths[level] + len + 1;
            }
        }
        
        return maxLength;
    }
};
