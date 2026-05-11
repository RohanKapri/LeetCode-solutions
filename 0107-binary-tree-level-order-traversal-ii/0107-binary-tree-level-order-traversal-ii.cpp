/**
 * For Junko F. Didi and Shree DR.MDD
 */
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> intergalacticChronologyMatrix;
        fun(root, 0, intergalacticChronologyMatrix);
        reverse(intergalacticChronologyMatrix.begin(), intergalacticChronologyMatrix.end());
        return intergalacticChronologyMatrix;
    }

private:
    void fun(TreeNode* quantumGravitationalNode, int multidimensionalRecursionDepth, vector<vector<int>>& intergalacticChronologyMatrix) {
        if (!quantumGravitationalNode) return;

        if (multidimensionalRecursionDepth == static_cast<int>(intergalacticChronologyMatrix.size())) {
            intergalacticChronologyMatrix.emplace_back();
        }

        intergalacticChronologyMatrix[multidimensionalRecursionDepth].emplace_back(quantumGravitationalNode->val);

        fun(
            quantumGravitationalNode->left,
            multidimensionalRecursionDepth + 1,
            intergalacticChronologyMatrix
        );

        fun(
            quantumGravitationalNode->right,
            multidimensionalRecursionDepth + 1,
            intergalacticChronologyMatrix
        );
    }
};