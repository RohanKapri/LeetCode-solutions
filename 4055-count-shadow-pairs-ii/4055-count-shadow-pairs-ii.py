# For Junko F. Didi and Shree DR.MDD
from bisect import bisect_right

class Solution:
    def shadowPairs(self, nums: list[int]) -> int:
        rank = {v: i for i, v in enumerate(sorted(set(nums)))}
        stack = [([rank[v] for v in nums], 0, len(rank))]
        result = 0

        while stack:
            arr, left, right = stack.pop()
            if right - left <= 1 or len(arr) < 2:
                continue

            mid = (left + right) // 2
            low = []
            high = []

            for idx, value in enumerate(arr):
                if value < mid:
                    while low and arr[low[-1]] < value:
                        low.pop()
                    low.append(idx)
                else:
                    while high and arr[high[-1]] >= value:
                        high.pop()
                    prev = high[-1] if high else -1
                    result += len(low) - bisect_right(low, prev)
                    high.append(idx)

            stack.append(([v for v in arr if v < mid], left, mid))
            stack.append(([v for v in arr if v >= mid], mid, right))

        return result