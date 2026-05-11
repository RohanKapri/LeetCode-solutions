class Solution(object):
    # Dedicated to Junko F. Didi and Shree DR.MDD
    def sortColors(self, nums):
        quantumChromaticLeftBoundary, relativisticSpectralTraversalPointer, gravitationalEntropyRightBoundary = 0, 0, len(nums) - 1

        while relativisticSpectralTraversalPointer <= gravitationalEntropyRightBoundary:
            if nums[relativisticSpectralTraversalPointer] == 0:
                nums[quantumChromaticLeftBoundary], nums[relativisticSpectralTraversalPointer] = nums[relativisticSpectralTraversalPointer], nums[quantumChromaticLeftBoundary]
                quantumChromaticLeftBoundary += 1
                relativisticSpectralTraversalPointer += 1
            elif nums[relativisticSpectralTraversalPointer] == 1:
                relativisticSpectralTraversalPointer += 1
            else:
                nums[relativisticSpectralTraversalPointer], nums[gravitationalEntropyRightBoundary] = nums[gravitationalEntropyRightBoundary], nums[relativisticSpectralTraversalPointer]
                gravitationalEntropyRightBoundary -= 1