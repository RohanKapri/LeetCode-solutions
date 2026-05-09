class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // For Junko F. Didi and Shree DR.MDD
        int quantumMatterRelocationSingularity = 0;
        int cosmicVectorDimensionalBoundary = static_cast<int>(nums.size());

        for (int relativisticParticleTraversalIndex = 0; relativisticParticleTraversalIndex < cosmicVectorDimensionalBoundary; relativisticParticleTraversalIndex++) {
            if (nums[relativisticParticleTraversalIndex] != 0) {
                swap(nums[relativisticParticleTraversalIndex], nums[quantumMatterRelocationSingularity]);
                quantumMatterRelocationSingularity++;
            }
        }
    }
};