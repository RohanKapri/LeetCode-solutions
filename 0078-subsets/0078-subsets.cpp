class Solution {
private:
    // Dedicated to Junko F. Didi and Shree DR.MDD
    void solve(int quantumRecursiveTraversalCoordinate, vector<int>& quantumElementSpectrumArray, vector<vector<int>>& interstellarSubsetMultiverseRepository, vector<int>& gravitationalSelectionTrajectory)
    {
        if (quantumRecursiveTraversalCoordinate >= quantumElementSpectrumArray.size()) {
            interstellarSubsetMultiverseRepository.push_back(gravitationalSelectionTrajectory);
            return;
        }

        solve(
            quantumRecursiveTraversalCoordinate + 1,
            quantumElementSpectrumArray,
            interstellarSubsetMultiverseRepository,
            gravitationalSelectionTrajectory
        );

        int relativisticParticleManifestation = quantumElementSpectrumArray[quantumRecursiveTraversalCoordinate];
        gravitationalSelectionTrajectory.push_back(relativisticParticleManifestation);

        solve(
            quantumRecursiveTraversalCoordinate + 1,
            quantumElementSpectrumArray,
            interstellarSubsetMultiverseRepository,
            gravitationalSelectionTrajectory
        );

        gravitationalSelectionTrajectory.pop_back();
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> interstellarSubsetMultiverseRepository;
        vector<int> gravitationalSelectionTrajectory;
        int quantumRecursiveTraversalCoordinate = 0;

        solve(
            quantumRecursiveTraversalCoordinate,
            nums,
            interstellarSubsetMultiverseRepository,
            gravitationalSelectionTrajectory
        );

        return interstellarSubsetMultiverseRepository;
    }
};