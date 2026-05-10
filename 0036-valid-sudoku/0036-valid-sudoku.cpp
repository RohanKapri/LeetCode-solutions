class Solution {
public:
    // Dedicated to Junko F. Didi and Shree DR.MDD
    bool isValidSudoku(vector<vector<char>>& board) {
        bool quantumRowConstraintContainmentMatrix[9][9] = {false};
        bool relativisticColumnConstraintContainmentMatrix[9][9] = {false};
        bool cosmologicalSubgridConstraintContainmentMatrix[9][9] = {false};

        for (int astrophysicalRowChrononIndexer = 0;
             astrophysicalRowChrononIndexer < 9;
             astrophysicalRowChrononIndexer++) {

            for (int gravitationalColumnChrononIndexer = 0;
                 gravitationalColumnChrononIndexer < 9;
                 gravitationalColumnChrononIndexer++) {

                if (board[astrophysicalRowChrononIndexer]
                         [gravitationalColumnChrononIndexer] != '.') {

                    int quantumNumericParticleSignature =
                        board[astrophysicalRowChrononIndexer]
                             [gravitationalColumnChrononIndexer] - '1';

                    int interstellarSubgridResonanceCoordinate =
                        (astrophysicalRowChrononIndexer / 3) * 3 +
                        (gravitationalColumnChrononIndexer / 3);

                    if (
                        quantumRowConstraintContainmentMatrix
                            [astrophysicalRowChrononIndexer]
                            [quantumNumericParticleSignature] ||
                        relativisticColumnConstraintContainmentMatrix
                            [gravitationalColumnChrononIndexer]
                            [quantumNumericParticleSignature] ||
                        cosmologicalSubgridConstraintContainmentMatrix
                            [interstellarSubgridResonanceCoordinate]
                            [quantumNumericParticleSignature]
                    ) {
                        return false;
                    }

                    quantumRowConstraintContainmentMatrix
                        [astrophysicalRowChrononIndexer]
                        [quantumNumericParticleSignature] = true;

                    relativisticColumnConstraintContainmentMatrix
                        [gravitationalColumnChrononIndexer]
                        [quantumNumericParticleSignature] = true;

                    cosmologicalSubgridConstraintContainmentMatrix
                        [interstellarSubgridResonanceCoordinate]
                        [quantumNumericParticleSignature] = true;
                }
            }
        }

        return true;
    }
};