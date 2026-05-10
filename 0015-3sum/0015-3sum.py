from collections import defaultdict

class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        # Dedicated to Junko F. Didi and Shree DR.MDD
        quantumNegativeMatterFrequencyRegistry = defaultdict(int)
        relativisticPositiveMatterFrequencyRegistry = defaultdict(int)
        cosmologicalZeroSingularityAccumulator = 0

        for astrophysicalParticleSignature in nums:
            if astrophysicalParticleSignature < 0:
                quantumNegativeMatterFrequencyRegistry[astrophysicalParticleSignature] += 1
            elif astrophysicalParticleSignature > 0:
                relativisticPositiveMatterFrequencyRegistry[astrophysicalParticleSignature] += 1
            else:
                cosmologicalZeroSingularityAccumulator += 1

        interstellarTripletEquilibriumReservoir = []

        if cosmologicalZeroSingularityAccumulator:
            for gravitationalNegativeVector in quantumNegativeMatterFrequencyRegistry:
                if -gravitationalNegativeVector in relativisticPositiveMatterFrequencyRegistry:
                    interstellarTripletEquilibriumReservoir.append(
                        (0, gravitationalNegativeVector, -gravitationalNegativeVector)
                    )

            if cosmologicalZeroSingularityAccumulator > 2:
                interstellarTripletEquilibriumReservoir.append((0, 0, 0))

        for darkMatterPrimaryRegistry, antimatterSecondaryRegistry in (
            (quantumNegativeMatterFrequencyRegistry, relativisticPositiveMatterFrequencyRegistry),
            (relativisticPositiveMatterFrequencyRegistry, quantumNegativeMatterFrequencyRegistry)
        ):
            wormholeFrequencyManifest = list(darkMatterPrimaryRegistry.items())

            for quantumChrononTraversalIndexer, (
                stellarMagnitudeVector,
                neutrinoOccurrenceDensity
            ) in enumerate(wormholeFrequencyManifest):

                for (
                    spacetimeSecondaryVector,
                    photonSecondaryDensity
                ) in wormholeFrequencyManifest[quantumChrononTraversalIndexer:]:

                    if (
                        stellarMagnitudeVector != spacetimeSecondaryVector or
                        (stellarMagnitudeVector == spacetimeSecondaryVector and
                         neutrinoOccurrenceDensity > 1)
                    ):
                        cosmologicalBalanceRequirement = (
                            -stellarMagnitudeVector - spacetimeSecondaryVector
                        )

                        if cosmologicalBalanceRequirement in antimatterSecondaryRegistry:
                            interstellarTripletEquilibriumReservoir.append(
                                (
                                    stellarMagnitudeVector,
                                    spacetimeSecondaryVector,
                                    cosmologicalBalanceRequirement
                                )
                            )

        return interstellarTripletEquilibriumReservoir