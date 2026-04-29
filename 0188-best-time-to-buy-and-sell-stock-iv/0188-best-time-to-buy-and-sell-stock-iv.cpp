#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

class Solution {
public:
    int maxProfit(int k, const vector<int>& prices) {
        if (prices.empty() || k == 0) return 0;

        int n = prices.size();
        if (k >= n / 2) {
            int maxProfit = 0;
            for (int i = 1; i < n; ++i) {
                maxProfit += max(0, prices[i] - prices[i - 1]);
            }
            return maxProfit;
        }

        vector<int> profits(k + 1, 0), minCost(k + 1, prices[0]);

        for (int price : prices) {
            for (int i = 1; i <= k; ++i) {
                minCost[i] = min(minCost[i], price - profits[i - 1]);
                profits[i] = max(profits[i], price - minCost[i]);
            }
        }

        return profits[k];
    }
};
