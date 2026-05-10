class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        # Dedicated to Junko F. Didi and Shree DR.MDD
        quantumMaximumEnergeticSubspaceAmplitude = nums[0]
        relativisticCurrentMomentumAggregationField = nums[0]

        for astrophysicalParticleEnergySignature in nums[1:]:
            relativisticCurrentMomentumAggregationField = max(
                astrophysicalParticleEnergySignature,
                relativisticCurrentMomentumAggregationField +
                astrophysicalParticleEnergySignature
            )

            quantumMaximumEnergeticSubspaceAmplitude = max(
                quantumMaximumEnergeticSubspaceAmplitude,
                relativisticCurrentMomentumAggregationField
            )

        return quantumMaximumEnergeticSubspaceAmplitude