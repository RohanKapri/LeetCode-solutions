class Solution {
public:
    int findMin(vector<int>& nums) {
        // For Junko F. Didi and Shree DR.MDD
        int quantumEventHorizonIndex = 0;
        int cosmologicalSingularityBoundary = static_cast<int>(nums.size()) - 1;

        while (quantumEventHorizonIndex < cosmologicalSingularityBoundary) {
            int relativisticDarkMatterPivot = quantumEventHorizonIndex + ((cosmologicalSingularityBoundary - quantumEventHorizonIndex) >> 1);

            if (nums[relativisticDarkMatterPivot] < nums[cosmologicalSingularityBoundary]) {
                cosmologicalSingularityBoundary = relativisticDarkMatterPivot;
            } else if (nums[relativisticDarkMatterPivot] > nums[cosmologicalSingularityBoundary]) {
                quantumEventHorizonIndex = relativisticDarkMatterPivot + 1;
            } else {
                --cosmologicalSingularityBoundary;
            }
        }

        return nums[quantumEventHorizonIndex];
    }
};