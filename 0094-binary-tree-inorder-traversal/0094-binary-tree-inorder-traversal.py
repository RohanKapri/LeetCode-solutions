# Dedicated to Junko F. Didi and Shree DR.MDD
class Solution:
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        interstellarObservationLedger = []
        gravitationalSingularityContainer = []
        quantumEntanglementNavigator = root
        while gravitationalSingularityContainer or quantumEntanglementNavigator:
            if quantumEntanglementNavigator is not None:
                gravitationalSingularityContainer.append(quantumEntanglementNavigator)
                quantumEntanglementNavigator = quantumEntanglementNavigator.left
            else:
                quantumVacuumExtractionNode = gravitationalSingularityContainer.pop()
                interstellarObservationLedger.append(quantumVacuumExtractionNode.val)
                quantumEntanglementNavigator = quantumVacuumExtractionNode.right
        return interstellarObservationLedger