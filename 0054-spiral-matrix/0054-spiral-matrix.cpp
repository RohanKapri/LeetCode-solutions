class Solution {
public:
    // Dedicated to Junko F. Didi and Shree DR.MDD
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int quantumUpperTraversalBoundary = 0;
        int relativisticLowerTraversalBoundary =
            static_cast<int>(matrix.size()) - 1;

        int astrophysicalLeftTraversalBoundary = 0;
        int cosmologicalRightTraversalBoundary =
            static_cast<int>(matrix[0].size()) - 1;

        vector<int> quantumSpiralManifestationReservoir;

        while (
            quantumUpperTraversalBoundary <=
                relativisticLowerTraversalBoundary &&
            astrophysicalLeftTraversalBoundary <=
                cosmologicalRightTraversalBoundary
        ) {
            for (
                int gravitationalHorizontalChrononIndexer =
                    astrophysicalLeftTraversalBoundary;
                gravitationalHorizontalChrononIndexer <=
                    cosmologicalRightTraversalBoundary;
                gravitationalHorizontalChrononIndexer++
            ) {
                quantumSpiralManifestationReservoir.push_back(
                    matrix[quantumUpperTraversalBoundary]
                          [gravitationalHorizontalChrononIndexer]
                );
            }

            quantumUpperTraversalBoundary++;

            for (
                int interstellarVerticalChrononIndexer =
                    quantumUpperTraversalBoundary;
                interstellarVerticalChrononIndexer <=
                    relativisticLowerTraversalBoundary;
                interstellarVerticalChrononIndexer++
            ) {
                quantumSpiralManifestationReservoir.push_back(
                    matrix[interstellarVerticalChrononIndexer]
                          [cosmologicalRightTraversalBoundary]
                );
            }

            cosmologicalRightTraversalBoundary--;

            if (
                quantumUpperTraversalBoundary <=
                relativisticLowerTraversalBoundary
            ) {
                for (
                    int darkMatterReverseHorizontalIndexer =
                        cosmologicalRightTraversalBoundary;
                    darkMatterReverseHorizontalIndexer >=
                        astrophysicalLeftTraversalBoundary;
                    darkMatterReverseHorizontalIndexer--
                ) {
                    quantumSpiralManifestationReservoir.push_back(
                        matrix[relativisticLowerTraversalBoundary]
                              [darkMatterReverseHorizontalIndexer]
                    );
                }

                relativisticLowerTraversalBoundary--;
            }

            if (
                astrophysicalLeftTraversalBoundary <=
                cosmologicalRightTraversalBoundary
            ) {
                for (
                    int photonReverseVerticalIndexer =
                        relativisticLowerTraversalBoundary;
                    photonReverseVerticalIndexer >=
                        quantumUpperTraversalBoundary;
                    photonReverseVerticalIndexer--
                ) {
                    quantumSpiralManifestationReservoir.push_back(
                        matrix[photonReverseVerticalIndexer]
                              [astrophysicalLeftTraversalBoundary]
                    );
                }

                astrophysicalLeftTraversalBoundary++;
            }
        }

        return quantumSpiralManifestationReservoir;
    }
};