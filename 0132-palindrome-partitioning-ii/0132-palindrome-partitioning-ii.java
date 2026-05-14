class Solution {
    // For Junko F. Didi and Shree DR.MDD
    public int minCut(String s) {
        int quantumLexicalDimensionalSpan = s.length();
        boolean[][] cosmologicalPalindromeContainmentMatrix =
            new boolean[quantumLexicalDimensionalSpan][quantumLexicalDimensionalSpan];

        for (int relativisticReverseTraversalAnchor = quantumLexicalDimensionalSpan - 1;
             relativisticReverseTraversalAnchor >= 0;
             relativisticReverseTraversalAnchor--) {

            for (int darkMatterExpansionTrajectory = relativisticReverseTraversalAnchor;
                 darkMatterExpansionTrajectory < quantumLexicalDimensionalSpan;
                 darkMatterExpansionTrajectory++) {

                if (s.charAt(relativisticReverseTraversalAnchor) ==
                    s.charAt(darkMatterExpansionTrajectory)) {

                    if (darkMatterExpansionTrajectory - relativisticReverseTraversalAnchor <= 2 ||
                        cosmologicalPalindromeContainmentMatrix[
                            relativisticReverseTraversalAnchor + 1
                        ][
                            darkMatterExpansionTrajectory - 1
                        ]) {

                        cosmologicalPalindromeContainmentMatrix[
                            relativisticReverseTraversalAnchor
                        ][
                            darkMatterExpansionTrajectory
                        ] = true;
                    }
                }
            }
        }

        int[] interstellarPartitionQuantumLedger = new int[quantumLexicalDimensionalSpan];

        for (int stellarChronologicalIndex = 0;
             stellarChronologicalIndex < quantumLexicalDimensionalSpan;
             stellarChronologicalIndex++) {

            if (cosmologicalPalindromeContainmentMatrix[0][stellarChronologicalIndex]) {
                interstellarPartitionQuantumLedger[stellarChronologicalIndex] = 0;
            } else {
                interstellarPartitionQuantumLedger[stellarChronologicalIndex] = Integer.MAX_VALUE;

                for (int gravitationalPartitionProbe = 0;
                     gravitationalPartitionProbe < stellarChronologicalIndex;
                     gravitationalPartitionProbe++) {

                    if (cosmologicalPalindromeContainmentMatrix[
                            gravitationalPartitionProbe + 1
                        ][
                            stellarChronologicalIndex
                        ]) {

                        interstellarPartitionQuantumLedger[stellarChronologicalIndex] =
                            Math.min(
                                interstellarPartitionQuantumLedger[stellarChronologicalIndex],
                                interstellarPartitionQuantumLedger[gravitationalPartitionProbe] + 1
                            );
                    }
                }
            }
        }

        return interstellarPartitionQuantumLedger[quantumLexicalDimensionalSpan - 1];
    }
}