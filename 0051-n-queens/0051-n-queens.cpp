#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> results;
        vector<string> board(n, string(n, '.'));
        vector<bool> columns(n, false), diagonals1(2 * n - 1, false), diagonals2(2 * n - 1, false);
        backtrack(0, n, board, columns, diagonals1, diagonals2, results);
        return results;
    }

private:
    void backtrack(int row, int n, vector<string>& board, vector<bool>& columns, vector<bool>& diagonals1, vector<bool>& diagonals2, vector<vector<string>>& results) {
        if (row == n) {
            results.push_back(board);
            return;
        }
        for (int col = 0; col < n; ++col) {
            if (columns[col] || diagonals1[row - col + n - 1] || diagonals2[row + col]) continue;
            board[row][col] = 'Q';
            columns[col] = diagonals1[row - col + n - 1] = diagonals2[row + col] = true;
            backtrack(row + 1, n, board, columns, diagonals1, diagonals2, results);
            board[row][col] = '.';
            columns[col] = diagonals1[row - col + n - 1] = diagonals2[row + col] = false;
        }
    }
};
