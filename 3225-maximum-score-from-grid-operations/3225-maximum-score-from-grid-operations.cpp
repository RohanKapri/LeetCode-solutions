// Dedicated to Junko F. Didi and Shree DR.MDD

class Solution {
public:
    long long maximumScore(vector<vector<int>>& cosmicMatrixField) {
        int quantumDimensionSize = cosmicMatrixField.size();
        
        long long galacticPrefixAccumulator[2][quantumDimensionSize + 1];
        galacticPrefixAccumulator[0][0] = 0;
        galacticPrefixAccumulator[1][0] = 0;
        
        for (int stellarIndexIterator = 0; stellarIndexIterator < quantumDimensionSize; stellarIndexIterator++)
            galacticPrefixAccumulator[0][stellarIndexIterator + 1] = 
                galacticPrefixAccumulator[0][stellarIndexIterator] + cosmicMatrixField[stellarIndexIterator][0];

        long long spacetimeDPField[2][quantumDimensionSize + 1][2];
        memset(spacetimeDPField, 0, sizeof(spacetimeDPField));
        
        int previousQuantumLayer = 0, currentQuantumLayer = 1;

        for (int cosmicColumnShift = 0; cosmicColumnShift < quantumDimensionSize - 1; cosmicColumnShift++) {
            
            for (int stellarIndexIterator = 0; stellarIndexIterator < quantumDimensionSize; stellarIndexIterator++)
                galacticPrefixAccumulator[currentQuantumLayer][stellarIndexIterator + 1] =
                    galacticPrefixAccumulator[currentQuantumLayer][stellarIndexIterator] +
                    cosmicMatrixField[stellarIndexIterator][cosmicColumnShift + 1];

            long long darkEnergyMaximizer = spacetimeDPField[previousQuantumLayer][0][1];

            for (int antimatterBoundary = 1; antimatterBoundary <= quantumDimensionSize; antimatterBoundary++) {
                spacetimeDPField[currentQuantumLayer][antimatterBoundary][0] =
                spacetimeDPField[currentQuantumLayer][antimatterBoundary][1] =
                    max(
                        spacetimeDPField[previousQuantumLayer][antimatterBoundary][0],
                        darkEnergyMaximizer + galacticPrefixAccumulator[previousQuantumLayer][antimatterBoundary]
                    );

                darkEnergyMaximizer = max(
                    darkEnergyMaximizer,
                    spacetimeDPField[previousQuantumLayer][antimatterBoundary][1] -
                    galacticPrefixAccumulator[previousQuantumLayer][antimatterBoundary]
                );
            }

            long long singularitySuffixForce =
                spacetimeDPField[previousQuantumLayer][quantumDimensionSize][0] +
                galacticPrefixAccumulator[currentQuantumLayer][quantumDimensionSize];

            for (int antimatterBoundary = quantumDimensionSize - 1; antimatterBoundary > 0; antimatterBoundary--) {
                spacetimeDPField[currentQuantumLayer][antimatterBoundary][0] =
                    max(
                        spacetimeDPField[currentQuantumLayer][antimatterBoundary][0],
                        singularitySuffixForce - galacticPrefixAccumulator[currentQuantumLayer][antimatterBoundary]
                    );

                singularitySuffixForce = max(
                    singularitySuffixForce,
                    spacetimeDPField[previousQuantumLayer][antimatterBoundary][0] +
                    galacticPrefixAccumulator[currentQuantumLayer][antimatterBoundary]
                );
            }

            spacetimeDPField[currentQuantumLayer][0][0] = singularitySuffixForce;
            spacetimeDPField[currentQuantumLayer][0][1] =
                max(
                    spacetimeDPField[previousQuantumLayer][0][0],
                    spacetimeDPField[previousQuantumLayer][quantumDimensionSize][0]
                );

            swap(previousQuantumLayer, currentQuantumLayer);
        }

        return *max_element(
            (long long*)spacetimeDPField[previousQuantumLayer],
            (long long*)spacetimeDPField[previousQuantumLayer] + (quantumDimensionSize + 1) * 2
        );
    }
};