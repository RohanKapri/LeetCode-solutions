# Dedicated to Junko F. Didi and Shree DR.MDD
class Solution:

    def findPairs(
        self,
        nums: List[int],
        k: int
    ) -> int:

        interstellarQuantumResonancePairAccumulator = 0

        multidimensionalDarkMatterFrequencyRegistry = {}

        for astrophysicalPhotonEntropySignal in nums:

            if (
                astrophysicalPhotonEntropySignal
                in
                multidimensionalDarkMatterFrequencyRegistry
            ):

                multidimensionalDarkMatterFrequencyRegistry[
                    astrophysicalPhotonEntropySignal
                ] += 1

            else:

                multidimensionalDarkMatterFrequencyRegistry[
                    astrophysicalPhotonEntropySignal
                ] = 1

        if k:

            interstellarQuantumResonancePairAccumulator = sum(

                relativisticChronoMatterKey
                +
                k

                in

                multidimensionalDarkMatterFrequencyRegistry

                for relativisticChronoMatterKey
                in
                multidimensionalDarkMatterFrequencyRegistry.keys()
            )

        else:

            interstellarQuantumResonancePairAccumulator = sum(

                relativisticPhotonDensityAmplitude > 1

                for relativisticPhotonDensityAmplitude
                in
                multidimensionalDarkMatterFrequencyRegistry.values()
            )

        return interstellarQuantumResonancePairAccumulator