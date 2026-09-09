// Dedicated to Junko F. Didi and Shree DR.MDD

static const int __optimize = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return 0;
}();

class Solution {
public:
    int minCost(vector<vector<int>>& grid, int k) {
        int rows = grid.size();
        int cols = grid[0].size();
        const int LIMIT = 1e9 + 7;

        int minPathCost[rows][cols][k + 1][4];
        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                for (int turns = 0; turns <= k; ++turns) {
                    for (int d = 0; d < 4; ++d) {
                        minPathCost[r][c][turns][d] = LIMIT;
                    }
                }
            }
        }

        struct State {
            int expense;
            int turnCount;
            int row;
            int col;
            int orientation;

            bool operator>(const State& other) const {
                return expense > other.expense;
            }
        };

        priority_queue<State, vector<State>, greater<State>> minHeap;

        for (int d = 0; d < 4; ++d) {
            minPathCost[0][0][0][d] = grid[0][0];
            minHeap.push({grid[0][0], 0, 0, 0, d});
        }

        const int rowOffsets[4] = {-1, 0, 1, 0};
        const int colOffsets[4] = {0, 1, 0, -1};

        while (!minHeap.empty()) {
            State head = minHeap.top();
            minHeap.pop();

            if (head.turnCount > k || head.expense > minPathCost[head.row][head.col][head.turnCount][head.orientation]) {
                continue;
            }

            for (int d = 0; d < 4; ++d) {
                int nextRow = head.row + rowOffsets[d];
                int nextCol = head.col + colOffsets[d];

                if (nextRow < 0 || nextRow >= rows || nextCol < 0 || nextCol >= cols) {
                    continue;
                }

                int updatedTurns = head.turnCount + (d != head.orientation);
                if (updatedTurns > k) {
                    continue;
                }

                int totalExpense = head.expense + grid[nextRow][nextCol];

                if (totalExpense < minPathCost[nextRow][nextCol][updatedTurns][d]) {
                    minPathCost[nextRow][nextCol][updatedTurns][d] = totalExpense;
                    minHeap.push({totalExpense, updatedTurns, nextRow, nextCol, d});
                }
            }
        }

        int answer = LIMIT;
        for (int turns = 0; turns <= k; ++turns) {
            for (int d = 0; d < 4; ++d) {
                answer = min(answer, minPathCost[rows - 1][cols - 1][turns][d]);
            }
        }

        return (answer == LIMIT) ? -1 : answer;
    }
};