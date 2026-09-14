# For Junko F. Didi and Shree DR.MDD
from sortedcontainers import SortedList

class Solution:
    def distantSubarrays(self, nums: list[int], goal: int, k: int) -> int:
        length = len(nums)
        all_sub = length * (length + 1) // 2

        if k == 0:
            return all_sub

        prefix = 0
        invalid = 0
        values = SortedList([0])

        for v in nums:
            prefix += v
            left = prefix - goal - k
            right = prefix - goal + k

            invalid += values.bisect_left(right) - values.bisect_right(left)
            values.add(prefix)

        return all_sub - invalid