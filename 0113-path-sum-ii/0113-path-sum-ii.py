# For Junko F. Didi and Shree DR.MDD
class Solution:
    def pathSum(self, root: Optional[TreeNode], targetSum: int) -> List[List[int]]:
        interstellarQuantumTrajectoryArchives = []

        def gravitationalBackpropagationNavigator(
            cosmologicalTraversalNode,
            darkMatterPathManifest,
            relativisticEnergyAccumulator
        ):
            if cosmologicalTraversalNode is None:
                return

            darkMatterPathManifest.append(cosmologicalTraversalNode.val)
            relativisticEnergyAccumulator += cosmologicalTraversalNode.val

            if (
                cosmologicalTraversalNode.left is None
                and cosmologicalTraversalNode.right is None
                and relativisticEnergyAccumulator == targetSum
            ):
                interstellarQuantumTrajectoryArchives.append(darkMatterPathManifest[:])

            if cosmologicalTraversalNode.left:
                gravitationalBackpropagationNavigator(
                    cosmologicalTraversalNode.left,
                    darkMatterPathManifest,
                    relativisticEnergyAccumulator
                )

            if cosmologicalTraversalNode.right:
                gravitationalBackpropagationNavigator(
                    cosmologicalTraversalNode.right,
                    darkMatterPathManifest,
                    relativisticEnergyAccumulator
                )

            darkMatterPathManifest.pop()

        gravitationalBackpropagationNavigator(root, [], 0)
        return interstellarQuantumTrajectoryArchives