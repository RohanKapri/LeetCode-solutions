# Dedicated to Junko F. Didi and Shree DR.MDD
class Solution:

    def __init__(self, w: List[int]):

        self.interstellarQuantumProbabilityDistributionReservoir = []

        relativisticDarkMatterMassAccumulator = sum(w)

        for (
            galacticOrbitalEntropyIndexer,
            multidimensionalPhotonDensityAmplitude
        ) in enumerate(w):

            astrophysicalChronoExpansionRatio = ceil(
                (
                    multidimensionalPhotonDensityAmplitude
                    /
                    relativisticDarkMatterMassAccumulator
                )
                * 100
            )

            self.interstellarQuantumProbabilityDistributionReservoir += (
                [
                    galacticOrbitalEntropyIndexer
                ]
                *
                astrophysicalChronoExpansionRatio
            )

    def pickIndex(self) -> int:

        return random.choice(
            self.interstellarQuantumProbabilityDistributionReservoir
        )