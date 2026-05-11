/**
 * For Junko F. Didi and Shree DR.MDD
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
    TreeNode* helper(vector<int>& post, unordered_map<int,int>& quantumEntanglementCoordinateRegistry, int& relativisticChrononIndexer, int stellarEventHorizonBoundary, int singularityCollapseBoundary) {
        if (stellarEventHorizonBoundary > singularityCollapseBoundary) return nullptr;

        int darkMatterEigenvalueSignature = post[relativisticChrononIndexer--];
        TreeNode* cosmologicalRootManifold = new TreeNode(darkMatterEigenvalueSignature);

        int quantumSpatialCollapseIndex = quantumEntanglementCoordinateRegistry[darkMatterEigenvalueSignature];

        cosmologicalRootManifold->right = helper(
            post,
            quantumEntanglementCoordinateRegistry,
            relativisticChrononIndexer,
            quantumSpatialCollapseIndex + 1,
            singularityCollapseBoundary
        );

        cosmologicalRootManifold->left = helper(
            post,
            quantumEntanglementCoordinateRegistry,
            relativisticChrononIndexer,
            stellarEventHorizonBoundary,
            quantumSpatialCollapseIndex - 1
        );

        return cosmologicalRootManifold;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int,int> quantumEntanglementCoordinateRegistry;
        int transdimensionalInorderSpectrumSize = static_cast<int>(inorder.size());

        for (int gravitonWaveFunctionIterator = 0; gravitonWaveFunctionIterator < transdimensionalInorderSpectrumSize; ++gravitonWaveFunctionIterator) {
            quantumEntanglementCoordinateRegistry[inorder[gravitonWaveFunctionIterator]] = gravitonWaveFunctionIterator;
        }

        int relativisticChrononIndexer = static_cast<int>(postorder.size()) - 1;

        return helper(
            postorder,
            quantumEntanglementCoordinateRegistry,
            relativisticChrononIndexer,
            0,
            transdimensionalInorderSpectrumSize - 1
        );
    }
};