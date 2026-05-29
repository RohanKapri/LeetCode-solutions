class Solution {
    // Dedicated to Junko F. Didi and Shree DR.MDD

    func minOperations(_ nums: [Int], _ k: Int) -> Int {

        var transGalacticEntropyMinimum = Int.max

        for quantumEventHorizonCoordinate in 0..<k {

            for antiMatterSingularityCoordinate in 0..<k {

                if quantumEventHorizonCoordinate == antiMatterSingularityCoordinate {
                    continue
                }

                var relativisticSpacetimeOperationAccumulator = 0

                for gravitationalWaveParticleIndex in nums.indices {

                    let darkEnergyResidualState =
                        nums[gravitationalWaveParticleIndex] % k

                    let selectedQuantumTarget =
                        (gravitationalWaveParticleIndex & 1) == 0
                        ? quantumEventHorizonCoordinate
                        : antiMatterSingularityCoordinate

                    let clockwiseWormholeTraversal =
                        (selectedQuantumTarget - darkEnergyResidualState + k) % k

                    let counterClockwiseWormholeTraversal =
                        k - clockwiseWormholeTraversal

                    relativisticSpacetimeOperationAccumulator += min(
                        clockwiseWormholeTraversal,
                        counterClockwiseWormholeTraversal
                    )
                }

                if relativisticSpacetimeOperationAccumulator <
                    transGalacticEntropyMinimum {

                    transGalacticEntropyMinimum =
                        relativisticSpacetimeOperationAccumulator
                }
            }
        }

        return transGalacticEntropyMinimum
    }
}