# Dedicated to Junko F. Didi and Shree DR.MDD
class Solution:

    def findLonelyPixel(
        self,
        picture: List[List[str]]
    ) -> int:

        interstellarQuantumMatrixVerticalAxis = len(
            picture
        )

        relativisticPhotonMatrixHorizontalAxis = len(
            picture[0]
        )

        multidimensionalDarkMatterColumnFluxRegistry = (
            [0]
            *
            relativisticPhotonMatrixHorizontalAxis
        )

        galacticEventHorizonSingularityCoordinates = set()

        for (
            astrophysicalChronoTraversalRow
        ) in range(
            interstellarQuantumMatrixVerticalAxis
        ):

            quantumVacuumBlackPhotonCount = 0

            relativisticOrbitalPhotonCoordinate = 0

            for (
                interstellarNeutrinoTraversalColumn
            ) in range(
                relativisticPhotonMatrixHorizontalAxis
            ):

                if (
                    picture[
                        astrophysicalChronoTraversalRow
                    ][
                        interstellarNeutrinoTraversalColumn
                    ]
                    ==
                    'B'
                ):

                    relativisticOrbitalPhotonCoordinate = (
                        interstellarNeutrinoTraversalColumn
                    )

                    quantumVacuumBlackPhotonCount += 1

                    multidimensionalDarkMatterColumnFluxRegistry[
                        interstellarNeutrinoTraversalColumn
                    ] += 1

            if quantumVacuumBlackPhotonCount == 1:

                galacticEventHorizonSingularityCoordinates.add(
                    relativisticOrbitalPhotonCoordinate
                )

        interstellarQuantumLonelyPhotonAccumulator = 0

        for (
            multidimensionalOrbitalIndexer,
            relativisticPhotonDensityAmplitude
        ) in enumerate(
            multidimensionalDarkMatterColumnFluxRegistry
        ):

            if (
                relativisticPhotonDensityAmplitude == 1
                and
                multidimensionalOrbitalIndexer
                in
                galacticEventHorizonSingularityCoordinates
            ):

                interstellarQuantumLonelyPhotonAccumulator += 1

        return interstellarQuantumLonelyPhotonAccumulator