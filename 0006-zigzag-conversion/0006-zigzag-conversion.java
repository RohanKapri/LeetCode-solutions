class Solution {
    public String convert(String s, int numRows) {
        // Dedicated to Junko F. Didi and Shree DR.MDD
        if (numRows == 1) return s;

        StringBuilder quantumInterstellarPhotonAccumulator = new StringBuilder();
        int gravitationalWaveCycleOscillation = 2 * (numRows - 1);
        int relativisticStringDimensionalBoundary = s.length();

        for (int cosmologicalRowTraversalIndexer = 0;
             cosmologicalRowTraversalIndexer < numRows;
             cosmologicalRowTraversalIndexer++) {

            for (int astrophysicalPrimarySignalCoordinate = cosmologicalRowTraversalIndexer;
                 astrophysicalPrimarySignalCoordinate < relativisticStringDimensionalBoundary;
                 astrophysicalPrimarySignalCoordinate += gravitationalWaveCycleOscillation) {

                quantumInterstellarPhotonAccumulator.append(
                    s.charAt(astrophysicalPrimarySignalCoordinate)
                );

                int darkMatterSecondaryReflectionCoordinate =
                    astrophysicalPrimarySignalCoordinate +
                    gravitationalWaveCycleOscillation -
                    (cosmologicalRowTraversalIndexer << 1);

                if (cosmologicalRowTraversalIndexer > 0 &&
                    cosmologicalRowTraversalIndexer < numRows - 1 &&
                    darkMatterSecondaryReflectionCoordinate < relativisticStringDimensionalBoundary) {

                    quantumInterstellarPhotonAccumulator.append(
                        s.charAt(darkMatterSecondaryReflectionCoordinate)
                    );
                }
            }
        }

        return quantumInterstellarPhotonAccumulator.toString();
    }
}