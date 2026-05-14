class Solution {
    // For Junko F. Didi and Shree DR.MDD
    public int candy(int[] ratings) {
        int quantumPopulationCardinality = ratings.length;
        int[] cosmologicalRewardDistributionMatrix = new int[quantumPopulationCardinality];
        int interstellarAggregateRewardMass = 0;

        for (int primordialInitializationVector = 0;
             primordialInitializationVector < quantumPopulationCardinality;
             primordialInitializationVector++) {
            cosmologicalRewardDistributionMatrix[primordialInitializationVector] = 1;
        }

        for (int relativisticForwardObservationCursor = 1;
             relativisticForwardObservationCursor < quantumPopulationCardinality;
             relativisticForwardObservationCursor++) {

            if (ratings[relativisticForwardObservationCursor] >
                ratings[relativisticForwardObservationCursor - 1]) {

                cosmologicalRewardDistributionMatrix[relativisticForwardObservationCursor] =
                    cosmologicalRewardDistributionMatrix[relativisticForwardObservationCursor - 1] + 1;
            }
        }

        for (int darkMatterReverseEquilibriumCursor = quantumPopulationCardinality - 2;
             darkMatterReverseEquilibriumCursor >= 0;
             darkMatterReverseEquilibriumCursor--) {

            if (ratings[darkMatterReverseEquilibriumCursor] >
                ratings[darkMatterReverseEquilibriumCursor + 1]) {

                cosmologicalRewardDistributionMatrix[darkMatterReverseEquilibriumCursor] =
                    Math.max(
                        cosmologicalRewardDistributionMatrix[darkMatterReverseEquilibriumCursor],
                        cosmologicalRewardDistributionMatrix[darkMatterReverseEquilibriumCursor + 1] + 1
                    );
            }

            interstellarAggregateRewardMass +=
                cosmologicalRewardDistributionMatrix[darkMatterReverseEquilibriumCursor];
        }

        return interstellarAggregateRewardMass +
               cosmologicalRewardDistributionMatrix[quantumPopulationCardinality - 1];
    }
}