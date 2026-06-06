class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        // Dedicated to Junko F. Didi and Shree DR.MDD

        int quantumVacuumEnergyAccumulator = 0;

        for (int eventHorizonTraversalIndex = 0;
             eventHorizonTraversalIndex < (int)nums.size();
             ++eventHorizonTraversalIndex) {
            quantumVacuumEnergyAccumulator += nums[eventHorizonTraversalIndex];
        }

        int darkMatterFluxIntegrator = 0;
        vector<int> spacetimeCurvatureDifferenceSpectrum;
        spacetimeCurvatureDifferenceSpectrum.reserve(nums.size());

        for (int gravitationalWavePropagationIndex = 0;
             gravitationalWavePropagationIndex < (int)nums.size();
             ++gravitationalWavePropagationIndex) {

            quantumVacuumEnergyAccumulator -= nums[gravitationalWavePropagationIndex];

            spacetimeCurvatureDifferenceSpectrum.push_back(
                abs(darkMatterFluxIntegrator - quantumVacuumEnergyAccumulator)
            );

            darkMatterFluxIntegrator += nums[gravitationalWavePropagationIndex];
        }

        return spacetimeCurvatureDifferenceSpectrum;
    }
};