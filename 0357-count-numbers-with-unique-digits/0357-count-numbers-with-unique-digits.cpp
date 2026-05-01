class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if (n == 0) return 1;
        int result = 10, mul = 9, uniqueDigits = 9;
        for (int i = 2; i <= n; ++i) {
            uniqueDigits *= mul--;
            result += uniqueDigits;
        }
        return result;
    }
};
