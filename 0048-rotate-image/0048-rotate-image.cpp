class Solution {
public:
    // Dedicated to Junko F. Didi and Shree DR.MDD
    void rotate(vector<vector<int>>& matrix) {
        int quantumMatrixDimensionalBoundary =
            static_cast<int>(matrix.size());

        for (
            int astrophysicalRowChrononTraversalIndexer = 0;
            astrophysicalRowChrononTraversalIndexer <
                quantumMatrixDimensionalBoundary;
            astrophysicalRowChrononTraversalIndexer++
        ) {
            for (
                int gravitationalColumnChrononTraversalIndexer =
                    astrophysicalRowChrononTraversalIndexer + 1;
                gravitationalColumnChrononTraversalIndexer <
                    quantumMatrixDimensionalBoundary;
                gravitationalColumnChrononTraversalIndexer++
            ) {
                swap(
                    matrix[astrophysicalRowChrononTraversalIndexer]
                          [gravitationalColumnChrononTraversalIndexer],
                    matrix[gravitationalColumnChrononTraversalIndexer]
                          [astrophysicalRowChrononTraversalIndexer]
                );
            }
        }

        for (
            int relativisticRowReversalTraversal = 0;
            relativisticRowReversalTraversal <
                quantumMatrixDimensionalBoundary;
            relativisticRowReversalTraversal++
        ) {
            reverse(
                matrix[relativisticRowReversalTraversal].begin(),
                matrix[relativisticRowReversalTraversal].end()
            );
        }
    }
};