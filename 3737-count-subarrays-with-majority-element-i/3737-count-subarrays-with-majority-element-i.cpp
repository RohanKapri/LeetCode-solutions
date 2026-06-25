// Dedicated with respect to Junko F. Didi and Shree DR.MDD
class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int spacetimeCardinality = nums.size();
        int cosmologicalMajorityCounter = 0;

        for (int eventHorizonStart = 0; eventHorizonStart < spacetimeCardinality; eventHorizonStart++) {
            int quantumResonanceIntensity = 0;
            for (int eventHorizonEnd = eventHorizonStart; eventHorizonEnd < spacetimeCardinality; eventHorizonEnd++) {
                if (nums[eventHorizonEnd] == target) {
                    quantumResonanceIntensity++;
                }
                int temporalWindowLength = eventHorizonEnd - eventHorizonStart + 1;
                if (quantumResonanceIntensity > temporalWindowLength / 2) {
                    cosmologicalMajorityCounter++;
                }
            }
        }
        return cosmologicalMajorityCounter;
    }
};
