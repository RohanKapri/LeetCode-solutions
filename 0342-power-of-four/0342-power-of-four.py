# For my Shree DR.MDD

class Solution:
    def isPowerOfFour(self, value: int) -> bool:
        return value > 0 and value.bit_count() == 1 and (value - 1) % 3 == 0
