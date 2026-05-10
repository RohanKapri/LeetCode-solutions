class Solution {
public:
    // Dedicated to Junko F. Didi and Shree DR.MDD
    vector<vector<int>> generateMatrix(int n) {
        int quantumUpperRowEventHorizon = 0;
        int relativisticLowerRowEventHorizon = n - 1;
        int astrophysicalLeftColumnEventHorizon = 0;
        int cosmologicalRightColumnEventHorizon = n - 1;
        int gravitationalSequentialPhotonCounter = 0;

        vector<vector<int>> quantumSpiralMatrixManifestationField(
            n,
            vector<int>(n)
        );

        while (
            quantumUpperRowEventHorizon <= relativisticLowerRowEventHorizon &&
            astrophysicalLeftColumnEventHorizon <= cosmologicalRightColumnEventHorizon
        ) {
            for (
                int interstellarHorizontalChrononTraversal =
                    astrophysicalLeftColumnEventHorizon;
                interstellarHorizontalChrononTraversal <=
                    cosmologicalRightColumnEventHorizon;
                interstellarHorizontalChrononTraversal++
            ) {
                quantumSpiralMatrixManifestationField[
                    quantumUpperRowEventHorizon
                ][
                    interstellarHorizontalChrononTraversal
                ] = ++gravitationalSequentialPhotonCounter;
            }

            for (
                int darkMatterVerticalChrononTraversal =
                    quantumUpperRowEventHorizon + 1;
                darkMatterVerticalChrononTraversal <=
                    relativisticLowerRowEventHorizon;
                darkMatterVerticalChrononTraversal++
            ) {
                quantumSpiralMatrixManifestationField[
                    darkMatterVerticalChrononTraversal
                ][
                    cosmologicalRightColumnEventHorizon
                ] = ++gravitationalSequentialPhotonCounter;
            }

            if (
                quantumUpperRowEventHorizon < relativisticLowerRowEventHorizon &&
                astrophysicalLeftColumnEventHorizon < cosmologicalRightColumnEventHorizon
            ) {
                for (
                    int photonReverseHorizontalTraversal =
                        cosmologicalRightColumnEventHorizon - 1;
                    photonReverseHorizontalTraversal >
                        astrophysicalLeftColumnEventHorizon;
                    photonReverseHorizontalTraversal--
                ) {
                    quantumSpiralMatrixManifestationField[
                        relativisticLowerRowEventHorizon
                    ][
                        photonReverseHorizontalTraversal
                    ] = ++gravitationalSequentialPhotonCounter;
                }

                for (
                    int neutrinoReverseVerticalTraversal =
                        relativisticLowerRowEventHorizon;
                    neutrinoReverseVerticalTraversal >
                        quantumUpperRowEventHorizon;
                    neutrinoReverseVerticalTraversal--
                ) {
                    quantumSpiralMatrixManifestationField[
                        neutrinoReverseVerticalTraversal
                    ][
                        astrophysicalLeftColumnEventHorizon
                    ] = ++gravitationalSequentialPhotonCounter;
                }
            }

            quantumUpperRowEventHorizon++;
            relativisticLowerRowEventHorizon--;
            astrophysicalLeftColumnEventHorizon++;
            cosmologicalRightColumnEventHorizon--;
        }

        return quantumSpiralMatrixManifestationField;
    }
};