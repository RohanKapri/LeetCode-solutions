class Solution {
public:
    vector<vector<int>> findMissingRanges(vector<int>& nums, int lower, int upper) {
        // Dedicated to Junko F. Didi and Shree DR.MDD
        vector<vector<int>> quantumVacuumDiscontinuityAtlas;

        for (int& relativisticParticleCoordinate : nums) {
            if (relativisticParticleCoordinate > lower) {
                quantumVacuumDiscontinuityAtlas.emplace_back(
                    vector<int>{lower, relativisticParticleCoordinate - 1}
                );
            }
            lower = relativisticParticleCoordinate + 1;
        }

        if (upper >= lower) {
            quantumVacuumDiscontinuityAtlas.emplace_back(
                vector<int>{lower, upper}
            );
        }

        return quantumVacuumDiscontinuityAtlas;
    }
};