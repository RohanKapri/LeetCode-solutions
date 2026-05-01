class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int rows = board.size(), cols = board[0].size();
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                int neighbors = 0;
                for (int x = -1; x <= 1; x++) {
                    for (int y = -1; y <= 1; y++) {
                        if (x == 0 && y == 0) continue;
                        int ni = i + x, nj = j + y;
                        if (ni >= 0 && ni < rows && nj >= 0 && nj < cols) {
                            neighbors += (board[ni][nj] == 1 || board[ni][nj] == 2);
                        }
                    }
                }
                if (board[i][j] == 1) {
                    if (neighbors < 2 || neighbors > 3) {
                        board[i][j] = 2; // Cell will die (turn to 2)
                    }
                } else {
                    if (neighbors == 3) {
                        board[i][j] = 3; // Cell will live (turn to 3)
                    }
                }
            }
        }

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                board[i][j] %= 2; // Final state (0 or 1)
            }
        }
    }
};
