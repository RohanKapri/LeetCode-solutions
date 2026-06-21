public class Solution {
    public bool CheckGoodInteger(int n) {
        int ds = 0;
        int ss = 0;

        while (n > 0) {
            int curr = n % 10;
            ds += curr;
            ss += curr * curr;
            n /= 10;
        }

        return ss - ds >= 50;
    }
}