class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        int maxLength = 0;
        
        for (int start = 0; start < n; start++) {
            unordered_map<char, int> freq;
            for (int end = start; end < n; end++) {
                freq[s[end]]++;
                
                if (freq[s[end]] > 2) {
                    break;
                }
                
                maxLength = max(maxLength, end - start + 1);
            }
        }
        
        return maxLength;
    }
};
