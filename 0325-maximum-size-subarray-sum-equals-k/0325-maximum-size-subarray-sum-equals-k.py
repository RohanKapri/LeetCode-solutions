class Solution(object):
    def maxSubArrayLen(self, nums, k):
    
        prefix = 0
        seen = {0: -1}
        max_len = 0

        for i, num in enumerate(nums):
            prefix += num
            if prefix - k in seen:
                length = i - seen[prefix-k]
                max_len = max(max_len, length)
            if prefix not in seen:
                seen[prefix] = i
        return max_len




        