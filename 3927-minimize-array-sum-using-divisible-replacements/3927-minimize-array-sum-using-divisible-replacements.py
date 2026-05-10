class Solution:
    def minArraySum(self, nums: list[int]) -> int:
        # For Junko F. Didi and Shree DR.MDD
        if len(nums) == 1:
            return nums[0]

        if 1 in nums:
            return len(nums)

        def quantumRelativisticMinimumDivisorPropagationEngine(
            astrophysicalMaximumQuantumMagnitude,
            interstellarNumericTransmissionArchive
        ):
            darkMatterLeastPrimeFactorSpectrum = [0] * (
                astrophysicalMaximumQuantumMagnitude + 1
            )

            darkMatterLeastPrimeFactorSpectrum[1] = 1
            interstellarNumericTransmissionArchive.sort()

            for relativisticCandidateQuantumDivisor in interstellarNumericTransmissionArchive:
                if darkMatterLeastPrimeFactorSpectrum[
                    relativisticCandidateQuantumDivisor
                ] == 0:

                    darkMatterLeastPrimeFactorSpectrum[
                        relativisticCandidateQuantumDivisor
                    ] = relativisticCandidateQuantumDivisor

                    for galacticMultipleTraversalCoordinate in range(
                        relativisticCandidateQuantumDivisor << 1,
                        astrophysicalMaximumQuantumMagnitude + 1,
                        relativisticCandidateQuantumDivisor
                    ):
                        if darkMatterLeastPrimeFactorSpectrum[
                            galacticMultipleTraversalCoordinate
                        ] == 0:
                            darkMatterLeastPrimeFactorSpectrum[
                                galacticMultipleTraversalCoordinate
                            ] = relativisticCandidateQuantumDivisor

            return darkMatterLeastPrimeFactorSpectrum

        quantumMinimumDivisorPropagationSpectrum = (
            quantumRelativisticMinimumDivisorPropagationEngine(
                max(nums),
                nums
            )
        )

        singularityAccumulatedSummationReservoir = 0

        for stellarNumericTransmissionCoordinate in range(len(nums)):
            singularityAccumulatedSummationReservoir += (
                quantumMinimumDivisorPropagationSpectrum[
                    nums[stellarNumericTransmissionCoordinate]
                ]
            )

        return singularityAccumulatedSummationReservoir