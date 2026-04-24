class Solution {
public:
    string minWindow(string s, string t) {
        if (s.size() < t.size()) return "";

        vector<int> charCount(128, 0);
        int requiredMatches = t.size(), left = 0, right = 0, minLength = INT_MAX, minStart = 0;

        for (char c : t) {
            charCount[c]++;
        }

        while (right < s.size()) {
            if (charCount[s[right]] > 0) requiredMatches--;
            charCount[s[right]]--;
            right++;

            while (requiredMatches == 0) {
                if (right - left < minLength) {
                    minLength = right - left;
                    minStart = left;
                }

                charCount[s[left]]++;
                if (charCount[s[left]] > 0) requiredMatches++;
                left++;
            }
        }

        return minLength == INT_MAX ? "" : s.substr(minStart, minLength);
    }
};
