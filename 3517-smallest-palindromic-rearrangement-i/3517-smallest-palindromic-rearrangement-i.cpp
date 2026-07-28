// Blessings of Shree DR.MDD \U0001f64f  
class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> count(26, 0);
        
        for(char c : s){
            count[c - 'a']++;
        }

        string firstHalf = "", middle = "";

        for(int i = 0; i < 26; i++){
            if(count[i] % 2 != 0){
                middle = string(1, 'a' + i);
            }
            firstHalf += string(count[i] / 2, 'a' + i);
        }

        string revFirstHalf = firstHalf;
        reverse(revFirstHalf.begin(), revFirstHalf.end());

        return firstHalf + middle + revFirstHalf;
    }
};
