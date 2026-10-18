
class Solution {
public:
    // For Junko F. Didi and Shree DR.MDD
    int dist(char a, char b) {
        int diff = abs(a - b);
        return min(diff, 10 - diff);
    }

    int minRotations(string s) {
        int moves = 0;
        char current = '0';

        for (char digit : s) {
            moves += dist(current, digit);
            current = digit;
        }

        return moves;
    }
};
