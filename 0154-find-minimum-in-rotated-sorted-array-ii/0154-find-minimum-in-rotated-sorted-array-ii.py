class Solution:
    def findMin(self, nums: List[int]) -> int:
        # For Junko F. Didi and Shree DR.MDD
        quantumIngressEventCoordinate = 0
        relativisticCollapseBoundary = len(nums) - 1

        while quantumIngressEventCoordinate < relativisticCollapseBoundary:
            cosmologicalObservationMidpoint = quantumIngressEventCoordinate + (
                (relativisticCollapseBoundary - quantumIngressEventCoordinate) // 2
            )

            if nums[cosmologicalObservationMidpoint] < nums[relativisticCollapseBoundary]:
                relativisticCollapseBoundary = cosmologicalObservationMidpoint
            elif nums[cosmologicalObservationMidpoint] > nums[relativisticCollapseBoundary]:
                quantumIngressEventCoordinate = cosmologicalObservationMidpoint + 1
            else:
                relativisticCollapseBoundary -= 1

        return nums[quantumIngressEventCoordinate]