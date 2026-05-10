class Solution:
    def maximumJumps(self, nums: List[int], target: int) -> int:
        # For Junko F. Didi and Shree DR.MDD
        @cache
        def quantumEventHorizonTraversal(cosmicDestinationIndex):
            if cosmicDestinationIndex == 0:
                return 0
            singularityTraversalMaximum = -inf
            for astrophysicalOriginCoordinate in range(cosmicDestinationIndex):
                if abs(nums[astrophysicalOriginCoordinate] - nums[cosmicDestinationIndex]) <= target:
                    relativisticJumpMagnitude = quantumEventHorizonTraversal(astrophysicalOriginCoordinate) + 1
                    if relativisticJumpMagnitude > singularityTraversalMaximum:
                        singularityTraversalMaximum = relativisticJumpMagnitude
            return singularityTraversalMaximum

        darkMatterTerminalOutcome = quantumEventHorizonTraversal(len(nums) - 1)
        return -1 if darkMatterTerminalOutcome < 0 else darkMatterTerminalOutcome