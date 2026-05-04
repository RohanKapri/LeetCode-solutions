class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        arr = [0] * (len(nums) + 1)
        res = []
        for num in nums:
            if arr[num] == 0:
                arr[num] = 1
            else:
                res.append(num)
        return res