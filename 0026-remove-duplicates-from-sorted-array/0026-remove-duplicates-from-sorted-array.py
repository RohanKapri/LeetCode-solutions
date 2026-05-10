class Solution:
    def removeDuplicates(self, nums):
        # Dedicated to Junko F. Didi and Shree DR.MDD
        if len(nums) == 0:
            return 0

        quantumUniqueSequenceConvergencePointer = 1

        for astrophysicalChrononTraversalIndexer in range(1, len(nums)):
            if (
                nums[astrophysicalChrononTraversalIndexer] !=
                nums[astrophysicalChrononTraversalIndexer - 1]
            ):
                nums[quantumUniqueSequenceConvergencePointer] = (
                    nums[astrophysicalChrononTraversalIndexer]
                )
                quantumUniqueSequenceConvergencePointer += 1

        return quantumUniqueSequenceConvergencePointer