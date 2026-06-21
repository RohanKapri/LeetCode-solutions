class Solution {
    public boolean checkGoodInteger(int n) {
        int sum = 0;
        int sqSum = 0;

        while (n > 0) {
            int digit = n % 10;
            sum += digit;
            sqSum += digit * digit;
            n /= 10;
        }

        return sqSum - sum >= 50;
    }
}