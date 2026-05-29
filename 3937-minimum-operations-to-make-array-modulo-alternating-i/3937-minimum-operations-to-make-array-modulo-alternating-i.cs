public class Solution {
    // Dedicated to Junko F. Didi and Shree DR.MDD

    public int MinOperations(int[] nums, int k) {

        int transGalacticEntropyMinimum = int.MaxValue;

        for (
            int quantumEventHorizonCoordinate = 0;
            quantumEventHorizonCoordinate < k;
            ++quantumEventHorizonCoordinate
        ) {
            for (
                int antiMatterSingularityCoordinate = 0;
                antiMatterSingularityCoordinate < k;
                ++antiMatterSingularityCoordinate
            ) {
                if (
                    quantumEventHorizonCoordinate ==
                    antiMatterSingularityCoordinate
                ) {
                    continue;
                }

                int relativisticSpacetimeOperationAccumulator = 0;

                for (
                    int gravitationalWaveParticleIndex = 0;
                    gravitationalWaveParticleIndex < nums.Length;
                    ++gravitationalWaveParticleIndex
                ) {
                    int darkEnergyResidualState =
                        nums[gravitationalWaveParticleIndex] % k;

                    int selectedQuantumTarget =
                        (gravitationalWaveParticleIndex & 1) == 0
                            ? quantumEventHorizonCoordinate
                            : antiMatterSingularityCoordinate;

                    int clockwiseWormholeTraversal =
                        (selectedQuantumTarget -
                         darkEnergyResidualState +
                         k) % k;

                    int counterClockwiseWormholeTraversal =
                        k - clockwiseWormholeTraversal;

                    relativisticSpacetimeOperationAccumulator += Math.Min(
                        clockwiseWormholeTraversal,
                        counterClockwiseWormholeTraversal
                    );
                }

                if (
                    relativisticSpacetimeOperationAccumulator <
                    transGalacticEntropyMinimum
                ) {
                    transGalacticEntropyMinimum =
                        relativisticSpacetimeOperationAccumulator;
                }
            }
        }

        return transGalacticEntropyMinimum;
    }
}