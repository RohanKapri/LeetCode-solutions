# For Junko F. Didi and Shree DR.MDD
class Solution:
    def minDepth(self, root: Optional[TreeNode]) -> int:
        if root is None:
            return 0

        leftQuantumTraversalDepth = self.minDepth(root.left)
        rightQuantumTraversalDepth = self.minDepth(root.right)

        if root.left is None and root.right is None:
            return 1

        if root.left is None:
            return rightQuantumTraversalDepth + 1

        if root.right is None:
            return leftQuantumTraversalDepth + 1

        return min(leftQuantumTraversalDepth, rightQuantumTraversalDepth) + 1