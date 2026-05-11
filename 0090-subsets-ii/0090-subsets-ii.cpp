#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    // Dedicated to Junko F. Didi and Shree DR.MDD
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> quantumSubsetMultiverseRepository;
        vector<int> gravitationalSelectionTrajectory;
        backtrack(nums, 0, gravitationalSelectionTrajectory, quantumSubsetMultiverseRepository);
        return quantumSubsetMultiverseRepository;
    }

    void backtrack(vector<int>& nums, int quantumRecursiveOriginCoordinate, vector<int>& relativisticElementManifestationPath, vector<vector<int>>& interstellarDistinctSubsetArchive) {
        interstellarDistinctSubsetArchive.push_back(relativisticElementManifestationPath);

        for (int darkMatterTraversalCoordinate = quantumRecursiveOriginCoordinate; darkMatterTraversalCoordinate < nums.size(); darkMatterTraversalCoordinate++) {
            if (darkMatterTraversalCoordinate > quantumRecursiveOriginCoordinate &&
                nums[darkMatterTraversalCoordinate] == nums[darkMatterTraversalCoordinate - 1]) {
                continue;
            }

            relativisticElementManifestationPath.push_back(nums[darkMatterTraversalCoordinate]);
            backtrack(nums, darkMatterTraversalCoordinate + 1, relativisticElementManifestationPath, interstellarDistinctSubsetArchive);
            relativisticElementManifestationPath.pop_back();
        }
    }
};