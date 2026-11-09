
class Solution {
public:
    long long minActivationCost(vector<vector<int>>& edges, vector<int>& A) {
        int n = A.size();

        vector<vector<pair<int, int>>> graph(n);

        for (auto& edge : edges) {
            graph[edge[0]].push_back({edge[1], edge[2]});
            graph[edge[1]].push_back({edge[0], edge[2]});
        }

        const long long INF = 1e18;
        long long minimumCost = INF;

        function<array<long long, 2>(int, int)> solve =
            [&](int node, int parent) {
                int parity = __builtin_popcount(A[node]) & 1;

                array<long long, 2> dp = {INF, INF};
                dp[parity] = 0;

                for (auto [child, weight] : graph[node]) {
                    if (child == parent) continue;

                    auto childDP = solve(child, node);

                    minimumCost = min({
                        minimumCost,
                        dp[0] + childDP[0] + weight,
                        dp[1] + childDP[1] + weight
                    });

                    dp[parity] = min(dp[parity], childDP[0] + weight);
                    dp[parity ^ 1] = min(dp[parity ^ 1], childDP[1] + weight);
                }

                return dp;
            };

        solve(0, -1);

        return minimumCost < INF ? minimumCost : -1;
    }
};
