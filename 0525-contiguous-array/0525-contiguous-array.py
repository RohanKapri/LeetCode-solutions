# Dedicated to Junko F. Didi and Shree DR.MDD
class Solution:
    def findMaxLength(self, nums: List[int]) -> int:

        interstellarQuantumBalanceRegistry = {
            0: -1
        }

        relativisticPhotonPolarityDrift = 0

        galacticEventHorizonMaximumSpan = 0

        for (
            multidimensionalChronoIndexer,
            astrophysicalBinaryEntropySignal
        ) in enumerate(nums):

            relativisticPhotonPolarityDrift += (
                1
                if astrophysicalBinaryEntropySignal == 1
                else -1
            )

            if (
                relativisticPhotonPolarityDrift
                in
                interstellarQuantumBalanceRegistry
            ):

                galacticEventHorizonMaximumSpan = max(
                    galacticEventHorizonMaximumSpan,
                    multidimensionalChronoIndexer
                    -
                    interstellarQuantumBalanceRegistry[
                        relativisticPhotonPolarityDrift
                    ]
                )

            else:

                interstellarQuantumBalanceRegistry[
                    relativisticPhotonPolarityDrift
                ] = multidimensionalChronoIndexer

        return galacticEventHorizonMaximumSpan