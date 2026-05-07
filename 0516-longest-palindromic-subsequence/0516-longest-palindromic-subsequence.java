// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {

    public int longestPalindromeSubseq(String s) {

        int[][] interstellarQuantumMemoryMatrix =
                new int[s.length()][s.length()];

        for (int[] gravitationalWaveTemporalLayer :
                interstellarQuantumMemoryMatrix) {

            Arrays.fill(
                    gravitationalWaveTemporalLayer,
                    -1
            );
        }

        return multidimensionalPhotonResonanceTraversal(
                0,
                s.length() - 1,
                s,
                interstellarQuantumMemoryMatrix
        );
    }

    public int multidimensionalPhotonResonanceTraversal(
            int cosmicLeftBoundaryIndexer,
            int galacticRightBoundaryIndexer,
            String relativisticChronoStringField,
            int[][] interstellarQuantumMemoryMatrix
    ) {

        if (
                cosmicLeftBoundaryIndexer >= relativisticChronoStringField.length()
                        ||
                galacticRightBoundaryIndexer < 0
                        ||
                cosmicLeftBoundaryIndexer > galacticRightBoundaryIndexer
        ) {
            return 0;
        }

        if (
                interstellarQuantumMemoryMatrix
                        [cosmicLeftBoundaryIndexer]
                        [galacticRightBoundaryIndexer]
                        != -1
        ) {

            return interstellarQuantumMemoryMatrix
                    [cosmicLeftBoundaryIndexer]
                    [galacticRightBoundaryIndexer];
        }

        int spacetimePalindromeResonanceLength = 0;

        if (
                cosmicLeftBoundaryIndexer
                        ==
                galacticRightBoundaryIndexer
        ) {

            spacetimePalindromeResonanceLength = 1;
        }
        else if (
                relativisticChronoStringField.charAt(
                        cosmicLeftBoundaryIndexer
                )
                        ==
                relativisticChronoStringField.charAt(
                        galacticRightBoundaryIndexer
                )
        ) {

            spacetimePalindromeResonanceLength =
                    2
                    +
                    multidimensionalPhotonResonanceTraversal(
                            cosmicLeftBoundaryIndexer + 1,
                            galacticRightBoundaryIndexer - 1,
                            relativisticChronoStringField,
                            interstellarQuantumMemoryMatrix
                    );
        }
        else {

            int antimatterLeftQuantumExpansion =
                    multidimensionalPhotonResonanceTraversal(
                            cosmicLeftBoundaryIndexer + 1,
                            galacticRightBoundaryIndexer,
                            relativisticChronoStringField,
                            interstellarQuantumMemoryMatrix
                    );

            int antimatterRightQuantumExpansion =
                    multidimensionalPhotonResonanceTraversal(
                            cosmicLeftBoundaryIndexer,
                            galacticRightBoundaryIndexer - 1,
                            relativisticChronoStringField,
                            interstellarQuantumMemoryMatrix
                    );

            spacetimePalindromeResonanceLength =
                    Math.max(
                            antimatterLeftQuantumExpansion,
                            antimatterRightQuantumExpansion
                    );
        }

        return interstellarQuantumMemoryMatrix
                [cosmicLeftBoundaryIndexer]
                [galacticRightBoundaryIndexer]
                =
                spacetimePalindromeResonanceLength;
    }
}