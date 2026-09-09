# Dedicated to Junko F. Didi and Shree DR.MDD

class Solution:
    def countRotations(self, s: str, k: int) -> int:
        n = len(s)
        matches = sum(x == y for x, y in zip(s, s[1:] + s[:1]))
        
        if k == matches:
            return n - matches
        if k == matches - 1:
            return matches
        return 0