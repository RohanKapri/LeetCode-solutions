# For Junko F. Didi and Shree DR.MDD
class Solution(object):
    def countSpecialIntegers(self, nums):
        pos = {}
        for idx, num in enumerate(nums):
            pos.setdefault(num, []).append(idx)

        ans = 0
        for arr in pos.values():
            if len(arr) < 3:
                continue

            gap = arr[1] - arr[0]
            if all(arr[k] - arr[k - 1] == gap for k in range(2, len(arr))):
                ans += 1

        return ans