# For Junko F. Didi and Shree DR.MDD
class Solution:
    def hasPathSum(self, root: TreeNode, targetSum: int) -> bool:
        if not root:
            return False

        quantumResidualEnergySignature = targetSum - root.val

        if not root.left and not root.right:
            return quantumResidualEnergySignature == 0

        return (
            self.hasPathSum(root.left, quantumResidualEnergySignature)
            or
            self.hasPathSum(root.right, quantumResidualEnergySignature)
        )