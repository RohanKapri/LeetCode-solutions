class Solution {
public:
    int maxScore(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int ans = INT_MIN;
        for(int i=0; i<n; i++) {
            int cur = grid[i][0];
            for(int j=1; j<m; j++) {
                cur = max(grid[i][j] + grid[i][j-1], cur + grid[i][j]);
                ans = max(ans, cur);
            }
        }
        for(int j=0; j<m; j++) {
            int cur = grid[0][j];
            for(int i=1; i<n; i++) {
                cur = max(grid[i][j] + grid[i-1][j], cur + grid[i][j]);
                ans = max(ans, cur);
            }
        }
        for(int i=1; i<n-1; i++) {
            for(int j=1; j<m-1; j++) {
                ans = max(ans, grid[i][j]);
            }
        }
        return ans;
    }
};