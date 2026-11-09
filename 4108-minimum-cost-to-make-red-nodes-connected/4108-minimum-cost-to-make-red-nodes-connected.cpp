class Solution {
public:
    vector<vector<int>> adjacencyList;
    vector<int> nodeCount;
    vector<array<long long, 3>> states;

    void dfs(int node, int parent, const string& colors) {
        nodeCount[node] = 1;

        for (int nextNode : adjacencyList[node]) {
            if (nextNode == parent) continue;

            dfs(nextNode, node, colors);
            nodeCount[node] += nodeCount[nextNode];
        }

        long long redCost =
            (colors[node] == 'R') ? 0LL : nodeCount[node];

        long long blueCost =
            (colors[node] == 'B') ? 0LL : nodeCount[node];

        states[node][0] = blueCost;
        states[node][1] = redCost;

        for (int nextNode : adjacencyList[node]) {
            if (nextNode == parent) continue;

            states[node][0] += states[nextNode][0];

            states[node][1] += min(
                states[nextNode][0],
                states[nextNode][1]
            );
        }

        const long long LIMIT = LLONG_MAX / 4;
        states[node][2] = LIMIT;

        for (int nextNode : adjacencyList[node]) {
            if (nextNode == parent) continue;

            long long option =
                states[node][0]
                - states[nextNode][0]
                + min(states[nextNode][1], states[nextNode][2]);

            states[node][2] = min(states[node][2], option);
        }
    }

    long long minCost(int n, string colors,
                      vector<vector<int>>& edges) {
        adjacencyList.assign(n, {});
        nodeCount.assign(n, 0);
        states.assign(n, {0LL, 0LL, 0LL});

        for (const auto& connection : edges) {
            adjacencyList[connection[0]].push_back(connection[1]);
            adjacencyList[connection[1]].push_back(connection[0]);
        }

        dfs(0, -1, colors);

        return min({states[0][0], states[0][1], states[0][2]});
    }
};
