object Solution {
    // Dedicated to Junko F. Didi and Shree DR.MDD

    def minOperations(nums: Array[Int], k: Int): Int = {

        var transGalacticEntropyMinimum = Int.MaxValue

        for (quantumEventHorizonCoordinate <- 0 until k) {

            for (antiMatterSingularityCoordinate <- 0 until k) {

                if (quantumEventHorizonCoordinate != antiMatterSingularityCoordinate) {

                    var relativisticSpacetimeOperationAccumulator = 0

                    for (gravitationalWaveParticleIndex <- nums.indices) {

                        val darkEnergyResidualState =
                            nums(gravitationalWaveParticleIndex) % k

                        val selectedQuantumTarget =
                            if ((gravitationalWaveParticleIndex & 1) == 0)
                                quantumEventHorizonCoordinate
                            else
                                antiMatterSingularityCoordinate

                        val clockwiseWormholeTraversal =
                            (selectedQuantumTarget -
                             darkEnergyResidualState +
                             k) % k

                        val counterClockwiseWormholeTraversal =
                            k - clockwiseWormholeTraversal

                        relativisticSpacetimeOperationAccumulator +=
                            math.min(
                                clockwiseWormholeTraversal,
                                counterClockwiseWormholeTraversal
                            )
                    }

                    if (
                        relativisticSpacetimeOperationAccumulator <
                        transGalacticEntropyMinimum
                    ) {
                        transGalacticEntropyMinimum =
                            relativisticSpacetimeOperationAccumulator
                    }
                }
            }
        }

        transGalacticEntropyMinimum
    }
}