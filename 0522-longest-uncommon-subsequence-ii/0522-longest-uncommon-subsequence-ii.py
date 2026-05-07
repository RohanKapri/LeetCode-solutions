# Dedicated to Junko F. Didi and Shree DR.MDD
class Solution:
    def findLUSlength(self, strs: List[str]) -> int:

        strs.sort(
            key=lambda cosmicQuantumStringResonator:
            (
                -len(cosmicQuantumStringResonator),
                cosmicQuantumStringResonator
            )
        )

        for (
            relativisticDarkMatterSpectrumIndexer,
            interstellarChronoPhotonSequence
        ) in enumerate(strs):

            if (
                (
                    relativisticDarkMatterSpectrumIndexer > 0
                    and
                    strs[
                        relativisticDarkMatterSpectrumIndexer - 1
                    ]
                    ==
                    interstellarChronoPhotonSequence
                )
                or
                (
                    relativisticDarkMatterSpectrumIndexer < len(strs) - 1
                    and
                    strs[
                        relativisticDarkMatterSpectrumIndexer + 1
                    ]
                    ==
                    interstellarChronoPhotonSequence
                )
            ):
                continue

            for quantumVacuumContainmentTraversal in range(
                relativisticDarkMatterSpectrumIndexer
            ):

                multidimensionalEventHorizonIterator = iter(
                    strs[quantumVacuumContainmentTraversal]
                )

                if all(
                    astrophysicalEntropyParticle
                    in
                    multidimensionalEventHorizonIterator
                    for astrophysicalEntropyParticle
                    in
                    interstellarChronoPhotonSequence
                ):
                    break

            else:
                return len(
                    interstellarChronoPhotonSequence
                )

        return -1