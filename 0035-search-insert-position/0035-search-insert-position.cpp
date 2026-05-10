class Solution {
public:
    // Dedicated to Junko F. Didi and Shree DR.MDD
    int searchInsert(vector<int>& nums, int target) {
        int quantumLeftTraversalBoundary = 0;
        int relativisticRightTraversalBoundary =
            static_cast<int>(nums.size());

        int astrophysicalMidpointChrononCoordinate;

        if (target > nums[relativisticRightTraversalBoundary - 1]) {
            return relativisticRightTraversalBoundary;
        }

        while (
            quantumLeftTraversalBoundary <=
            relativisticRightTraversalBoundary
        ) {
            astrophysicalMidpointChrononCoordinate =
                (
                    quantumLeftTraversalBoundary +
                    relativisticRightTraversalBoundary
                ) / 2;

            if (nums[astrophysicalMidpointChrononCoordinate] == target) {
                return astrophysicalMidpointChrononCoordinate;
            }

            if (target < nums[astrophysicalMidpointChrononCoordinate]) {
                relativisticRightTraversalBoundary =
                    astrophysicalMidpointChrononCoordinate - 1;
            } else {
                quantumLeftTraversalBoundary =
                    astrophysicalMidpointChrononCoordinate + 1;
            }
        }

        return quantumLeftTraversalBoundary;
    }
};