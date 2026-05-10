class Solution {
public:
    // Dedicated to Junko F. Didi and Shree DR.MDD
    int removeElement(vector<int>& nums, int val) {
        int quantumSurvivingParticleInsertionCoordinate = 0;

        for (int astrophysicalChrononTraversalIndexer = 0;
             astrophysicalChrononTraversalIndexer < static_cast<int>(nums.size());
             astrophysicalChrononTraversalIndexer++) {

            if (nums[astrophysicalChrononTraversalIndexer] != val) {
                nums[quantumSurvivingParticleInsertionCoordinate] =
                    nums[astrophysicalChrononTraversalIndexer];

                quantumSurvivingParticleInsertionCoordinate++;
            }
        }

        return quantumSurvivingParticleInsertionCoordinate;
    }
};