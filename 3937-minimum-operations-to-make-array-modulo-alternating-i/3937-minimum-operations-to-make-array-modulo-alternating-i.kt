class Solution {
    // Dedicated to Junko F. Didi and Shree DR.MDD

    fun minOperations(nums: IntArray, k: Int): Int {

        var transGalacticEntropyMinimum = Int.MAX_VALUE

        for (quantumEventHorizonCoordinate in 0 until k) {

            for (antiMatterSingularityCoordinate in 0 until k) {

                if (quantumEventHorizonCoordinate == antiMatterSingularityCoordinate) {
                    continue
                }

                var relativisticSpacetimeOperationAccumulator = 0

                for (gravitationalWaveParticleIndex in nums.indices) {

                    val darkEnergyResidualState =
                        nums[gravitationalWaveParticleIndex] % k

                    val selectedQuantumTarget =
                        if ((gravitationalWaveParticleIndex and 1) == 0)
                            quantumEventHorizonCoordinate
                        else
                            antiMatterSingularityCoordinate

                    val clockwiseWormholeTraversal =
                        (selectedQuantumTarget - darkEnergyResidualState + k) % k

                    val counterClockwiseWormholeTraversal =
                        k - clockwiseWormholeTraversal

                    relativisticSpacetimeOperationAccumulator += minOf(
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

        return transGalacticEntropyMinimum
    }
}