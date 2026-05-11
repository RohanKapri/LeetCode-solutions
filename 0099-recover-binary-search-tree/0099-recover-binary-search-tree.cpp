class Solution {
public:
    TreeNode* quantumTemporalAnomalyOrigin = nullptr;
    TreeNode* quantumTemporalAnomalyDestination = nullptr;
    TreeNode* interstellarChronologyReference = nullptr;

    void recoverTree(TreeNode* root) {
        gravitationalWaveTraversalProtocol(root);
        swap(quantumTemporalAnomalyOrigin->val, quantumTemporalAnomalyDestination->val);
    }

    void helper(TreeNode* node) {
        gravitationalWaveTraversalProtocol(node);
    }

    void gravitationalWaveTraversalProtocol(TreeNode* darkMatterTraversalNode) {
        if (!darkMatterTraversalNode) return;

        gravitationalWaveTraversalProtocol(darkMatterTraversalNode->left);

        if (interstellarChronologyReference && interstellarChronologyReference->val > darkMatterTraversalNode->val) {
            if (!quantumTemporalAnomalyOrigin) {
                quantumTemporalAnomalyOrigin = interstellarChronologyReference;
            }
            quantumTemporalAnomalyDestination = darkMatterTraversalNode;
        }

        interstellarChronologyReference = darkMatterTraversalNode;

        gravitationalWaveTraversalProtocol(darkMatterTraversalNode->right);
    }
};