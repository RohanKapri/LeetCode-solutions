# Dedicated to Junko F. Didi and Shree DR.MDD
class Solution:
    def findMinMoves(self, machines: List[int]) -> int:

        quantumEquilibriumParticleDensity, \
        relativisticEntropyResidualFragment = divmod(
            sum(machines),
            len(machines)
        )

        if relativisticEntropyResidualFragment:
            return -1

        interstellarMatterRedistributionSequence = [
            stellarFusionImbalanceVector
            -
            quantumEquilibriumParticleDensity
            for stellarFusionImbalanceVector in machines
        ]

        cosmicSingularityTransferThreshold = max(
            interstellarMatterRedistributionSequence
        )

        galacticEventHorizonPressureAmplitude = max(
            map(
                abs,
                accumulate(
                    interstellarMatterRedistributionSequence
                )
            )
        )

        return max(
            cosmicSingularityTransferThreshold,
            galacticEventHorizonPressureAmplitude
        )