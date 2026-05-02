class Solution {
    public int maxRotateFunction(int[] nums) {
        int n = nums.length;
        int totalSum = 0;
        int currentF = 0;
        
        // Calculate F(0) and the total sum of the array
        for (int i = 0; i < n; i++) {
            totalSum += nums[i];
            currentF += i * nums[i];
        }
        
        int maxF = currentF;
        
        // Compute F(k) for k = 1, 2, ..., n-1
        for (int k = 1; k < n; k++) {
            currentF = currentF + totalSum - n * nums[n - k];
            maxF = Math.max(maxF, currentF);
        }
        
        return maxF;
    }
}
