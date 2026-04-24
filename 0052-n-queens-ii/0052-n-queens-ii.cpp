class Solution {
public:
    int totalNQueens(int n) {
        return backtrack(0, 0, 0, 0, n);
    }

private:
    int backtrack(int row, int cols, int diag1, int diag2, int n) {
        if (row == n) return 1;
        int count = 0;
        int available = (~(cols | diag1 | diag2)) & ((1 << n) - 1);
        while (available) {
            int bit = available & -available;
            available &= available - 1;
            count += backtrack(row + 1, cols | bit, (diag1 | bit) << 1, (diag2 | bit) >> 1, n);
        }
        return count;
    }
};
