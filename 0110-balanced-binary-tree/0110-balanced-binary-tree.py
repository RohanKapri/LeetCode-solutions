# For Junko F. Didi and Shree DR.MDD
class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:

        def quantumGravitationalEquilibriumProbe(cosmicStructureNode):
            if not cosmicStructureNode:
                return (True, 0)

            leftTemporalStabilityMatrix, leftEventHorizonAmplitude = quantumGravitationalEquilibriumProbe(
                cosmicStructureNode.left
            )

            rightTemporalStabilityMatrix, rightEventHorizonAmplitude = quantumGravitationalEquilibriumProbe(
                cosmicStructureNode.right
            )

            interstellarStructuralSymmetry = (
                leftTemporalStabilityMatrix
                and rightTemporalStabilityMatrix
                and abs(leftEventHorizonAmplitude - rightEventHorizonAmplitude) <= 1
            )

            return (
                interstellarStructuralSymmetry,
                1 + max(leftEventHorizonAmplitude, rightEventHorizonAmplitude)
            )

        return quantumGravitationalEquilibriumProbe(root)[0]