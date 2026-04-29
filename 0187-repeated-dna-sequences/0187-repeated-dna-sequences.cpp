class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string, int> seen;
        vector<string> result;
        if (s.size() < 10) return result;  // Return empty if string is shorter than 10 characters
        
        for (int i = 0; i <= s.size() - 10; ++i) {
            string sub = s.substr(i, 10);
            if (++seen[sub] == 2) result.push_back(sub);
        }
        return result;
    }
};
