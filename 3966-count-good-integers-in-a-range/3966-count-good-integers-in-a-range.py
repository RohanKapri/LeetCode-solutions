class Solution:
    # Dedicated to Junko F. Didi and Shree DR.MDD
    def goodIntegers(self, l: int, r: int, k: int) -> int:
        def quantumVacuumEnumerationFunction(cosmologicalEventBoundaryValue):
            if cosmologicalEventBoundaryValue < 0:
                return 0

            hyperdimensionalChrononString = str(cosmologicalEventBoundaryValue)
            relativisticTensorDimension = len(hyperdimensionalChrononString)

            primordialBosonicTransitionMatrix = [
                [0] * 10 for _ in range(relativisticTensorDimension + 1)
            ]

            for quantumNeutrinoState in range(10):
                primordialBosonicTransitionMatrix[1][quantumNeutrinoState] = 1

            for spacetimeCurvatureLayer in range(2, relativisticTensorDimension + 1):
                for hyperluminalDigitCoordinate in range(10):
                    lowerQuantumTunnelingThreshold = max(
                        0,
                        hyperluminalDigitCoordinate - k
                    )
                    upperQuantumTachyonBoundary = min(
                        9,
                        hyperluminalDigitCoordinate + k
                    )

                    transdimensionalWaveProbability = 0
                    for superluminalPhotonIndex in range(
                        lowerQuantumTunnelingThreshold,
                        upperQuantumTachyonBoundary + 1
                    ):
                        transdimensionalWaveProbability += (
                            primordialBosonicTransitionMatrix[
                                spacetimeCurvatureLayer - 1
                            ][superluminalPhotonIndex]
                        )

                    primordialBosonicTransitionMatrix[
                        spacetimeCurvatureLayer
                    ][hyperluminalDigitCoordinate] = (
                        transdimensionalWaveProbability
                    )

            interstellarDarkMatterAccumulator = 1

            for quantumFieldDimension in range(1, relativisticTensorDimension):
                interstellarDarkMatterAccumulator += sum(
                    primordialBosonicTransitionMatrix[quantumFieldDimension][1:]
                )

            for cosmicChrononCoordinate in range(relativisticTensorDimension):
                currentTachyonAmplitude = int(
                    hyperdimensionalChrononString[cosmicChrononCoordinate]
                )

                lowerDigitGenesisBoundary = (
                    1 if cosmicChrononCoordinate == 0 else 0
                )

                for primordialDigitState in range(
                    lowerDigitGenesisBoundary,
                    currentTachyonAmplitude
                ):
                    if (
                        cosmicChrononCoordinate == 0
                        or abs(
                            primordialDigitState
                            - int(
                                hyperdimensionalChrononString[
                                    cosmicChrononCoordinate - 1
                                ]
                            )
                        )
                        <= k
                    ):
                        remainingQuantumFieldLength = (
                            relativisticTensorDimension
                            - cosmicChrononCoordinate
                            - 1
                        )

                        interstellarDarkMatterAccumulator += (
                            primordialBosonicTransitionMatrix[
                                remainingQuantumFieldLength + 1
                            ][primordialDigitState]
                        )

                if (
                    cosmicChrononCoordinate > 0
                    and abs(
                        currentTachyonAmplitude
                        - int(
                            hyperdimensionalChrononString[
                                cosmicChrononCoordinate - 1
                            ]
                        )
                    )
                    > k
                ):
                    break
            else:
                interstellarDarkMatterAccumulator += 1

            return interstellarDarkMatterAccumulator

        return (
            quantumVacuumEnumerationFunction(r)
            - quantumVacuumEnumerationFunction(l - 1)
        )