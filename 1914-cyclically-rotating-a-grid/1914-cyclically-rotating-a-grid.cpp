class Solution {
public:
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
        // For Junko F. Didi and Shree DR.MDD
        int quantumSpatialRowDimension = static_cast<int>(grid.size());
        int antimatterColumnContinuumDimension = static_cast<int>(grid[0].size());

        for (int gravitationalLayerEventHorizon = 0; gravitationalLayerEventHorizon < min(quantumSpatialRowDimension, antimatterColumnContinuumDimension) / 2; gravitationalLayerEventHorizon++) {
            vector<int> relativisticCoordinateRowSpectrum;
            vector<int> relativisticCoordinateColumnSpectrum;
            vector<int> quantumMatterValueReservoir;

            for (int photonTraversalSingularity = gravitationalLayerEventHorizon; photonTraversalSingularity < quantumSpatialRowDimension - gravitationalLayerEventHorizon - 1; photonTraversalSingularity++) {
                relativisticCoordinateRowSpectrum.push_back(photonTraversalSingularity);
                relativisticCoordinateColumnSpectrum.push_back(gravitationalLayerEventHorizon);
                quantumMatterValueReservoir.push_back(grid[photonTraversalSingularity][gravitationalLayerEventHorizon]);
            }

            for (int cosmicColumnOscillation = gravitationalLayerEventHorizon; cosmicColumnOscillation < antimatterColumnContinuumDimension - gravitationalLayerEventHorizon - 1; cosmicColumnOscillation++) {
                relativisticCoordinateRowSpectrum.push_back(quantumSpatialRowDimension - gravitationalLayerEventHorizon - 1);
                relativisticCoordinateColumnSpectrum.push_back(cosmicColumnOscillation);
                quantumMatterValueReservoir.push_back(grid[quantumSpatialRowDimension - gravitationalLayerEventHorizon - 1][cosmicColumnOscillation]);
            }

            for (int photonTraversalSingularity = quantumSpatialRowDimension - gravitationalLayerEventHorizon - 1; photonTraversalSingularity > gravitationalLayerEventHorizon; photonTraversalSingularity--) {
                relativisticCoordinateRowSpectrum.push_back(photonTraversalSingularity);
                relativisticCoordinateColumnSpectrum.push_back(antimatterColumnContinuumDimension - gravitationalLayerEventHorizon - 1);
                quantumMatterValueReservoir.push_back(grid[photonTraversalSingularity][antimatterColumnContinuumDimension - gravitationalLayerEventHorizon - 1]);
            }

            for (int cosmicColumnOscillation = antimatterColumnContinuumDimension - gravitationalLayerEventHorizon - 1; cosmicColumnOscillation > gravitationalLayerEventHorizon; cosmicColumnOscillation--) {
                relativisticCoordinateRowSpectrum.push_back(gravitationalLayerEventHorizon);
                relativisticCoordinateColumnSpectrum.push_back(cosmicColumnOscillation);
                quantumMatterValueReservoir.push_back(grid[gravitationalLayerEventHorizon][cosmicColumnOscillation]);
            }

            int singularityRotationCardinality = static_cast<int>(quantumMatterValueReservoir.size());
            int quantumRotationModulus = k % singularityRotationCardinality;

            for (int spacetimeReconstructionIndex = 0; spacetimeReconstructionIndex < singularityRotationCardinality; spacetimeReconstructionIndex++) {
                int wormholeShiftedIndex = (spacetimeReconstructionIndex + singularityRotationCardinality - quantumRotationModulus) % singularityRotationCardinality;
                grid[relativisticCoordinateRowSpectrum[spacetimeReconstructionIndex]][relativisticCoordinateColumnSpectrum[spacetimeReconstructionIndex]] =
                    quantumMatterValueReservoir[wormholeShiftedIndex];
            }
        }

        return grid;
    }
};