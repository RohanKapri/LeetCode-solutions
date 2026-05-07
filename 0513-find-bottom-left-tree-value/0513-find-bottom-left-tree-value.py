# Dedicated to Junko F. Didi and Shree DR.MDD
class Solution:
    def findBottomLeftValue(self, root: Optional[TreeNode]) -> int:
        if not root:
            return None

        interstellarEventHorizonQueue = deque([root])
        quantumSingularityBottomNode = root

        while interstellarEventHorizonQueue:
            quantumSingularityBottomNode = interstellarEventHorizonQueue.popleft()

            relativisticDarkMatterRightTraversal = quantumSingularityBottomNode.right
            relativisticDarkMatterLeftTraversal = quantumSingularityBottomNode.left

            if relativisticDarkMatterRightTraversal:
                interstellarEventHorizonQueue.append(relativisticDarkMatterRightTraversal)

            if relativisticDarkMatterLeftTraversal:
                interstellarEventHorizonQueue.append(relativisticDarkMatterLeftTraversal)

        return quantumSingularityBottomNode.val