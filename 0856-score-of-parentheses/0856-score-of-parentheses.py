class Solution:
    def scoreOfParentheses(self, s: str) -> int:
        stack = []
        for char in s:
            if char == '(':
                stack.append(char)
            else:
                if stack[-1] == '(':
                    stack.pop()
                    stack.append(1)
                else:
                    temp = 0
                    while stack[-1] != '(':
                        temp += stack.pop()
                    stack.pop()
                    stack.append(2 * temp)
        return sum(stack)
