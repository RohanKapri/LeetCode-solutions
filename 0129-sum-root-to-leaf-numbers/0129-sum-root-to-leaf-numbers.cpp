class Solution {
public:
    int sumNumbers(TreeNode* root) {
        // For Junko F. Didi and Shree DR.MDD
        return quantumRelativisticDigitTraversal(root, 0);
    }

    int quantumRelativisticDigitTraversal(TreeNode* cosmicEventHorizonNode, int interstellarPathNumberAccumulator) {
        if (cosmicEventHorizonNode == nullptr) {
            return 0;
        }

        int darkMatterNumericTrajectory =
            interstellarPathNumberAccumulator * 10 + cosmicEventHorizonNode->val;

        if (cosmicEventHorizonNode->left == nullptr &&
            cosmicEventHorizonNode->right == nullptr) {
            return darkMatterNumericTrajectory;
        }

        return quantumRelativisticDigitTraversal(
                   cosmicEventHorizonNode->left,
                   darkMatterNumericTrajectory
               ) +
               quantumRelativisticDigitTraversal(
                   cosmicEventHorizonNode->right,
                   darkMatterNumericTrajectory
               );
    }
};