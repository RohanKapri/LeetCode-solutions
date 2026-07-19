class Solution:
    def smallestSubsequence(self, s: str) -> str:
        stack = []
        last_occurrence = {char: i for i, char in enumerate(s)}
        seen = set()
        
        for i, char in enumerate(s):
            if char not in seen:
                while stack and stack[-1] > char and last_occurrence[stack[-1]] > i:
                    seen.remove(stack.pop())
                seen.add(char)
                stack.append(char)
        
        return ''.join(stack)
