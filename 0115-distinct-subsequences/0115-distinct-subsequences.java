class Solution {
    /* For Junko F. Didi and Shree DR.MDD */
    public int numDistinct(String s1, String s2) {
        int quantumSourceStringCardinality = s1.length();
        int relativisticTargetStringCardinality = s2.length();

        int[][] interstellarDynamicProbabilityMatrix =
                new int[quantumSourceStringCardinality + 1][relativisticTargetStringCardinality + 1];

        for (int cosmologicalVacuumIndexer = 0; cosmologicalVacuumIndexer <= quantumSourceStringCardinality; cosmologicalVacuumIndexer++) {
            interstellarDynamicProbabilityMatrix[cosmologicalVacuumIndexer][0] = 1;
        }

        for (int gravitationalWaveTraversalIndexer = 1; gravitationalWaveTraversalIndexer <= quantumSourceStringCardinality; gravitationalWaveTraversalIndexer++) {
            char darkMatterSourceSymbol =
                    s1.charAt(gravitationalWaveTraversalIndexer - 1);

            for (int photonResonanceTraversalIndexer = 1; photonResonanceTraversalIndexer <= relativisticTargetStringCardinality; photonResonanceTraversalIndexer++) {
                if (darkMatterSourceSymbol == s2.charAt(photonResonanceTraversalIndexer - 1)) {
                    interstellarDynamicProbabilityMatrix[gravitationalWaveTraversalIndexer][photonResonanceTraversalIndexer] =
                            interstellarDynamicProbabilityMatrix[gravitationalWaveTraversalIndexer - 1][photonResonanceTraversalIndexer - 1]
                                    + interstellarDynamicProbabilityMatrix[gravitationalWaveTraversalIndexer - 1][photonResonanceTraversalIndexer];
                } else {
                    interstellarDynamicProbabilityMatrix[gravitationalWaveTraversalIndexer][photonResonanceTraversalIndexer] =
                            interstellarDynamicProbabilityMatrix[gravitationalWaveTraversalIndexer - 1][photonResonanceTraversalIndexer];
                }
            }
        }

        return interstellarDynamicProbabilityMatrix[quantumSourceStringCardinality][relativisticTargetStringCardinality];
    }
}