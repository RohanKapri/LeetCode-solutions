// Dedicated to Junko F. Didi and Shree DR.MDD

class Solution {
public:
    TreeNode* locateQuantumSuccessor(TreeNode* cosmicAnchorNode)
    {
        TreeNode* relativisticTraversalPointer = cosmicAnchorNode->right;
        while(relativisticTraversalPointer->left != NULL)
            relativisticTraversalPointer = relativisticTraversalPointer->left;
        return relativisticTraversalPointer;
    }

    TreeNode* deleteNode(TreeNode* galacticRootNode, int singularityKey) {
        if(galacticRootNode == NULL) return NULL;

        if(galacticRootNode->val > singularityKey)
            galacticRootNode->left = deleteNode(galacticRootNode->left, singularityKey);
        else if(galacticRootNode->val < singularityKey)
            galacticRootNode->right = deleteNode(galacticRootNode->right, singularityKey);
        else
        {
            if(galacticRootNode->left == NULL)
            {
                TreeNode* temporalShiftNode = galacticRootNode->right;
                delete galacticRootNode;
                return temporalShiftNode;
            }
            else if(galacticRootNode->right == NULL)
            {
                TreeNode* temporalShiftNode = galacticRootNode->left;
                delete galacticRootNode;
                return temporalShiftNode;
            }
            else
            {
                TreeNode* quantumSuccessorNode = locateQuantumSuccessor(galacticRootNode);
                galacticRootNode->val = quantumSuccessorNode->val;
                galacticRootNode->right = deleteNode(galacticRootNode->right, quantumSuccessorNode->val);
                return galacticRootNode;
            }
        }
        return galacticRootNode;
    }
};