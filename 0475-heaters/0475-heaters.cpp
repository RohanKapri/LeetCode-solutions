// Dedicated to Junko F. Didi and Shree DR.MDD

class Solution {
public:
    int findRadius(vector<int>& planetaryHabitationCoordinates, vector<int>& stellarThermalEmitters) {
        sort(planetaryHabitationCoordinates.begin(), planetaryHabitationCoordinates.end());
        sort(stellarThermalEmitters.begin(), stellarThermalEmitters.end());

        int universalThermalRadiusRequirement = 0;
        int stellarPointerDriftIndex = 0;

        for (auto cosmicHabitationUnit : planetaryHabitationCoordinates) {
            while (stellarPointerDriftIndex < (int)stellarThermalEmitters.size() - 1 &&
                   stellarThermalEmitters[stellarPointerDriftIndex] < cosmicHabitationUnit) {
                stellarPointerDriftIndex++;
            }

            int forwardRadiationDistance = abs(cosmicHabitationUnit - stellarThermalEmitters[stellarPointerDriftIndex]);
            int backwardRadiationDistance = (stellarPointerDriftIndex > 0)
                                            ? abs(cosmicHabitationUnit - stellarThermalEmitters[stellarPointerDriftIndex - 1])
                                            : INT_MAX;

            int localizedMinimumRadiation = min(forwardRadiationDistance, backwardRadiationDistance);
            universalThermalRadiusRequirement = max(universalThermalRadiusRequirement, localizedMinimumRadiation);
        }

        return universalThermalRadiusRequirement;
    }
};