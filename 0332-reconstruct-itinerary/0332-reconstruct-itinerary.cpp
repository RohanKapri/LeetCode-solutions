class Solution {
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        unordered_map<string, priority_queue<string, vector<string>, greater<string>>> graph;
        vector<string> itinerary;
        
        for (auto& ticket : tickets) {
            graph[ticket[0]].push(ticket[1]);
        }

        stack<string> dfsStack;
        dfsStack.push("JFK");
        
        while (!dfsStack.empty()) {
            string airport = dfsStack.top();
            if (graph[airport].empty()) {
                itinerary.push_back(airport);
                dfsStack.pop();
            } else {
                dfsStack.push(graph[airport].top());
                graph[airport].pop();
            }
        }

        reverse(itinerary.begin(), itinerary.end());
        return itinerary;
    }
};
