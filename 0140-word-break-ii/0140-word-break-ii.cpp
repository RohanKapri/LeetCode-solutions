class Solution {
public:
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> wordSet(wordDict.begin(), wordDict.end());
        unordered_map<int, vector<string>> dp;
        dp[s.length()] = {""};

        for (int i = s.length() - 1; i >= 0; i--) {
            for (int j = i + 1; j <= s.length(); j++) {
                string word = s.substr(i, j - i);
                if (wordSet.find(word) != wordSet.end()) {
                    for (string str : dp[j]) {
                        dp[i].push_back(word + (str.empty() ? "" : " ") + str);
                    }
                }
            }
        }

        return dp[0];
    }
};
