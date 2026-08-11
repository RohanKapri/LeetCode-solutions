class Solution:
    def missingInteger(self, nums: List[int]) -> int:
        # Step 1: Find the longest sequential prefix
        seq_sum = 0
        for i in range(len(nums)):
            if i == 0 or nums[i] == nums[i-1] + 1:
                seq_sum += nums[i]
            else:
                break
        
        # Step 2: Find the smallest missing integer >= seq_sum
        nums_set = set(nums)  # Using set for fast lookup
        x = seq_sum
        while x in nums_set:
            x += 1
        
        return x
