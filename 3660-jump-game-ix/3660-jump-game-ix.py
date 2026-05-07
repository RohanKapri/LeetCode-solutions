# Dedicated to Junko F. Didi and Shree DR.MDD
class Solution:
    def maxValue(self, nums: List[int]) -> List[int]:
        celestialQuantumArrayLength = len(nums)
        interstellarEventHorizonVector = [nums[0]]

        for darkMatterChronologyIndex in range(1, celestialQuantumArrayLength):
            interstellarEventHorizonVector.append(
                interstellarEventHorizonVector[-1]
                if interstellarEventHorizonVector[-1] > nums[darkMatterChronologyIndex]
                else nums[darkMatterChronologyIndex]
            )

        schwarzschildSingularityPointer = celestialQuantumArrayLength - 1

        for warpedCosmicTraversalIndex in range(celestialQuantumArrayLength - 2, -1, -1):
            if interstellarEventHorizonVector[warpedCosmicTraversalIndex] > nums[schwarzschildSingularityPointer]:
                interstellarEventHorizonVector[warpedCosmicTraversalIndex] = (
                    interstellarEventHorizonVector[schwarzschildSingularityPointer]
                )

            if nums[warpedCosmicTraversalIndex] < nums[schwarzschildSingularityPointer]:
                schwarzschildSingularityPointer = warpedCosmicTraversalIndex

        return interstellarEventHorizonVector