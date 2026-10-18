
class Solution {
public:
    // For Junko F. Didi and Shree DR.MDD
    long long minInversions(vector<string>& words, vector<int>& target) {
        int n = words.size();
        vector<int> rank(n);
        for (int i = 0; i < n; ++i) rank[target[i]] = i;

        int limit = 1;
        for (const auto& word : words) limit += word.size();

        vector<array<int, 10>> trie;
        trie.reserve(limit);
        array<int, 10> empty;
        empty.fill(-1);
        trie.push_back(empty);

        vector<int> terminal;
        terminal.reserve(limit);
        terminal.push_back(-1);

        for (int i = 0; i < n; ++i) {
            int node = 0;
            for (char ch : words[i]) {
                int c = ch - 'a';
                if (trie[node][c] == -1) {
                    trie[node][c] = trie.size();
                    trie.push_back(empty);
                    terminal.push_back(-1);
                }
                node = trie[node][c];
            }
            terminal[node] = i;
        }

        int nodes = trie.size();
        vector<int> branch(nodes, -1), offset(nodes, 0), groups;
        int total = 0;

        for (int v = 0; v < nodes; ++v) {
            int degree = 0;
            for (int c = 0; c < 10; ++c)
                degree += trie[v][c] != -1;

            if (degree > 1) {
                branch[v] = groups.size();
                groups.push_back(v);
                offset[v] = total;
                total += degree * degree;
            }
        }

        int count = groups.size();
        vector<array<signed char, 10>> order(count);
        vector<int> countOffset(count + 1, 0);

        for (int b = 0; b < count; ++b) {
            int v = groups[b], pos = 0;
            for (int c = 0; c < 10; ++c)
                order[b][c] = trie[v][c] == -1 ? -1 : pos++;
            countOffset[b + 1] = countOffset[b] + pos;
        }

        vector<int> cross(total, 0);
        vector<int> seen(countOffset[count], 0);
        long long answer = 0;

        for (int t = 0; t < n; ++t) {
            const string& word = words[target[t]];
            int node = 0;

            for (char ch : word) {
                int c = ch - 'a';

                if (terminal[node] != -1 && rank[terminal[node]] > t)
                    ++answer;

                int b = branch[node];
                if (b != -1) {
                    int width = countOffset[b + 1] - countOffset[b];
                    int r = order[b][c];
                    int* row = &cross[offset[node] + r * width];
                    int* frequency = &seen[countOffset[b]];

                    for (int j = 0; j < width; ++j)
                        if (j != r) row[j] += frequency[j];

                    ++frequency[r];
                }

                node = trie[node][c];
            }
        }

        static int cost[1 << 10][10];
        static int dp[1 << 10];

        for (int b = 0; b < count; ++b) {
            int v = groups[b];
            int width = countOffset[b + 1] - countOffset[b];
            const int* matrix = &cross[offset[v]];
            int states = 1 << width;

            for (int j = 0; j < width; ++j)
                cost[0][j] = 0;

            for (int mask = 1; mask < states; ++mask) {
                int bit = __builtin_ctz(static_cast<unsigned>(mask));
                int previous = mask & (mask - 1);

                for (int j = 0; j < width; ++j)
                    cost[mask][j] = cost[previous][j] + matrix[bit * width + j];
            }

            fill(dp, dp + states, INT_MAX);
            dp[0] = 0;

            for (int mask = 0; mask < states; ++mask) {
                if (dp[mask] == INT_MAX) continue;

                for (int j = 0; j < width; ++j) {
                    if (mask & (1 << j)) continue;

                    int nextMask = mask | (1 << j);
                    dp[nextMask] = min(dp[nextMask], dp[mask] + cost[mask][j]);
                }
            }

            answer += dp[states - 1];
        }

        return answer;
    }
};
