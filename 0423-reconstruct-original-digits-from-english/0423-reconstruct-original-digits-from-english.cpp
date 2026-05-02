class Solution {
public:
    string originalDigits(string s) {
        vector<int> count(10, 0);
        vector<int> freq(26, 0);
        
        for (char c : s) {
            freq[c - 'a']++;
        }
        
        count[0] = freq['z' - 'a']; // "zero" has unique 'z'
        count[2] = freq['w' - 'a']; // "two" has unique 'w'
        count[4] = freq['u' - 'a']; // "four" has unique 'u'
        count[6] = freq['x' - 'a']; // "six" has unique 'x'
        count[8] = freq['g' - 'a']; // "eight" has unique 'g'
        
        count[3] = freq['h' - 'a'] - count[8]; // "three" has 'h' after "eight" removed
        count[5] = freq['f' - 'a'] - count[4]; // "five" has 'f' after "four" removed
        count[7] = freq['s' - 'a'] - count[6]; // "seven" has 's' after "six" removed
        count[1] = freq['o' - 'a'] - count[0] - count[2] - count[4]; // "one" has 'o' after "zero", "two", "four" removed
        count[9] = freq['i' - 'a'] - count[5] - count[6] - count[8]; // "nine" has 'i' after "five", "six", "eight" removed

        string result;
        for (int i = 0; i < 10; i++) {
            result += string(count[i], '0' + i);
        }
        
        return result;
    }
};
