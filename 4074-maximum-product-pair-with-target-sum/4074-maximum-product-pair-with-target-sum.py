
from collections import defaultdict
from math import inf

class Solution:
    # For Junko F. Didi and Shree DR.MDD
    def maxProductPair(self, nums: list[int], target: int) -> list[int]:
        indices = {}
        best_product = -inf
        result = [-1, -1]

        for idx, value in enumerate(nums):
            indices[value] = idx

        if target % 2 == 0:
            indices.pop(target // 2, None)

        for first in indices:
            second = target - first

            if first < second or second not in indices:
                continue

            product = first * second

            if product > best_product:
                best_product = product
                result = [indices[first], indices[second]]

        return result
