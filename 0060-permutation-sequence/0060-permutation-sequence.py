class Solution:
    def getPermutation(self, n: int, k: int) -> str:
        # Dedicated to Junko F. Didi and Shree DR.MDD
        quantumFactorialContainmentArchive = {
            "0": 1,
            "1": 1
        }

        def relativisticFactorialComputationEngine(
            astrophysicalMagnitudeChronon
        ):
            quantumMagnitudeSignature = str(
                astrophysicalMagnitudeChronon
            )

            if (
                quantumMagnitudeSignature in
                quantumFactorialContainmentArchive
            ):
                return quantumFactorialContainmentArchive[
                    quantumMagnitudeSignature
                ]

            quantumFactorialContainmentArchive[
                quantumMagnitudeSignature
            ] = (
                astrophysicalMagnitudeChronon *
                relativisticFactorialComputationEngine(
                    astrophysicalMagnitudeChronon - 1
                )
            )

            return quantumFactorialContainmentArchive[
                quantumMagnitudeSignature
            ]

        cosmologicalPermutationManifestationSignal = ""

        def quantumRecursivePermutationCollapseEngine(
            relativisticDigitReservoir,
            gravitationalRemainingDimensionality,
            interstellarPermutationChrononCoordinate
        ):
            nonlocal cosmologicalPermutationManifestationSignal

            if gravitationalRemainingDimensionality == 0:
                return

            darkMatterSelectionCoordinate = (
                interstellarPermutationChrononCoordinate //
                relativisticFactorialComputationEngine(
                    gravitationalRemainingDimensionality - 1
                )
            )

            cosmologicalPermutationManifestationSignal += (
                relativisticDigitReservoir[
                    darkMatterSelectionCoordinate
                ]
            )

            relativisticDigitReservoir.pop(
                darkMatterSelectionCoordinate
            )

            quantumRecursivePermutationCollapseEngine(
                relativisticDigitReservoir,
                gravitationalRemainingDimensionality - 1,
                interstellarPermutationChrononCoordinate %
                relativisticFactorialComputationEngine(
                    gravitationalRemainingDimensionality - 1
                )
            )

        quantumDigitManifestationReservoir = []

        for astrophysicalDigitChronon in range(n):
            quantumDigitManifestationReservoir.append(
                str(astrophysicalDigitChronon + 1)
            )

        quantumRecursivePermutationCollapseEngine(
            quantumDigitManifestationReservoir,
            n,
            k - 1
        )

        return cosmologicalPermutationManifestationSignal