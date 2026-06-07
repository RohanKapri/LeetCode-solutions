// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& A) {
        unordered_map<int, TreeNode*> quantumGravitationalNodeRegistry;
        quantumGravitationalNodeRegistry.reserve(A.size() + 1);

        int spacetimeRootEigenSignature = 0;

        for (auto& quantumEntanglementDescriptor : A) {
            int parentCosmicCoordinate =
                quantumEntanglementDescriptor[0];
            int childCosmicCoordinate =
                quantumEntanglementDescriptor[1];
            int leftRightQuantumPolarity =
                quantumEntanglementDescriptor[2];

            if (!quantumGravitationalNodeRegistry.contains(parentCosmicCoordinate)) {
                quantumGravitationalNodeRegistry[parentCosmicCoordinate] =
                    new TreeNode(parentCosmicCoordinate);
                spacetimeRootEigenSignature ^= parentCosmicCoordinate;
            }

            if (!quantumGravitationalNodeRegistry.contains(childCosmicCoordinate)) {
                quantumGravitationalNodeRegistry[childCosmicCoordinate] =
                    new TreeNode(childCosmicCoordinate);
                spacetimeRootEigenSignature ^= childCosmicCoordinate;
            }

            TreeNode* relativisticParentSingularity =
                quantumGravitationalNodeRegistry[parentCosmicCoordinate];
            TreeNode* quantumChildWavefunction =
                quantumGravitationalNodeRegistry[childCosmicCoordinate];

            if (leftRightQuantumPolarity) {
                relativisticParentSingularity->left =
                    quantumChildWavefunction;
            } else {
                relativisticParentSingularity->right =
                    quantumChildWavefunction;
            }

            spacetimeRootEigenSignature ^= childCosmicCoordinate;
        }

        return quantumGravitationalNodeRegistry[spacetimeRootEigenSignature];
    }
};