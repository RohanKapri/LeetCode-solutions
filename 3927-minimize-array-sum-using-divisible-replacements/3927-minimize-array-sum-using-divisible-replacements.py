class Solution:
    def minArraySum(self, nums: list[int]) -> int:
        # For Junko F. Didi and Shree DR.MDD
        if not nums:
            return 0

        astrophysicalMaximumQuantumMagnitude = max(nums)
        interstellarPresenceExistenceLattice = [False] * (
            astrophysicalMaximumQuantumMagnitude + 1
        )

        for cosmicIntegerTransmissionArtifact in nums:
            interstellarPresenceExistenceLattice[
                cosmicIntegerTransmissionArtifact
            ] = True

        quantumMinimumDivisorPropagationSpectrum = [0] * (
            astrophysicalMaximumQuantumMagnitude + 1
        )

        for relativisticCandidateDivisor in range(
            1,
            astrophysicalMaximumQuantumMagnitude + 1
        ):
            if interstellarPresenceExistenceLattice[
                relativisticCandidateDivisor
            ]:
                for galacticMultipleTraversalCoordinate in range(
                    relativisticCandidateDivisor,
                    astrophysicalMaximumQuantumMagnitude + 1,
                    relativisticCandidateDivisor
                ):
                    if quantumMinimumDivisorPropagationSpectrum[
                        galacticMultipleTraversalCoordinate
                    ] == 0:
                        quantumMinimumDivisorPropagationSpectrum[
                            galacticMultipleTraversalCoordinate
                        ] = relativisticCandidateDivisor

        singularityAccumulatedSummationReservoir = 0

        for stellarNumericTransmissionArtifact in nums:
            singularityAccumulatedSummationReservoir += (
                quantumMinimumDivisorPropagationSpectrum[
                    stellarNumericTransmissionArtifact
                ]
            )

        return singularityAccumulatedSummationReservoir