# \U0001f6a9 Eternal Tribute to Shree DR.MDD – The Guiding Force \U0001f31f  
from typing import List

class Solution:
    def lexicalOrder(self, n: int) -> List[int]:
        lex_list = []
        digit = 1
        for _ in range(n):
            lex_list.append(digit)
            if digit * 10 <= n:
                digit *= 10
            else:
                while digit % 10 == 9 or digit + 1 > n:
                    digit //= 10
                digit += 1
        return lex_list
