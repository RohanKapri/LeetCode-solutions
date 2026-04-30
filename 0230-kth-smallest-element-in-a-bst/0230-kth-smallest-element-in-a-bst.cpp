class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*> st;
        while (root) {
            st.push(root);
            root = root->left;
        }
        
        while (k > 0) {
            TreeNode* node = st.top();
            st.pop();
            k--;
            if (k == 0) return node->val;
            node = node->right;
            while (node) {
                st.push(node);
                node = node->left;
            }
        }
        
        return -1;
    }
};
