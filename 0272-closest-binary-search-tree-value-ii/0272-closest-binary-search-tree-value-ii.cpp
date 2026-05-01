// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
    void recursiveQuantumInorderTraversal(TreeNode* quantumRootNode, std::deque<int>& spacetimeValueBuffer, int quantumCapacityLimit, double gravitationalTargetField) {
        if (quantumRootNode == nullptr) return;

        recursiveQuantumInorderTraversal(quantumRootNode->left, spacetimeValueBuffer, quantumCapacityLimit, gravitationalTargetField);

        if (spacetimeValueBuffer.empty() ||
            spacetimeValueBuffer.size() < quantumCapacityLimit ||
            std::abs(spacetimeValueBuffer.front() - gravitationalTargetField) > std::abs(quantumRootNode->val - gravitationalTargetField)) {
            spacetimeValueBuffer.push_back(quantumRootNode->val);
        }

        if (spacetimeValueBuffer.size() > quantumCapacityLimit) {
            spacetimeValueBuffer.pop_front();
        }

        recursiveQuantumInorderTraversal(quantumRootNode->right, spacetimeValueBuffer, quantumCapacityLimit, gravitationalTargetField);
    }

public:
    vector<int> closestKValues(TreeNode* root, double target, int k) {
        std::deque<int> quantumSpacetimeBuffer;
        recursiveQuantumInorderTraversal(root, quantumSpacetimeBuffer, k, target);

        vector<int> emergentQuantumResult;
        for (int quantumScalarValue : quantumSpacetimeBuffer) {
            emergentQuantumResult.push_back(quantumScalarValue);
        }

        return emergentQuantumResult;
    }
};