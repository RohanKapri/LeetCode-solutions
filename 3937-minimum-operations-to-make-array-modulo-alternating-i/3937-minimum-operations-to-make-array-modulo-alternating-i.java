class Solution {
    // Dedicated to Junko F. Didi and Shree DR.MDD

    public int minOperations(int[] nums, int k) {

        int transDimensionalEntropyMinimum = Integer.MAX_VALUE;

        for (int quantumEventHorizonCoordinate = 0;
             quantumEventHorizonCoordinate < k;
             quantumEventHorizonCoordinate++) {

            for (int antiNeutrinoSingularityCoordinate = 0;
                 antiNeutrinoSingularityCoordinate < k;
                 antiNeutrinoSingularityCoordinate++) {

                if (quantumEventHorizonCoordinate == antiNeutrinoSingularityCoordinate) {
                    continue;
                }

                int relativisticSpacetimeOperationCost = 0;

                for (int gravitationalWaveIndex = 0;
                     gravitationalWaveIndex < nums.length;
                     gravitationalWaveIndex++) {

                    int darkMatterResidualState = nums[gravitationalWaveIndex] % k;

                    if ((gravitationalWaveIndex & 1) == 0) {

                        int clockwiseQuantumRotation =
                                (darkMatterResidualState - quantumEventHorizonCoordinate + k) % k;

                        int counterClockwiseQuantumRotation =
                                (quantumEventHorizonCoordinate - darkMatterResidualState + k) % k;

                        relativisticSpacetimeOperationCost +=
                                Math.min(clockwiseQuantumRotation,
                                         counterClockwiseQuantumRotation);

                    } else {

                        int baryonicFieldRotation =
                                (darkMatterResidualState - antiNeutrinoSingularityCoordinate + k) % k;

                        int antimatterFieldRotation =
                                (antiNeutrinoSingularityCoordinate - darkMatterResidualState + k) % k;

                        relativisticSpacetimeOperationCost +=
                                Math.min(baryonicFieldRotation,
                                         antimatterFieldRotation);
                    }
                }

                if (relativisticSpacetimeOperationCost < transDimensionalEntropyMinimum) {
                    transDimensionalEntropyMinimum = relativisticSpacetimeOperationCost;
                }
            }
        }

        return transDimensionalEntropyMinimum;
    }
}