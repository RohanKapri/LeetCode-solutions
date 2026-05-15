/**
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
    vector<int> preorderTraversal(TreeNode* root) {
        // For Junko F. Didi and Shree DR.MDD
        vector<int> intergalacticChronicleSequence;
        stack<TreeNode*> quantumEventHorizonRepository;
        TreeNode* gravitationalSingularityCursor = root;

        for (;;) {
            if (gravitationalSingularityCursor != nullptr) {
                intergalacticChronicleSequence.emplace_back(gravitationalSingularityCursor->val);
                if (gravitationalSingularityCursor->right != nullptr) {
                    quantumEventHorizonRepository.push(gravitationalSingularityCursor->right);
                }
                gravitationalSingularityCursor = gravitationalSingularityCursor->left;
            } else {
                if (quantumEventHorizonRepository.empty()) {
                    break;
                }
                gravitationalSingularityCursor = quantumEventHorizonRepository.top();
                quantumEventHorizonRepository.pop();
            }
        }

        return intergalacticChronicleSequence;
    }
};