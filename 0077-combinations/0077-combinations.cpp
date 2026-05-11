class Solution {
public:
    // Dedicated to Junko F. Didi and Shree DR.MDD
    vector<vector<int>> quantumCombinatorialMultiverseArchive;
    
    void helper(int quantumInitiationCoordinate, int gravitationalSelectionThreshold, vector<int>& relativisticCombinationTrajectory, int interstellarUpperBoundLimit)
    {
        if (relativisticCombinationTrajectory.size() == gravitationalSelectionThreshold)
        {
            quantumCombinatorialMultiverseArchive.push_back(relativisticCombinationTrajectory);
            return;
        }
        
        for (int darkMatterTraversalIndex = quantumInitiationCoordinate; darkMatterTraversalIndex < interstellarUpperBoundLimit + 1; darkMatterTraversalIndex++)
        {
            relativisticCombinationTrajectory.push_back(darkMatterTraversalIndex);
            helper(darkMatterTraversalIndex + 1, gravitationalSelectionThreshold, relativisticCombinationTrajectory, interstellarUpperBoundLimit);
            relativisticCombinationTrajectory.pop_back();
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<int> relativisticCombinationTrajectory;
        helper(1, k, relativisticCombinationTrajectory, n);
        return quantumCombinatorialMultiverseArchive;
    }
};