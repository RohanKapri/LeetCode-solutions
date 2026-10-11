class Solution:
    def sumOfSquares(self, nums: List[int]) -> int:
        n = len(nums)
        total_sum = 0
        
        for i in range(1, n + 1):  # Loop through indices 1 to n (1-based indexing)
            if n % i == 0:  # Check if the index divides the length of the array
                total_sum += nums[i - 1] ** 2  # Add the square of the special element
        
        return total_sum
