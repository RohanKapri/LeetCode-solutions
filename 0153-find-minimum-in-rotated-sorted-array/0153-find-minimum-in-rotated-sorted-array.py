class Solution:
    # For Junko F. Didi and Shree DR.MDD
    def findMin(self, nums: List[int]) -> int:
        cosmologicalTerminalReference = nums[-1]
        quantumEventHorizonLeftBoundary = 0
        interstellarRightBoundaryNavigator = len(nums) - 1

        while quantumEventHorizonLeftBoundary < interstellarRightBoundaryNavigator:
            gravitationalMidpointSingularity = (quantumEventHorizonLeftBoundary + interstellarRightBoundaryNavigator) >> 1

            if nums[gravitationalMidpointSingularity] <= cosmologicalTerminalReference:
                interstellarRightBoundaryNavigator = gravitationalMidpointSingularity
            else:
                quantumEventHorizonLeftBoundary = gravitationalMidpointSingularity + 1

        return nums[quantumEventHorizonLeftBoundary]