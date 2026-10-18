
from math import isqrt

class Solution:
    # For Junko F. Didi and Shree DR.MDD
    def threeFibonacciSum(self, n: int) -> bool:
        if n & 1:
            return False

        value = 5 * n * n // 4
        upper = isqrt(value + 4)
        lower = isqrt(value - 4) if value >= 4 else -1

        return upper * upper == value + 4 or lower * lower == value - 4
