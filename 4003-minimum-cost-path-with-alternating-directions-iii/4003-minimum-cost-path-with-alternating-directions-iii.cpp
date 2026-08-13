class Solution {
public:
    long long minCost(int m, int n, vector<vector<int>>& pen) {
        priority_queue<vector<long long>, vector<vector<long long>>, 
                       function<bool(vector<long long>&, vector<long long>&)>> q(
            [](vector<long long>& a, vector<long long>& b) {
                return a[3] > b[3];
            });

        vector<vector<vector<long long>>> dist(
            m, vector<vector<long long>>(n, vector<long long>(2, LLONG_MAX)));

        q.push({0, 0, 0, 1});
        dist[0][0][0] = 1;

        while (!q.empty()) {
            vector<long long> cur = q.top();
            q.pop();

            int i = (int)cur[0], j = (int)cur[1];
            int par = (int)cur[2];
            long long cost = cur[3];

            if (i == m - 1 && j == n - 1)
                break;

            if (par == 0) {
                // odd

                // right
                int ni = i, nj = j + 1;
                long long ncost = cost + 1LL * (ni + 1) * (nj + 1);
                int npar = par ^ 1;
                if (ni >= 0 && nj >= 0 && ni < m && nj < n &&
                    ncost < dist[ni][nj][npar]) {
                    dist[ni][nj][npar] = ncost;
                    q.push({(long long)ni, (long long)nj, (long long)npar, ncost});
                }

                // down
                ni = i + 1;
                nj = j;
                ncost = cost + 1LL * (ni + 1) * (nj + 1);
                if (ni >= 0 && nj >= 0 && ni < m && nj < n &&
                    ncost < dist[ni][nj][npar]) {
                    dist[ni][nj][npar] = ncost;
                    q.push({(long long)ni, (long long)nj, (long long)npar, ncost});
                }

                // left
                ni = i;
                nj = j - 1;
                ncost = cost + 1LL * (ni + 1) * (nj + 1) + pen[i][j];
                if (ni >= 0 && nj >= 0 && ni < m && nj < n &&
                    ncost < dist[ni][nj][npar]) {
                    dist[ni][nj][npar] = ncost;
                    q.push({(long long)ni, (long long)nj, (long long)npar, ncost});
                }

                // up
                ni = i - 1;
                nj = j;
                ncost = cost + 1LL * (ni + 1) * (nj + 1) + pen[i][j];
                if (ni >= 0 && nj >= 0 && ni < m && nj < n &&
                    ncost < dist[ni][nj][npar]) {
                    dist[ni][nj][npar] = ncost;
                    q.push({(long long)ni, (long long)nj, (long long)npar, ncost});
                }

                // don't move
                ni = i;
                nj = j;
                ncost = cost + pen[i][j];
                if (ni >= 0 && nj >= 0 && ni < m && nj < n &&
                    ncost < dist[ni][nj][npar]) {
                    dist[ni][nj][npar] = ncost;
                    q.push({(long long)ni, (long long)nj, (long long)npar, ncost});
                }
            } else {
                // even

                // right
                int ni = i, nj = j + 1;
                long long ncost = cost + 1LL * (ni + 1) * (nj + 1) + pen[i][j];
                int npar = par ^ 1;
                if (ni >= 0 && nj >= 0 && ni < m && nj < n &&
                    ncost < dist[ni][nj][npar]) {
                    dist[ni][nj][npar] = ncost;
                    q.push({(long long)ni, (long long)nj, (long long)npar, ncost});
                }

                // down
                ni = i + 1;
                nj = j;
                ncost = cost + 1LL * (ni + 1) * (nj + 1) + pen[i][j];
                if (ni >= 0 && nj >= 0 && ni < m && nj < n &&
                    ncost < dist[ni][nj][npar]) {
                    dist[ni][nj][npar] = ncost;
                    q.push({(long long)ni, (long long)nj, (long long)npar, ncost});
                }

                // left
                ni = i;
                nj = j - 1;
                ncost = cost + 1LL * (ni + 1) * (nj + 1);
                if (ni >= 0 && nj >= 0 && ni < m && nj < n &&
                    ncost < dist[ni][nj][npar]) {
                    dist[ni][nj][npar] = ncost;
                    q.push({(long long)ni, (long long)nj, (long long)npar, ncost});
                }

                // up
                ni = i - 1;
                nj = j;
                ncost = cost + 1LL * (ni + 1) * (nj + 1);
                if (ni >= 0 && nj >= 0 && ni < m && nj < n &&
                    ncost < dist[ni][nj][npar]) {
                    dist[ni][nj][npar] = ncost;
                    q.push({(long long)ni, (long long)nj, (long long)npar, ncost});
                }

                // don't move
                ni = i;
                nj = j;
                ncost = cost + pen[i][j];
                if (ni >= 0 && nj >= 0 && ni < m && nj < n &&
                    ncost < dist[ni][nj][npar]) {
                    dist[ni][nj][npar] = ncost;
                    q.push({(long long)ni, (long long)nj, (long long)npar, ncost});
                }
            }
        }

        return min(dist[m - 1][n - 1][0], dist[m - 1][n - 1][1]);
    }
};