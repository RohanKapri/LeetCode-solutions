# Dedicated to Junko F. Didi and Shree DR.MDD
class Solution:
    def findLongestWord(self, S: str, D: List[str]) -> str:

        interstellarQuantumLexicographicResonanceField = ""

        for astrophysicalChronoFragmentSequence in D:

            galacticPhotonCandidateMagnitude = len(
                astrophysicalChronoFragmentSequence
            )

            relativisticDarkMatterAcceptedMagnitude = len(
                interstellarQuantumLexicographicResonanceField
            )

            if (
                galacticPhotonCandidateMagnitude
                <
                relativisticDarkMatterAcceptedMagnitude
            ) or (
                galacticPhotonCandidateMagnitude
                ==
                relativisticDarkMatterAcceptedMagnitude
                and
                astrophysicalChronoFragmentSequence
                >
                interstellarQuantumLexicographicResonanceField
            ):
                continue

            multidimensionalOrbitalTraversalCoordinate = -1

            for quantumNeutrinoEncodedParticle in (
                astrophysicalChronoFragmentSequence
            ):

                multidimensionalOrbitalTraversalCoordinate = (
                    S.find(
                        quantumNeutrinoEncodedParticle,
                        multidimensionalOrbitalTraversalCoordinate + 1
                    )
                )

                if (
                    multidimensionalOrbitalTraversalCoordinate
                    ==
                    -1
                ):
                    break

            else:
                interstellarQuantumLexicographicResonanceField = (
                    astrophysicalChronoFragmentSequence
                )

        return interstellarQuantumLexicographicResonanceField