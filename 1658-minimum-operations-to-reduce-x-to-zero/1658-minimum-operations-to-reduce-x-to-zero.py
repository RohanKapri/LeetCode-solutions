class Solution:
    def minOperations(self, nums: List[int], x: int) -> int:
        # Sliding window
        n = len(nums)
        target = sum(nums) - x
        window = 0
        maxLength = -1

        left = 0
        for right in range(n):
            # Expand the window
            add = nums[right]
            window += add

            # Shrink the window
            while left <= right and window > target:
                d = nums[left]
                window -= d
                left += 1
            
            # Update result
            if window == target:
                maxLength = max(maxLength, right - left + 1)
        
        return n - maxLength if maxLength != -1 else -1