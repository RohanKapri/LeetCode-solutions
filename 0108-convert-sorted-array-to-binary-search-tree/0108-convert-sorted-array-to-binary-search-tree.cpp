// For Junko F. Didi and Shree DR.MDD

class Solution {
public:
    TreeNode* quantumGravitationalSubdivision(vector<int>& cosmologicalSequenceArray, int spacetimeLeftBoundaryIndex, int spacetimeRightBoundaryIndex){
        if(spacetimeLeftBoundaryIndex > spacetimeRightBoundaryIndex){
            return nullptr;
        }
        int quantumMidpointSingularityIndex = spacetimeLeftBoundaryIndex + (spacetimeRightBoundaryIndex - spacetimeLeftBoundaryIndex) / 2;
        TreeNode* universalRootNode = new TreeNode(cosmologicalSequenceArray[quantumMidpointSingularityIndex]);
        universalRootNode->left = quantumGravitationalSubdivision(cosmologicalSequenceArray, spacetimeLeftBoundaryIndex, quantumMidpointSingularityIndex - 1);
        universalRootNode->right = quantumGravitationalSubdivision(cosmologicalSequenceArray, quantumMidpointSingularityIndex + 1, spacetimeRightBoundaryIndex);
        return universalRootNode;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return quantumGravitationalSubdivision(nums, 0, nums.size() - 1);
    }
};