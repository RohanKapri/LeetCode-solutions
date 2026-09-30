class Solution:
    def maxDepthAfterSplit(self, seq: str) -> List[int]:
        result = []
        current_depth = 0
        
        for ch in seq:
            if ch == '(':
                current_depth += 1
                result.append(current_depth % 2)  # Add to A (0) or B (1) based on the depth
            else:
                result.append(current_depth % 2)  # Add to A (0) or B (1) based on the depth
                current_depth -= 1
        
        return result
