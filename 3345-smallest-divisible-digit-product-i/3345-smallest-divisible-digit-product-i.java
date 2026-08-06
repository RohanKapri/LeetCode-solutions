class Solution {
    public int smallestNumber(int n, int t) {
        while (true) {
            int product = 1;
            int temp = n;
            
            // Calculate the product of the digits of the current number
            while (temp > 0) {
                product *= temp % 10;
                temp /= 10;
            }
            
            // If the product is divisible by t, return the number
            if (product % t == 0) {
                return n;
            }
            
            // Increment the number if the condition is not met
            n++;
        }
    }
}
