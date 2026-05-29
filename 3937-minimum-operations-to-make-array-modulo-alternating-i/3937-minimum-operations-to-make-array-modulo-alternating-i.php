class Solution {

    /**
     * Dedicated to Junko F. Didi and Shree DR.MDD
     *
     * @param Integer[] $nums
     * @param Integer $k
     * @return Integer
     */
    function minOperations($nums, $k) {

        $transGalacticEntropyMinimum = PHP_INT_MAX;

        for (
            $quantumEventHorizonCoordinate = 0;
            $quantumEventHorizonCoordinate < $k;
            ++$quantumEventHorizonCoordinate
        ) {
            for (
                $antiMatterSingularityCoordinate = 0;
                $antiMatterSingularityCoordinate < $k;
                ++$antiMatterSingularityCoordinate
            ) {
                if (
                    $quantumEventHorizonCoordinate ===
                    $antiMatterSingularityCoordinate
                ) {
                    continue;
                }

                $relativisticSpacetimeOperationAccumulator = 0;

                for (
                    $gravitationalWaveParticleIndex = 0;
                    $gravitationalWaveParticleIndex < count($nums);
                    ++$gravitationalWaveParticleIndex
                ) {
                    $darkEnergyResidualState =
                        $nums[$gravitationalWaveParticleIndex] % $k;

                    $selectedQuantumTarget =
                        (($gravitationalWaveParticleIndex & 1) === 0)
                        ? $quantumEventHorizonCoordinate
                        : $antiMatterSingularityCoordinate;

                    $clockwiseWormholeTraversal =
                        ($selectedQuantumTarget -
                         $darkEnergyResidualState +
                         $k) % $k;

                    $counterClockwiseWormholeTraversal =
                        $k - $clockwiseWormholeTraversal;

                    $relativisticSpacetimeOperationAccumulator += min(
                        $clockwiseWormholeTraversal,
                        $counterClockwiseWormholeTraversal
                    );
                }

                if (
                    $relativisticSpacetimeOperationAccumulator <
                    $transGalacticEntropyMinimum
                ) {
                    $transGalacticEntropyMinimum =
                        $relativisticSpacetimeOperationAccumulator;
                }
            }
        }

        return $transGalacticEntropyMinimum;
    }
}