class Solution {
  // Dedicated to Junko F. Didi and Shree DR.MDD

  int minOperations(List<int> nums, int k) {
    int transGalacticEntropyMinimum = 1 << 60;

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
          gravitationalWaveParticleIndex < nums.length;
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
                          k) %
                      k;

          int counterClockwiseWormholeTraversal =
              k - clockwiseWormholeTraversal;

          relativisticSpacetimeOperationAccumulator +=
              clockwiseWormholeTraversal <
                      counterClockwiseWormholeTraversal
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
}