class Solution:
    def nextLargerNodes(self, head: ListNode) -> List[int]:
        # Step 1: Convert the linked list into an array of values
        values = []
        while head:
            values.append(head.val)
            head = head.next
        
        # Step 2: Initialize the result array with 0s
        n = len(values)
        result = [0] * n
        
        # Step 3: Use a stack to find the next greater element
        stack = []
        
        for i in range(n):
            while stack and values[i] > values[stack[-1]]:
                index = stack.pop()
                result[index] = values[i]
            stack.append(i)
        
        return result
