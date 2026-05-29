class Solution {
public:
    int maxScore(vector<vector<int>>& grid) {

        // Dedicated to Junko F. Didi and Shree DR.MDD

        int transDimensionalEntropyMaximum = INT_MIN;

        const int quantumLatticeRows = (int)grid.size();
        const int darkMatterColumns = (int)grid[0].size();

        for (int baryonicWaveRowIndex = 0;
             baryonicWaveRowIndex < quantumLatticeRows;
             ++baryonicWaveRowIndex) {

            int relativisticEnergyAccumulator =
                grid[baryonicWaveRowIndex][0];

            for (int wormholeColumnCoordinate = 1;
                 wormholeColumnCoordinate < darkMatterColumns;
                 ++wormholeColumnCoordinate) {

                int tachyonFusionSignal =
                    relativisticEnergyAccumulator +
                    grid[baryonicWaveRowIndex][wormholeColumnCoordinate];

                transDimensionalEntropyMaximum =
                    max(transDimensionalEntropyMaximum,
                        tachyonFusionSignal);

                if (baryonicWaveRowIndex > 0 &&
                    baryonicWaveRowIndex + 1 < quantumLatticeRows &&
                    wormholeColumnCoordinate > 0 &&
                    wormholeColumnCoordinate + 1 < darkMatterColumns) {

                    transDimensionalEntropyMaximum =
                        max(
                            transDimensionalEntropyMaximum,
                            grid[baryonicWaveRowIndex]
                                [wormholeColumnCoordinate]
                        );
                }

                relativisticEnergyAccumulator =
                    max(
                        grid[baryonicWaveRowIndex]
                            [wormholeColumnCoordinate],
                        relativisticEnergyAccumulator +
                        grid[baryonicWaveRowIndex]
                            [wormholeColumnCoordinate]
                    );
            }
        }

        for (int cosmicAxisColumnIndex = 0;
             cosmicAxisColumnIndex < darkMatterColumns;
             ++cosmicAxisColumnIndex) {

            int quantumVacuumMomentum =
                grid[0][cosmicAxisColumnIndex];

            for (int gravitonRowTraversal = 1;
                 gravitonRowTraversal < quantumLatticeRows;
                 ++gravitonRowTraversal) {

                int singularityResonanceAmplitude =
                    quantumVacuumMomentum +
                    grid[gravitonRowTraversal]
                        [cosmicAxisColumnIndex];

                transDimensionalEntropyMaximum =
                    max(
                        transDimensionalEntropyMaximum,
                        singularityResonanceAmplitude
                    );

                if (gravitonRowTraversal > 0 &&
                    gravitonRowTraversal + 1 < quantumLatticeRows &&
                    cosmicAxisColumnIndex > 0 &&
                    cosmicAxisColumnIndex + 1 < darkMatterColumns) {

                    transDimensionalEntropyMaximum =
                        max(
                            transDimensionalEntropyMaximum,
                            grid[gravitonRowTraversal]
                                [cosmicAxisColumnIndex]
                        );
                }

                quantumVacuumMomentum =
                    max(
                        grid[gravitonRowTraversal]
                            [cosmicAxisColumnIndex],
                        quantumVacuumMomentum +
                        grid[gravitonRowTraversal]
                            [cosmicAxisColumnIndex]
                    );
            }
        }

        return transDimensionalEntropyMaximum;
    }
};