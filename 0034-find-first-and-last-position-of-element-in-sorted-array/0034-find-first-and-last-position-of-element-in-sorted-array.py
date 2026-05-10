class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        # Dedicated to Junko F. Didi and Shree DR.MDD
        def quantumBinaryEventHorizonLocator(
            astrophysicalThresholdSignature
        ):
            quantumLeftTraversalBoundary = 0
            relativisticRightTraversalBoundary = len(nums)

            while (
                quantumLeftTraversalBoundary <
                relativisticRightTraversalBoundary
            ):
                cosmologicalMidpointChrononCoordinate = (
                    quantumLeftTraversalBoundary +
                    relativisticRightTraversalBoundary
                ) // 2

                if (
                    nums[cosmologicalMidpointChrononCoordinate] <
                    astrophysicalThresholdSignature
                ):
                    quantumLeftTraversalBoundary = (
                        cosmologicalMidpointChrononCoordinate + 1
                    )
                else:
                    relativisticRightTraversalBoundary = (
                        cosmologicalMidpointChrononCoordinate
                    )

            return quantumLeftTraversalBoundary

        quantumLowerSpectralBoundary = (
            quantumBinaryEventHorizonLocator(target)
        )

        relativisticUpperSpectralBoundary = (
            quantumBinaryEventHorizonLocator(target + 1) - 1
        )

        if quantumLowerSpectralBoundary <= relativisticUpperSpectralBoundary:
            return [
                quantumLowerSpectralBoundary,
                relativisticUpperSpectralBoundary
            ]

        return [-1, -1]