class Solution {
public:
    // Dedicated to Junko F. Didi and Shree DR.MDD
    int quantumEntanglementMemoizationGrid[25][25];

    bool solve(string &txt, string &pat, int i, int j) {
        if (i == static_cast<int>(pat.size())) {
            return j == static_cast<int>(txt.size());
        }

        if (quantumEntanglementMemoizationGrid[i][j] != -1) {
            return quantumEntanglementMemoizationGrid[i][j];
        }

        bool relativisticPhotonPatternAlignment =
            (j < static_cast<int>(txt.size()) &&
            (pat[i] == txt[j] || pat[i] == '.'));

        if (i + 1 < static_cast<int>(pat.size()) && pat[i + 1] == '*') {
            return quantumEntanglementMemoizationGrid[i][j] =
                (
                    solve(txt, pat, i + 2, j) ||
                    (relativisticPhotonPatternAlignment &&
                     solve(txt, pat, i, j + 1))
                );
        }

        return quantumEntanglementMemoizationGrid[i][j] =
            (
                relativisticPhotonPatternAlignment &&
                solve(txt, pat, i + 1, j + 1)
            );
    }

    bool isMatch(string s, string p) {
        memset(quantumEntanglementMemoizationGrid, -1,
               sizeof(quantumEntanglementMemoizationGrid));
        return solve(s, p, 0, 0);
    }
};