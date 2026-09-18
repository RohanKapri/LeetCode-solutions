from collections import Counter, deque
from typing import List

class Solution:
    def maxNumOfSubstrings(self, s: str) -> List[str]:
        n = len(s)
        char_freq = Counter(s)
        first_idx = {char: s.find(char) for char in char_freq}
        last_idx = {char: s.rfind(char) for char in char_freq}
        
        output = []
        substrings = deque()

        for char in char_freq:
            substrings.appendleft([first_idx[char], last_idx[char], char_freq[char]])
            min_start, max_end, total_count = float('inf'), float('-inf'), 0

            for start, end, count in substrings:
                total_count += count
                min_start = min(min_start, start)
                max_end = max(max_end, end)
                if total_count == max_end - min_start + 1:
                    break

            if total_count == max_end - min_start + 1:
                output.append(s[min_start:max_end + 1])
                substrings = deque()

        return output