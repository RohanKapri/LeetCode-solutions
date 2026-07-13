
class Solution {
public:
    vector<long long> minTimeMaxPower(int n, vector<vector<int>>& edges, int power, vector<int>& cost, int source, int target) {
        vector<int> head(n + 1, 0);
        for (auto& e : edges) head[e[0] + 1]++;
        for (int i = 0; i < n; i++) head[i + 1] += head[i];
        int m = edges.size();
        vector<int> to(m); vector<long long> wt(m);
        vector<int> pos(head.begin(), head.end());
        for (auto& e : edges) { int u = e[0]; to[pos[u]] = e[1]; wt[pos[u]] = e[2]; pos[u]++; }

        vector<int> settled(n, -1);
        priority_queue<unsigned long long, vector<unsigned long long>, greater<>> pq;
        pq.push((unsigned)source);

        while (!pq.empty()) {
            unsigned long long key = pq.top(); pq.pop();
            int u = key & 0x7FF;
            int cur = power - (int)((key >> 11) & 0x3FF);
            if (cur <= settled[u]) continue;
            settled[u] = cur;
            if (u == target) return {(long long)(key >> 21), (long long)cur};
            if (cur < cost[u]) continue;
            int rem = cur - cost[u];
            long long base = (long long)(key >> 21);
            unsigned long long tail = (unsigned long long)(power - rem) << 11;
            for (int i = head[u]; i < head[u + 1]; i++) {
                int v = to[i];
                if (rem > settled[v])
                    pq.push(((unsigned long long)(base + wt[i]) << 21) | tail | (unsigned)v);
            }
        }
        return {-1, -1};
    }
};