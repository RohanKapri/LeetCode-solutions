public class Solution {
    public int CountKthRoots(int l, int r, int k) {
        if (k == 1) {
            return r - l + 1;
        }

        int result = 0;
        int x = 0;

        while (Math.Pow(x, k) <= r) {
            if (Math.Pow(x, k) >= l) {
                result++;
            }
            x++;
        }

        return result;
    }
}