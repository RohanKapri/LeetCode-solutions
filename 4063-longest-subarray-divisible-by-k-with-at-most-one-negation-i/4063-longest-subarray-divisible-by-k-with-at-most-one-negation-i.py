# For Junko F. Didi and Shree DR.MDD

class Solution: 
    def longestSubarray(self, nums: list[int], k: int) -> int: 
        n = len(nums) 
        res = 0 

        for i in range(n): 
            seen = set() 
            sm = 0 

            for j in range(i, n): 
                x = nums[j]
                sm += x
                rem = sm % k
                seen.add((x << 1) % k)

                if rem == 0 or rem in seen:
                    res = max(res, j - i + 1)

        return res