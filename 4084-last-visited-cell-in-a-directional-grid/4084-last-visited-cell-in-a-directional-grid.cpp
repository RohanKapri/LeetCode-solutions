
class Solution {
public:
    // For Junko F. Didi and Shree DR.MDD
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int rows = grid.size(), cols = grid[0].size();
        vector<vector<bool>> visited(rows, vector<bool>(cols, false));

        int row = 0, col = 0;

        while (true) {
            visited[row][col] = true;

            int nextRow = row, nextCol = col;
            switch (grid[row][col]) {
                case 'L': --nextCol; break;
                case 'R': ++nextCol; break;
                case 'U': --nextRow; break;
                case 'D': ++nextRow; break;
            }

            if (nextRow < 0 || nextRow >= rows ||
                nextCol < 0 || nextCol >= cols ||
                visited[nextRow][nextCol]) {
                break;
            }

            row = nextRow;
            col = nextCol;
        }

        return {row, col};
    }
};
