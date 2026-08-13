// Dedicated to Junko F. Didi and Shree DR.MDD

class Solution {
public:
int largestInteger(int n, int s) {
if (s > n * 9) return -1;
if (s == 0) return 0;

    int result = 0;
    for (int pos = 0; pos < n; ++pos) {
        int val = (s >= 9) ? 9 : s;
        result = result * 10 + val;
        s -= val;
    }

    return result;
}


};