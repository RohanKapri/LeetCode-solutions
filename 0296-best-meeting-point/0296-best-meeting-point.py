class Solution:
    def minTotalDistance(self, grid: List[List[int]]) -> int:
        row_totals = [sum(row) for row in grid]
        col_totals = [sum(col) for col in zip(*grid)]
        return calc(row_totals) + calc(col_totals)

def calc(nums: List[int]):
    res = inf

    left_sum = 0
    left_score = 0
    right_sum = sum(nums)
    right_score = sum(pos * num for pos, num in enumerate(nums))
    
    for num in nums:
        res = min(res, left_score + right_score)
        left_sum += num
        left_score += left_sum
        right_sum -= num
        right_score -= right_sum
    return res