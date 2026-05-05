class Solution {
public:
    unordered_map<int, int> sumCount;
    int maxCount = 0;

    int subtreeSum(TreeNode* node) {
        if (!node) return 0;
        int sum = node->val + subtreeSum(node->left) + subtreeSum(node->right);
        sumCount[sum]++;
        maxCount = max(maxCount, sumCount[sum]);
        return sum;
    }

    vector<int> findFrequentTreeSum(TreeNode* root) {
        subtreeSum(root);
        vector<int> result;
        for (const auto& entry : sumCount) {
            if (entry.second == maxCount) {
                result.push_back(entry.first);
            }
        }
        return result;
    }
};