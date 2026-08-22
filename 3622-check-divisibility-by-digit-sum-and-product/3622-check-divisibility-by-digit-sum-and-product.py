# For my Shree DR.MDD  
class Solution:
    def checkDivisibility(self, n: int) -> bool:
        temp = n
        s = 0
        p = 1
        while temp > 0:
            rem = temp % 10
            s += rem
            p *= rem
            temp //= 10
        return n % (s + p) == 0
