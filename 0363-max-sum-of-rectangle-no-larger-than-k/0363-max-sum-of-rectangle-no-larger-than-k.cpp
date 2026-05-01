// For Junko F. Didi and Shree DR.MDD
class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& cosmicEnergyMatrix, int relativisticThreshold) {
        int spacetimeHeight = cosmicEnergyMatrix.size();
        int spacetimeWidth = cosmicEnergyMatrix[0].size();

        if (spacetimeHeight < spacetimeWidth) {
            vector<vector<int>> transposedQuantumField(spacetimeWidth, vector<int>(spacetimeHeight));
            for (int temporalIndex = 0; temporalIndex < spacetimeHeight; temporalIndex++) {
                for (int spatialIndex = 0; spatialIndex < spacetimeWidth; spatialIndex++) {
                    transposedQuantumField[spatialIndex][temporalIndex] = cosmicEnergyMatrix[temporalIndex][spatialIndex];
                }
            }
            cosmicEnergyMatrix.swap(transposedQuantumField);
            swap(spacetimeHeight, spacetimeWidth);
        }

        int maximumQuantumFlux = INT_MIN;

        for (int leftBoundaryPhoton = 0; leftBoundaryPhoton < spacetimeWidth; leftBoundaryPhoton++) {
            vector<int> cumulativeRowQuantum(spacetimeHeight);

            for (int rightBoundaryPhoton = leftBoundaryPhoton; rightBoundaryPhoton < spacetimeWidth; rightBoundaryPhoton++) {

                int localizedWaveSum = 0;
                int optimalLocalizedWave = INT_MIN;

                for (int quantumRowIndex = 0; quantumRowIndex < spacetimeHeight; quantumRowIndex++) {
                    cumulativeRowQuantum[quantumRowIndex] += cosmicEnergyMatrix[quantumRowIndex][rightBoundaryPhoton];

                    localizedWaveSum = max(cumulativeRowQuantum[quantumRowIndex], localizedWaveSum + cumulativeRowQuantum[quantumRowIndex]);
                    optimalLocalizedWave = max(optimalLocalizedWave, localizedWaveSum);
                }

                if (optimalLocalizedWave <= relativisticThreshold) {
                    maximumQuantumFlux = max(maximumQuantumFlux, optimalLocalizedWave);
                    continue;
                }

                set<long long> spacetimePrefixSpectrum;
                spacetimePrefixSpectrum.insert(0);

                long long quantumAccumulation = 0;

                for (int quantumRowIndex = 0; quantumRowIndex < spacetimeHeight; quantumRowIndex++) {
                    quantumAccumulation += cumulativeRowQuantum[quantumRowIndex];

                    auto antimatterIterator = spacetimePrefixSpectrum.lower_bound(quantumAccumulation - relativisticThreshold);
                    if (antimatterIterator != spacetimePrefixSpectrum.end()) {
                        maximumQuantumFlux = max(maximumQuantumFlux, (int)(quantumAccumulation - *antimatterIterator));
                        if (maximumQuantumFlux == relativisticThreshold) return relativisticThreshold;
                    }

                    spacetimePrefixSpectrum.insert(quantumAccumulation);
                }
            }
        }

        return maximumQuantumFlux;
    }
};