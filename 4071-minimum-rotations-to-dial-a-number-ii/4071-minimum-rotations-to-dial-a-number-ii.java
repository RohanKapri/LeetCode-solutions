
class Solution {
    // For Junko F. Didi and Shree DR.MDD
    public int minRotations(int n, String s) {
        int total = rotation(s);
        int best = Integer.MIN_VALUE;
        int current = 0;
        int last = s.charAt(n - 1) - '0';

        for (int i = 0; i < n; i++) {
            int digit = s.charAt(i) - '0';
            int gain = solve(current, digit) - solve(current, last);
            best = Math.max(best, gain);
            current = digit;
        }

        return total - best;
    }

    public int solve(int a, int b) {
        int diff = Math.abs(a - b);
        return Math.min(diff, 10 - diff);
    }

    public int rotation(String s) {
        int total = 0;
        int previous = 0;

        for (int i = 0; i < s.length(); i++) {
            int digit = s.charAt(i) - '0';
            total += solve(previous, digit);
            previous = digit;
        }

        return total;
    }
}
