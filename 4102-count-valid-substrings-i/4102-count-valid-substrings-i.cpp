class Solution {
public:
    long long countValidSubstrings(string s) {
        long long total = 0;
        int length = s.length();

        vector<int> matches(length, 0);

        for (int idx = 0; idx < length - 2; idx++) {
            if (s[idx] == 'a' && s[idx + 1] == 'b' && s[idx + 2] == 'c') {
                matches[idx] = 1;
            }
        }

        vector<int> nextPosition(length, 0);
        nextPosition[length - 1] = length;

        int nearest = length;

        for (int idx = length - 1; idx >= 0; idx--) {
            if (matches[idx]) {
                nearest = idx;
                nextPosition[idx] = nearest;
            } else {
                nextPosition[idx] = nearest;
            }
        }

        for (int idx = 0; idx < length; idx++) {
            if (nextPosition[idx] == length) {
                total += length - idx;
            } else {
                total += nextPosition[idx] - idx + 2;
            }
        }

        return total;
    }
};
