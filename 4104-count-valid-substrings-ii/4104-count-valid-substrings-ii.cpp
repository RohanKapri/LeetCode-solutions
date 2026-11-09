using ll = long long;

class Solution {
public:
    long long countValidSubstrings(string s) {
        int length = s.size();
        ll total = 0;

        int lastA = -1;
        int lastB = -1;
        int previousA = -1;
        int leftBoundary = 0;

        for (int rightBoundary = 0; rightBoundary < length; rightBoundary++) {
            if (s[rightBoundary] == 'a') {
                lastA = rightBoundary;
            } else if (s[rightBoundary] == 'b' && lastA != -1) {
                lastB = rightBoundary;
                previousA = lastA;
            } else if (s[rightBoundary] == 'c' && lastB != -1) {
                leftBoundary = max(leftBoundary, previousA + 1);
            }

            total += rightBoundary - leftBoundary + 1;
        }

        return total;
    }
};
