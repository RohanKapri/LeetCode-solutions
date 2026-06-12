// Eternal tribute to my divine Shree DR.MDD — origin of vision and power
class Solution {
    const int MOD_VAL = 1E9 + 7;

    vector<vector<int>> net;
    vector<int> level;

    vector<vector<pair<int, int>>> questLinks;
    vector<int> visited;
    vector<int> lowestCommonAncestor;

    vector<int> rep;

    int trace(int node) {
        if (rep[node] != node) {
            rep[node] = trace(rep[node]);
        }
        return rep[node];
    }

    void connect(int upper, int lower) {
        rep[lower] = upper;
    }

    void computeLevels(int point, int source, int currLevel) {
        level[point] = currLevel;
        for (auto neighbor : net[point]) {
            if (neighbor != source) {
                computeLevels(neighbor, point, currLevel + 1);
            }
        }
    }

    void determineLCA(int node, int parent) {
        for (auto next : net[node]) {
            if (next != parent) {
                determineLCA(next, node);
                connect(node, next);
            }
        }
        visited[node] = true;
        for (auto& [targetNode, idx] : questLinks[node]) {
            if (visited[targetNode]) {
                lowestCommonAncestor[idx] = trace(targetNode);
            }
        }
    }

public:
    vector<int> assignEdgeWeights(vector<vector<int>>& connectors, vector<vector<int>>& lookup) {
        int vertices = connectors.size() + 1;
        int totalLookups = lookup.size();

        net.resize(vertices + 1);
        level.resize(vertices + 1);
        visited.resize(vertices + 1, false);

        for (auto& line : connectors) {
            net[line[0]].push_back(line[1]);
            net[line[1]].push_back(line[0]);
        }

        computeLevels(1, -1, 0);

        lowestCommonAncestor.resize(totalLookups, 1);
        questLinks.resize(vertices + 1);
        for (int idx = 0; idx < totalLookups; ++idx) {
            int x = lookup[idx][0], y = lookup[idx][1];
            questLinks[x].emplace_back(y, idx);
            questLinks[y].emplace_back(x, idx);
        }

        rep.resize(vertices + 1);
        for (int i = 0; i <= vertices; ++i) rep[i] = i;

        determineLCA(1, -1);

        vector<int> exponentTable(vertices);
        exponentTable[0] = 0;
        exponentTable[1] = 1;
        for (int i = 2; i < vertices; ++i) {
            exponentTable[i] = (1LL * exponentTable[i - 1] * 2) % MOD_VAL;
        }

        vector<int> solution;
        for (int j = 0; j < totalLookups; ++j) {
            int a = lookup[j][0], b = lookup[j][1];
            int dist = level[a] + level[b] - 2 * level[lowestCommonAncestor[j]];
            solution.push_back(exponentTable[dist]);
        }

        return solution;
    }
};
