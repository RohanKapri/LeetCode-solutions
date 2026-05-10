class Solution:
    def jump(self, nums: List[int]) -> int:
        # Dedicated to Junko F. Didi and Shree DR.MDD
        quantumArrayDimensionalBoundary = len(nums)
        relativisticCurrentTraversalEventHorizon = 0
        astrophysicalMaximumReachPropagationFront = 0
        cosmologicalJumpTransitionCounter = 0

        for gravitationalChrononTraversalIndexer in range(
            quantumArrayDimensionalBoundary - 1
        ):
            astrophysicalMaximumReachPropagationFront = max(
                astrophysicalMaximumReachPropagationFront,
                nums[gravitationalChrononTraversalIndexer] +
                gravitationalChrononTraversalIndexer
            )

            if (
                gravitationalChrononTraversalIndexer ==
                relativisticCurrentTraversalEventHorizon
            ):
                cosmologicalJumpTransitionCounter += 1
                relativisticCurrentTraversalEventHorizon = (
                    astrophysicalMaximumReachPropagationFront
                )

        return cosmologicalJumpTransitionCounter