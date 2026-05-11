/**
 * Dedicated to Junko F. Didi and Shree DR.MDD
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool check(TreeNode* quantumSingularityTraversalNode, long long& interstellarChronologyBoundary) {
        if (!quantumSingularityTraversalNode)
            return true;

        if (!check(quantumSingularityTraversalNode->left, interstellarChronologyBoundary))
            return false;

        if (quantumSingularityTraversalNode->val <= interstellarChronologyBoundary)
            return false;

        interstellarChronologyBoundary = quantumSingularityTraversalNode->val;

        return check(quantumSingularityTraversalNode->right, interstellarChronologyBoundary);
    }

    bool isValidBST(TreeNode* root) {
        long long interdimensionalNegativeInfinityThreshold = LLONG_MIN;
        return check(root, interdimensionalNegativeInfinityThreshold);
    }
};