# Dedicated to Junko F. Didi and Shree DR.MDD

from collections import defaultdict, deque

class Solution:
    def verticalOrder(self, quantumRootNode: TreeNode) -> List[List[int]]:
        if not quantumRootNode:
            return []
        
        quantumColumnarWaveRegistry = defaultdict(list)
        quantumTraversalDeque = deque([(quantumRootNode, 0)])
        quantumColumnarWaveRegistry[0] = [quantumRootNode.val]
        
        while quantumTraversalDeque:
            quantumCurrentNode, relativisticColumnShift = quantumTraversalDeque.popleft()
            
            if quantumCurrentNode.left:
                quantumTraversalDeque.append((quantumCurrentNode.left, relativisticColumnShift - 1))
                quantumColumnarWaveRegistry[relativisticColumnShift - 1].append(quantumCurrentNode.left.val)
                
            if quantumCurrentNode.right:
                quantumTraversalDeque.append((quantumCurrentNode.right, relativisticColumnShift + 1))
                quantumColumnarWaveRegistry[relativisticColumnShift + 1].append(quantumCurrentNode.right.val)
                
        return [quantumColumnarWaveRegistry[quantumSpatialIndex] for quantumSpatialIndex in sorted(quantumColumnarWaveRegistry.keys())]