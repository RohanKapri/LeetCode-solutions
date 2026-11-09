
class Solution {
public:
    bool repeatedStringMatch(string a, string b, int x, int y) {
        long long firstLen = a.size(), secondLen = b.size();
        long long available = firstLen * x;
        long long required = secondLen * y;

        if (required > available) return false;

        long long checkLen = min(required, lcm(firstLen, secondLen));

        string firstStr, secondStr;

        while ((long long)firstStr.size() < firstLen + checkLen &&
               (long long)firstStr.size() < available) {
            firstStr += a;
        }

        while ((long long)secondStr.size() < checkLen) {
            secondStr += b;
        }

        for (long long pos = 0; pos < firstLen && pos + required <= available; pos++) {
            if (firstStr.compare(pos, checkLen, secondStr) == 0)
                return true;
        }

        return false;
    }
};
