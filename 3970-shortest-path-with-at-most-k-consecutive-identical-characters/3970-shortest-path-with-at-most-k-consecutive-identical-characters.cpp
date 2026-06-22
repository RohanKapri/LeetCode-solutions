class Solution {
public:
    int shortestPath(int n, vector<vector<int>>& edges, string labels, int k) {
        // 1. Build Adjacency List
        // adj[u] stores pairs of {neighbor, weight}
        vector<vector<pair<int, int>>> adj(n);
        for (const auto& edge : edges) {
            adj[edge[0]].push_back({edge[1], edge[2]});
        }

        // 2. Distance Table: dist[node * (k + 1) + consecutive_count]
        // Flattening a 2D array [n][k + 1] into 1D for better performance
        const int INF = 1e9 + 7; // Safe infinity that won't overflow
        vector<int> dist(n * (k + 1), INF);

        // Base case: Starting at node 0, with a consecutive count of 1, costs 0
        dist[0 * (k + 1) + 1] = 0;

        // 3. Priority Queue (Min-Heap)
        // Element structure: tuple<current_weight, current_node,
        // consecutive_count> priority_queue in C++ is a Max-Heap by default, so
        // we use greater<> to make it a Min-Heap
        priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>,
                       greater<tuple<int, int, int>>>
            pq;

        pq.push({0, 0, 1});

        while (!pq.empty()) {
            auto [current_weight, u, consecutive_count] = pq.top();
            pq.pop();

            // Target reached: Because it's a Min-Heap, the first time we pop
            // destination node n-1, it is guaranteed to be the shortest valid
            // path.
            if (u == n - 1) {
                return current_weight;
            }

            // If we found a shorter path to this specific state already, skip
            // it
            if (current_weight > dist[u * (k + 1) + consecutive_count]) {
                continue;
            }

            // Explore neighbors
            for (const auto& [v, weight] : adj[u]) {
                int next_count =
                    (labels[v] == labels[u]) ? consecutive_count + 1 : 1;

                if (next_count <= k) {
                    int next_weight = current_weight + weight;

                    // DOMINANCE PRUNING:
                    // If there is already a path to 'v' with a SMALLER OR EQUAL
                    // consecutive count AND a SMALLER OR EQUAL weight, this new
                    // path offers no advantage.
                    bool is_dominated = false;
                    for (int c = 1; c <= next_count; ++c) {
                        if (dist[v * (k + 1) + c] <= next_weight) {
                            is_dominated = true;
                            break;
                        }
                    }

                    if (is_dominated) {
                        continue;
                    }

                    // Relaxation step
                    int next_state_idx = v * (k + 1) + next_count;
                    if (next_weight < dist[next_state_idx]) {
                        dist[next_state_idx] = next_weight;
                        pq.push({next_weight, v, next_count});
                    }
                }
            }
        }

        // If priority queue becomes empty and node n-1 wasn't popped, no valid
        // path exists
        return -1;
    }
};