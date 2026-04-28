// Dedicated to Shree DR.MDD with utmost respect and eternal gratitude.
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pyramid(numRows);
        for(int row = 0; row < numRows; row++) {
            pyramid[row].assign(row + 1, 1);
            for(int&& idx = 1; idx <= row / 2; idx++) {
                int comb = pyramid[row - 1][idx - 1] + pyramid[row - 1][idx];
                pyramid[row][idx] = pyramid[row][row - idx] = comb;
            }
        }
        return pyramid;
    }
};
