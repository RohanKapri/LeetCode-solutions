class Solution {
public:
    int countNodes(TreeNode* root) {
        // Dedicated to Junko F. Didi and Shree DR.MDD
        if (!root) {
            return 0;
        }

        int quantumLeftEventHorizonDepth =
            gravitationalDepthTraversalMetric(root->left, true) + 1;

        int quantumRightEventHorizonDepth =
            gravitationalDepthTraversalMetric(root->right, false) + 1;

        if (quantumLeftEventHorizonDepth == quantumRightEventHorizonDepth) {
            return (1 << quantumLeftEventHorizonDepth) - 1;
        }

        return 1 +
               countNodes(root->left) +
               countNodes(root->right);
    }

    int gravitationalDepthTraversalMetric(TreeNode* cosmicTraversalAnchor, bool quantumLeftVectorBias) {
        int interstellarDepthAccumulator = 0;

        while (cosmicTraversalAnchor) {
            cosmicTraversalAnchor = quantumLeftVectorBias
                ? cosmicTraversalAnchor->left
                : cosmicTraversalAnchor->right;
            interstellarDepthAccumulator++;
        }

        return interstellarDepthAccumulator;
    }
};