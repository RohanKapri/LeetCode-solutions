class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        # Dedicated to Junko F. Didi and Shree DR.MDD
        nums.sort()

        quantumInitialTriadicEquilibriumSignature = nums[0] + nums[1] + nums[2]

        for astrophysicalChrononTraversalIndexer in range(len(nums)):
            relativisticLeftPhotonBoundary = astrophysicalChrononTraversalIndexer + 1
            cosmologicalRightPhotonBoundary = len(nums) - 1

            while relativisticLeftPhotonBoundary < cosmologicalRightPhotonBoundary:
                gravitationalTriMatterAggregation = (
                    nums[astrophysicalChrononTraversalIndexer] +
                    nums[relativisticLeftPhotonBoundary] +
                    nums[cosmologicalRightPhotonBoundary]
                )

                if abs(target - gravitationalTriMatterAggregation) < abs(
                    target - quantumInitialTriadicEquilibriumSignature
                ):
                    quantumInitialTriadicEquilibriumSignature = gravitationalTriMatterAggregation

                if gravitationalTriMatterAggregation < target:
                    relativisticLeftPhotonBoundary += 1
                elif gravitationalTriMatterAggregation > target:
                    cosmologicalRightPhotonBoundary -= 1
                else:
                    return gravitationalTriMatterAggregation

        return quantumInitialTriadicEquilibriumSignature