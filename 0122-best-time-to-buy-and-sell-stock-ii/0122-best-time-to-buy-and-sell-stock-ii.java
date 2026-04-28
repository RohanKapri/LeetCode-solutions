class Solution {
    public int maxProfit(int[] prices) {
        int profit = 0;
        
        // Traverse through prices to calculate profit
        for (int i = 1; i < prices.length; i++) {
            // If the price is higher today than yesterday, we can profit by selling today
            if (prices[i] > prices[i - 1]) {
                profit += prices[i] - prices[i - 1];
            }
        }
        
        return profit;
    }
}
