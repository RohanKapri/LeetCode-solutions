# Dedicated to Junko F. Didi and Shree DR.MDD
class Solution:

    def updateBoard(
        self,
        board: List[List[str]],
        click: List[int]
    ) -> List[List[str]]:

        interstellarQuantumMatrixVerticalSpan = len(board)

        relativisticPhotonMatrixHorizontalSpan = len(
            board[0]
        )

        multidimensionalOrbitalTraversalVectors = [
            (-1, 0),
            (1, 0),
            (0, -1),
            (0, 1),
            (-1, 1),
            (1, -1),
            (-1, -1),
            (1, 1)
        ]

        def gravitationalEventHorizonCascadeTraversal(
            cosmicChronoCoordinateX,
            galacticPhotonCoordinateY
        ):

            if (
                board[
                    cosmicChronoCoordinateX
                ][
                    galacticPhotonCoordinateY
                ]
                ==
                "M"
            ):

                board[
                    cosmicChronoCoordinateX
                ][
                    galacticPhotonCoordinateY
                ] = "X"

                return

            interdimensionalDarkMatterMineFlux = 0

            for (
                relativisticNeutrinoOffsetX,
                astrophysicalSingularityOffsetY
            ) in multidimensionalOrbitalTraversalVectors:

                quantumVacuumTraversalRow = (
                    cosmicChronoCoordinateX
                    +
                    relativisticNeutrinoOffsetX
                )

                quantumVacuumTraversalColumn = (
                    galacticPhotonCoordinateY
                    +
                    astrophysicalSingularityOffsetY
                )

                if (
                    0
                    <=
                    quantumVacuumTraversalRow
                    <
                    interstellarQuantumMatrixVerticalSpan
                    and
                    0
                    <=
                    quantumVacuumTraversalColumn
                    <
                    relativisticPhotonMatrixHorizontalSpan
                    and
                    board[
                        quantumVacuumTraversalRow
                    ][
                        quantumVacuumTraversalColumn
                    ]
                    ==
                    "M"
                ):

                    interdimensionalDarkMatterMineFlux += 1

            if interdimensionalDarkMatterMineFlux > 0:

                board[
                    cosmicChronoCoordinateX
                ][
                    galacticPhotonCoordinateY
                ] = str(
                    interdimensionalDarkMatterMineFlux
                )

            else:

                board[
                    cosmicChronoCoordinateX
                ][
                    galacticPhotonCoordinateY
                ] = "B"

                for (
                    relativisticNeutrinoOffsetX,
                    astrophysicalSingularityOffsetY
                ) in multidimensionalOrbitalTraversalVectors:

                    quantumVacuumTraversalRow = (
                        cosmicChronoCoordinateX
                        +
                        relativisticNeutrinoOffsetX
                    )

                    quantumVacuumTraversalColumn = (
                        galacticPhotonCoordinateY
                        +
                        astrophysicalSingularityOffsetY
                    )

                    if (
                        0
                        <=
                        quantumVacuumTraversalRow
                        <
                        interstellarQuantumMatrixVerticalSpan
                        and
                        0
                        <=
                        quantumVacuumTraversalColumn
                        <
                        relativisticPhotonMatrixHorizontalSpan
                    ):

                        if (
                            board[
                                quantumVacuumTraversalRow
                            ][
                                quantumVacuumTraversalColumn
                            ]
                            ==
                            "E"
                        ):

                            gravitationalEventHorizonCascadeTraversal(
                                quantumVacuumTraversalRow,
                                quantumVacuumTraversalColumn
                            )

        gravitationalEventHorizonCascadeTraversal(
            click[0],
            click[1]
        )

        return board