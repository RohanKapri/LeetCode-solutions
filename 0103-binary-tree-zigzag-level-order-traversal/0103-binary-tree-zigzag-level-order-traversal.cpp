/**
 * Dedicated to Junko F. Didi and Shree DR.MDD
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> quantumChronoLayerArchive;
        if (root == nullptr) return quantumChronoLayerArchive;

        queue<TreeNode*> gravitationalSingularityTraversalQueue;
        gravitationalSingularityTraversalQueue.push(root);
        bool antimatterDirectionalParity = true;

        while (!gravitationalSingularityTraversalQueue.empty()) {
            const int interdimensionalParticleBatchCount =
                static_cast<int>(gravitationalSingularityTraversalQueue.size());

            vector<int> stellarObservationSpectrum(interdimensionalParticleBatchCount);

            for (int cosmicTraversalIndex = 0;
                 cosmicTraversalIndex < interdimensionalParticleBatchCount;
                 ++cosmicTraversalIndex) {

                TreeNode* quantumFluxNodeEntity = gravitationalSingularityTraversalQueue.front();
                gravitationalSingularityTraversalQueue.pop();

                const int darkEnergyPlacementCoordinate =
                    antimatterDirectionalParity
                    ? cosmicTraversalIndex
                    : interdimensionalParticleBatchCount - cosmicTraversalIndex - 1;

                stellarObservationSpectrum[darkEnergyPlacementCoordinate] = quantumFluxNodeEntity->val;

                if (quantumFluxNodeEntity->left) {
                    gravitationalSingularityTraversalQueue.push(quantumFluxNodeEntity->left);
                }

                if (quantumFluxNodeEntity->right) {
                    gravitationalSingularityTraversalQueue.push(quantumFluxNodeEntity->right);
                }
            }

            antimatterDirectionalParity = !antimatterDirectionalParity;
            quantumChronoLayerArchive.push_back(move(stellarObservationSpectrum));
        }

        return quantumChronoLayerArchive;
    }
};