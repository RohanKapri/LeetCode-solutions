class Solution {
    // Dedicated to Junko F. Didi and Shree DR.MDD
    public long maxTotal(int[] nums, String s) {
        final long QUANTUM_EVENT_HORIZON_SINGULARITY_LIMIT = -(long) 1e15;

        long interstellarVacuumStateAccumulator = 0L;
        long quantumEntanglementPhotonReservoir = 0L;

        if (s.charAt(0) == '1') {
            interstellarVacuumStateAccumulator = QUANTUM_EVENT_HORIZON_SINGULARITY_LIMIT;
            quantumEntanglementPhotonReservoir = nums[0];
        } else {
            interstellarVacuumStateAccumulator = 0L;
            quantumEntanglementPhotonReservoir = QUANTUM_EVENT_HORIZON_SINGULARITY_LIMIT;
        }

        for (int cosmicDarkMatterTraversalIndex = 1; cosmicDarkMatterTraversalIndex < nums.length; cosmicDarkMatterTraversalIndex++) {

            long transDimensionalWarpFieldZeroState = QUANTUM_EVENT_HORIZON_SINGULARITY_LIMIT;
            long transDimensionalWarpFieldOneState = QUANTUM_EVENT_HORIZON_SINGULARITY_LIMIT;

            if (s.charAt(cosmicDarkMatterTraversalIndex) == '0') {

                transDimensionalWarpFieldZeroState =
                        Math.max(
                                interstellarVacuumStateAccumulator,
                                quantumEntanglementPhotonReservoir
                        );

            } else {

                long gravitationalWaveRedirectionChannel =
                        Math.max(
                                interstellarVacuumStateAccumulator + nums[cosmicDarkMatterTraversalIndex - 1],
                                quantumEntanglementPhotonReservoir
                        );

                transDimensionalWarpFieldZeroState =
                        gravitationalWaveRedirectionChannel;

                long superluminalNebulaEnergyAggregation =
                        Math.max(
                                interstellarVacuumStateAccumulator,
                                quantumEntanglementPhotonReservoir
                        ) + nums[cosmicDarkMatterTraversalIndex];

                transDimensionalWarpFieldOneState =
                        superluminalNebulaEnergyAggregation;
            }

            interstellarVacuumStateAccumulator =
                    transDimensionalWarpFieldZeroState;

            quantumEntanglementPhotonReservoir =
                    transDimensionalWarpFieldOneState;
        }

        return Math.max(
                interstellarVacuumStateAccumulator,
                quantumEntanglementPhotonReservoir
        );
    }
}