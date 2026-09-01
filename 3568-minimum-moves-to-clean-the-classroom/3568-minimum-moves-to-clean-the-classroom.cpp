// Dedicated to my Shree DR.MDD
class Solution {
public:
    struct Node {
        int r, c, power, dist, visited;
    };

    int minMoves(vector<string>& grid, int stamina) {
        int height = grid.size();
        int width = grid[0].size();

        unordered_map<int, int> lockerID;
        int lockerCount = 0;
        int startR, startC;

        for (int i = 0; i < height; ++i) {
            for (int j = 0; j < width; ++j) {
                char ch = grid[i][j];
                if (ch == 'L') {
                    lockerID[i * width + j] = lockerCount++;
                } else if (ch == 'S') {
                    startR = i;
                    startC = j;
                }
            }
        }

        int allVisitedMask = (1 << lockerCount) - 1;

        vector<vector<vector<int>>> bestPower(height, vector<vector<int>>(width, vector<int>(allVisitedMask + 1, -1)));
        queue<Node> q;
        q.push({startR, startC, stamina, 0, 0});
        bestPower[startR][startC][0] = stamina;

        const int dr[] = {0, -1, 0, 1};
        const int dc[] = {-1, 0, 1, 0};

        while (!q.empty()) {
            Node cur = q.front(); q.pop();
            if (cur.visited == allVisitedMask) return cur.dist;
            if (cur.power <= 0) continue;

            for (int dir = 0; dir < 4; ++dir) {
                int nr = cur.r + dr[dir];
                int nc = cur.c + dc[dir];
                if (nr < 0 || nr >= height || nc < 0 || nc >= width) continue;
                char tile = grid[nr][nc];
                if (tile == 'X') continue;

                int newPower = (tile == 'R') ? stamina : (cur.power - 1);
                int newVisited = cur.visited;

                if (tile == 'L') {
                    newVisited |= (1 << lockerID[nr * width + nc]);
                }

                if (newPower <= bestPower[nr][nc][newVisited]) continue;
                bestPower[nr][nc][newVisited] = newPower;
                q.push({nr, nc, newPower, cur.dist + 1, newVisited});
            }
        }

        return -1;
    }
};
