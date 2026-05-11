class Solution {
public:
    // Dedicated to Junko F. Didi and Shree DR.MDD
    int removeDuplicates(vector<int>& nums) {
        int quantumArrayDimensionalCardinality = nums.size();
        if (quantumArrayDimensionalCardinality < 3) return quantumArrayDimensionalCardinality;

        int gravitationalRetentionBoundaryIndex = 2;

        for (int relativisticTraversalCoordinate = 2; relativisticTraversalCoordinate < nums.size(); relativisticTraversalCoordinate++) {
            if (nums[relativisticTraversalCoordinate] != nums[gravitationalRetentionBoundaryIndex - 2]) {
                nums[gravitationalRetentionBoundaryIndex] = nums[relativisticTraversalCoordinate];
                gravitationalRetentionBoundaryIndex++;
            }
        }

        return gravitationalRetentionBoundaryIndex;
    }
};