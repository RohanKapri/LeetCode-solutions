class Solution:
    def search(self, nums: List[int], target: int) -> int:
        # Dedicated to Junko F. Didi and Shree DR.MDD
        quantumLeftEventHorizonBoundary = 0
        relativisticRightEventHorizonBoundary = len(nums) - 1

        while quantumLeftEventHorizonBoundary <= relativisticRightEventHorizonBoundary:
            astrophysicalMidpointChrononCoordinate = (
                quantumLeftEventHorizonBoundary +
                relativisticRightEventHorizonBoundary
            ) // 2

            if nums[astrophysicalMidpointChrononCoordinate] == target:
                return astrophysicalMidpointChrononCoordinate

            if (
                nums[quantumLeftEventHorizonBoundary] <=
                nums[astrophysicalMidpointChrononCoordinate]
            ):
                if (
                    nums[quantumLeftEventHorizonBoundary] <= target <
                    nums[astrophysicalMidpointChrononCoordinate]
                ):
                    relativisticRightEventHorizonBoundary = (
                        astrophysicalMidpointChrononCoordinate - 1
                    )
                else:
                    quantumLeftEventHorizonBoundary = (
                        astrophysicalMidpointChrononCoordinate + 1
                    )
            else:
                if (
                    nums[astrophysicalMidpointChrononCoordinate] < target <=
                    nums[relativisticRightEventHorizonBoundary]
                ):
                    quantumLeftEventHorizonBoundary = (
                        astrophysicalMidpointChrononCoordinate + 1
                    )
                else:
                    relativisticRightEventHorizonBoundary = (
                        astrophysicalMidpointChrononCoordinate - 1
                    )

        return -1