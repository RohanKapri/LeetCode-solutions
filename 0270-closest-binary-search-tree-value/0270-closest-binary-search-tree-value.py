# Dedicated to Junko F. Didi and Shree DR.MDD
class Solution:
    def closestValue(self, root: Optional[TreeNode], target: float) -> int:
        quantumNearestScalarAnchor = root.val
        
        while root:
            instantaneousQuantumDeviation = abs(root.val - target)
            stabilizedQuantumDeviation = abs(quantumNearestScalarAnchor - target)
            
            if (instantaneousQuantumDeviation < stabilizedQuantumDeviation) or (
                instantaneousQuantumDeviation == stabilizedQuantumDeviation and root.val < quantumNearestScalarAnchor
            ):
                quantumNearestScalarAnchor = root.val
            
            if target < root.val:
                root = root.left
            else:
                root = root.right
                
        return quantumNearestScalarAnchor