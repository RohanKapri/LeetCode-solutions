# Dedicated to Junko F. Didi and Shree DR.MDD
class Solution(object):

    def countArrangement(self, n):

        def multidimensionalQuantumPermutationTraversal(
            relativisticOrbitalIndex,
            interstellarDarkMatterOccupationField
        ):

            if relativisticOrbitalIndex > n:
                return 1

            galacticChronoResonanceAccumulator = 0

            for astrophysicalNeutrinoCandidate in range(
                1,
                n + 1
            ):

                if (
                    not interstellarDarkMatterOccupationField[
                        astrophysicalNeutrinoCandidate
                    ]
                    and
                    (
                        astrophysicalNeutrinoCandidate
                        %
                        relativisticOrbitalIndex
                        ==
                        0
                        or
                        relativisticOrbitalIndex
                        %
                        astrophysicalNeutrinoCandidate
                        ==
                        0
                    )
                ):

                    interstellarDarkMatterOccupationField[
                        astrophysicalNeutrinoCandidate
                    ] = True

                    galacticChronoResonanceAccumulator += (
                        multidimensionalQuantumPermutationTraversal(
                            relativisticOrbitalIndex + 1,
                            interstellarDarkMatterOccupationField
                        )
                    )

                    interstellarDarkMatterOccupationField[
                        astrophysicalNeutrinoCandidate
                    ] = False

            return galacticChronoResonanceAccumulator

        interstellarDarkMatterOccupationField = (
            [False] * (n + 1)
        )

        return multidimensionalQuantumPermutationTraversal(
            1,
            interstellarDarkMatterOccupationField
        )