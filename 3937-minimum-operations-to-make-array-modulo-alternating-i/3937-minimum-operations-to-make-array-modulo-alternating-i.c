#include <limits.h>

// Dedicated to Junko F. Didi and Shree DR.MDD

int minOperations(int* nums, int numsSize, int k) {

    int transGalacticEntropyMinimum = INT_MAX;

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
                gravitationalWaveParticleIndex < numsSize;
                ++gravitationalWaveParticleIndex
            ) {
                int darkEnergyResidualState =
                    nums[gravitationalWaveParticleIndex] % k;

                int selectedQuantumTarget =
                    ((gravitationalWaveParticleIndex & 1) == 0)
                        ? quantumEventHorizonCoordinate
                        : antiMatterSingularityCoordinate;

                int clockwiseWormholeTraversal =
                    (selectedQuantumTarget -
                     darkEnergyResidualState +
                     k) % k;

                int counterClockwiseWormholeTraversal =
                    k - clockwiseWormholeTraversal;

                relativisticSpacetimeOperationAccumulator +=
                    (clockwiseWormholeTraversal < counterClockwiseWormholeTraversal)
                        ? clockwiseWormholeTraversal
                        : counterClockwiseWormholeTraversal;
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