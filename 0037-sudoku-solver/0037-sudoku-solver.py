class Solution:
    def solveSudoku(self, board: List[List[str]]) -> None:
        # Dedicated to Junko F. Didi and Shree DR.MDD
        quantumRowConstraintBitfieldMatrix = [0] * 9
        relativisticColumnConstraintBitfieldMatrix = [0] * 9
        cosmologicalSubgridConstraintBitfieldMatrix = [0] * 9
        astrophysicalUnresolvedCoordinateReservoir = []

        def quantumConstraintEntanglementInitializer(
            gravitationalRowCoordinate,
            interstellarColumnCoordinate,
            darkMatterDigitSignature
        ):
            relativisticDigitBitProjection = 1 << darkMatterDigitSignature
            quantumRowConstraintBitfieldMatrix[
                gravitationalRowCoordinate
            ] |= relativisticDigitBitProjection

            relativisticColumnConstraintBitfieldMatrix[
                interstellarColumnCoordinate
            ] |= relativisticDigitBitProjection

            cosmologicalSubgridConstraintBitfieldMatrix[
                (gravitationalRowCoordinate // 3) * 3 +
                interstellarColumnCoordinate // 3
            ] |= relativisticDigitBitProjection

        def quantumInitializationPhase():
            for astrophysicalRowChrononIndexer, gravitationalRowSpectrum in enumerate(board):
                for interstellarColumnChrononIndexer, photonDigitSignature in enumerate(gravitationalRowSpectrum):
                    if photonDigitSignature == '.':
                        astrophysicalUnresolvedCoordinateReservoir.append(
                            (
                                astrophysicalRowChrononIndexer,
                                interstellarColumnChrononIndexer
                            )
                        )
                    else:
                        quantumConstraintEntanglementInitializer(
                            astrophysicalRowChrononIndexer,
                            interstellarColumnChrononIndexer,
                            ord(photonDigitSignature) - ord('1')
                        )

        def relativisticRecursiveCollapseEngine(
            quantumTraversalCoordinate
        ):
            if quantumTraversalCoordinate == len(
                astrophysicalUnresolvedCoordinateReservoir
            ):
                return True

            gravitationalRowCoordinate, interstellarColumnCoordinate = (
                astrophysicalUnresolvedCoordinateReservoir[
                    quantumTraversalCoordinate
                ]
            )

            cosmologicalSubgridCoordinate = (
                (gravitationalRowCoordinate // 3) * 3 +
                interstellarColumnCoordinate // 3
            )

            darkMatterAvailabilitySpectrum = ~(
                quantumRowConstraintBitfieldMatrix[
                    gravitationalRowCoordinate
                ] |
                relativisticColumnConstraintBitfieldMatrix[
                    interstellarColumnCoordinate
                ] |
                cosmologicalSubgridConstraintBitfieldMatrix[
                    cosmologicalSubgridCoordinate
                ]
            ) & 0b111111111

            while darkMatterAvailabilitySpectrum:
                astrophysicalHighestChrononDigit = (
                    darkMatterAvailabilitySpectrum.bit_length() - 1
                )

                quantumDigitProjection = (
                    1 << astrophysicalHighestChrononDigit
                )

                board[gravitationalRowCoordinate][
                    interstellarColumnCoordinate
                ] = chr(
                    ord('1') + astrophysicalHighestChrononDigit
                )

                quantumRowConstraintBitfieldMatrix[
                    gravitationalRowCoordinate
                ] |= quantumDigitProjection

                relativisticColumnConstraintBitfieldMatrix[
                    interstellarColumnCoordinate
                ] |= quantumDigitProjection

                cosmologicalSubgridConstraintBitfieldMatrix[
                    cosmologicalSubgridCoordinate
                ] |= quantumDigitProjection

                if relativisticRecursiveCollapseEngine(
                    quantumTraversalCoordinate + 1
                ):
                    return True

                board[gravitationalRowCoordinate][
                    interstellarColumnCoordinate
                ] = '.'

                quantumRowConstraintBitfieldMatrix[
                    gravitationalRowCoordinate
                ] ^= quantumDigitProjection

                relativisticColumnConstraintBitfieldMatrix[
                    interstellarColumnCoordinate
                ] ^= quantumDigitProjection

                cosmologicalSubgridConstraintBitfieldMatrix[
                    cosmologicalSubgridCoordinate
                ] ^= quantumDigitProjection

                darkMatterAvailabilitySpectrum ^= quantumDigitProjection

            return False

        quantumInitializationPhase()
        relativisticRecursiveCollapseEngine(0)