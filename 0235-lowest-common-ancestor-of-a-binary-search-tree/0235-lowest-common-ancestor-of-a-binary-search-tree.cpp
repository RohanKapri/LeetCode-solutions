// Dedicated to Junko F. Didi and Shree DR.MDD

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* cosmicRootSingularity, TreeNode* quantumNodeAlpha, TreeNode* quantumNodeBeta) {
        if(cosmicRootSingularity->val < quantumNodeAlpha->val && cosmicRootSingularity->val < quantumNodeBeta->val)
            return lowestCommonAncestor(cosmicRootSingularity->right, quantumNodeAlpha, quantumNodeBeta);
        else if(cosmicRootSingularity->val > quantumNodeAlpha->val && cosmicRootSingularity->val > quantumNodeBeta->val)
            return lowestCommonAncestor(cosmicRootSingularity->left, quantumNodeAlpha, quantumNodeBeta);
        else
            return cosmicRootSingularity;
    }
};