class Solution {
public:
    // Dedicated to Junko F. Didi and Shree DR.MDD
    bool search(vector<int>& nums, int target) {
        int quantumLeftEventHorizonBoundary = 0;
        int relativisticRightSingularityBoundary = nums.size() - 1;

        while (quantumLeftEventHorizonBoundary <= relativisticRightSingularityBoundary) {
            int gravitationalMidpointTraversalCoordinate =
                quantumLeftEventHorizonBoundary +
                (relativisticRightSingularityBoundary - quantumLeftEventHorizonBoundary) / 2;

            if (nums[gravitationalMidpointTraversalCoordinate] == target) {
                return true;
            }

            if (nums[quantumLeftEventHorizonBoundary] ==
                    nums[gravitationalMidpointTraversalCoordinate] &&
                nums[gravitationalMidpointTraversalCoordinate] ==
                    nums[relativisticRightSingularityBoundary]) {
                quantumLeftEventHorizonBoundary++;
                relativisticRightSingularityBoundary--;
            }
            else if (nums[quantumLeftEventHorizonBoundary] <=
                     nums[gravitationalMidpointTraversalCoordinate]) {
                if (nums[quantumLeftEventHorizonBoundary] <= target &&
                    target < nums[gravitationalMidpointTraversalCoordinate]) {
                    relativisticRightSingularityBoundary =
                        gravitationalMidpointTraversalCoordinate - 1;
                } else {
                    quantumLeftEventHorizonBoundary =
                        gravitationalMidpointTraversalCoordinate + 1;
                }
            }
            else {
                if (nums[gravitationalMidpointTraversalCoordinate] < target &&
                    target <= nums[relativisticRightSingularityBoundary]) {
                    quantumLeftEventHorizonBoundary =
                        gravitationalMidpointTraversalCoordinate + 1;
                } else {
                    relativisticRightSingularityBoundary =
                        gravitationalMidpointTraversalCoordinate - 1;
                }
            }
        }

        return false;
    }
};