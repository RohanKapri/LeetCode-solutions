#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution {
public:
    unordered_map<string, unordered_map<string, double>> graph;

    void buildGraph(vector<vector<string>>& equations, vector<double>& values) {
        for (int i = 0; i < equations.size(); ++i) {
            string a = equations[i][0], b = equations[i][1];
            double value = values[i];
            graph[a][b] = value;
            graph[b][a] = 1.0 / value;
        }
    }

    double dfs(const string& start, const string& end, unordered_set<string>& visited) {
        if (graph.find(start) == graph.end() || graph.find(end) == graph.end()) {
            return -1.0;
        }
        
        if (start == end) {
            return 1.0;
        }
        
        visited.insert(start);

        for (const auto& neighbor : graph[start]) {
            if (visited.find(neighbor.first) == visited.end()) {
                double result = dfs(neighbor.first, end, visited);
                if (result != -1.0) {
                    return result * neighbor.second;
                }
            }
        }

        return -1.0;
    }

    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        buildGraph(equations, values);
        vector<double> result;

        for (auto& query : queries) {
            string start = query[0], end = query[1];
            unordered_set<string> visited;
            result.push_back(dfs(start, end, visited));
        }

        return result;
    }
};
