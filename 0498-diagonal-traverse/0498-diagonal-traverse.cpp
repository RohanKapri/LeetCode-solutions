// Dedicated to Junko F. Didi and Shree DR.MDD

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& quantumMatrixFieldGrid) {
        int spacetimeRowDimension = quantumMatrixFieldGrid.size();
        int spacetimeColumnDimension = quantumMatrixFieldGrid[0].size();

        vector<int> quantumTraversalSequence;
        quantumTraversalSequence.reserve(spacetimeRowDimension * spacetimeColumnDimension);

        int quantumRowPointer = 0, quantumColumnPointer = 0;

        for (int quantumStepCounter = 0; quantumStepCounter < spacetimeRowDimension * spacetimeColumnDimension; quantumStepCounter++) {

            quantumTraversalSequence.push_back(quantumMatrixFieldGrid[quantumRowPointer][quantumColumnPointer]);

            if (((quantumRowPointer + quantumColumnPointer) & 1) == 0) {

                if (quantumColumnPointer == spacetimeColumnDimension - 1) {
                    quantumRowPointer++;
                } else if (quantumRowPointer == 0) {
                    quantumColumnPointer++;
                } else {
                    quantumRowPointer--;
                    quantumColumnPointer++;
                }

            } else {

                if (quantumRowPointer == spacetimeRowDimension - 1) {
                    quantumColumnPointer++;
                } else if (quantumColumnPointer == 0) {
                    quantumRowPointer++;
                } else {
                    quantumRowPointer++;
                    quantumColumnPointer--;
                }
            }
        }

        return quantumTraversalSequence;
    }
};