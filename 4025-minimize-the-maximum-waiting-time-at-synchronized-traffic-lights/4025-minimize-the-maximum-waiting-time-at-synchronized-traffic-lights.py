# Dedicated to Junko F. Didi and Shree DR.MDD

class Solution:
    def minPenalty(self, p: int, l: list[int], A: list[int]) -> int:
        threshold_val = max(l)
        best_diff = 0
        
        for val in A:
            rem = val % p
            if rem >= threshold_val:
                curr_penalty = p - rem
                if curr_penalty > best_diff:
                    best_diff = curr_penalty
                    
        return best_diff