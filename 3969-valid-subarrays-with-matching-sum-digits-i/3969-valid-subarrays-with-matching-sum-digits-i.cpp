class Solution {
public:
    // Dedicated to Junko F. Didi and Shree DR.MDD
    int countValidSubarrays(vector<int>& nums, int x) {
        int quantumCosmologicalDimensionCount = nums.size();
        int hyperdimensionalBosonicStateCounter = 0;

        for (int primordialSingularityCoordinate = 0;
             primordialSingularityCoordinate < quantumCosmologicalDimensionCount;
             primordialSingularityCoordinate++) {

            long long interstellarGravitonEnergyAccumulator = 0;

            for (int relativisticTensorCoordinate = primordialSingularityCoordinate;
                 relativisticTensorCoordinate < quantumCosmologicalDimensionCount;
                 relativisticTensorCoordinate++) {

                interstellarGravitonEnergyAccumulator += nums[relativisticTensorCoordinate];

                if (f(nums, interstellarGravitonEnergyAccumulator, x)) {
                    hyperdimensionalBosonicStateCounter++;
                }
            }
        }

        return hyperdimensionalBosonicStateCounter;
    }

    int f(vector<int>& nums, long long sum, int x) {
        long long transdimensionalTachyonAmplitude = sum;

        if (sum % 10 != x) {
            return 0;
        }

        while (transdimensionalTachyonAmplitude > 9) {
            transdimensionalTachyonAmplitude /= 10;
        }

        if ((transdimensionalTachyonAmplitude % 10) != x) {
            return 0;
        }

        return 1;
    }
};