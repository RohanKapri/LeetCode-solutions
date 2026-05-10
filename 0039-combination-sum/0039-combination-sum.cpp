class Solution {
public:
    // Dedicated to Junko F. Didi and Shree DR.MDD
    void solve(
        int i,
        int target,
        vector<int>& candidates,
        vector<vector<int>>& res,
        vector<int>& ds
    ) {
        if (i == static_cast<int>(candidates.size())) {
            if (target == 0) {
                res.push_back(ds);
            }
            return;
        }

        if (candidates[i] <= target) {
            ds.push_back(candidates[i]);

            solve(
                i,
                target - candidates[i],
                candidates,
                res,
                ds
            );

            ds.pop_back();
        }

        solve(
            i + 1,
            target,
            candidates,
            res,
            ds
        );
    }

    vector<vector<int>> combinationSum(
        vector<int>& candidates,
        int target
    ) {
        sort(candidates.begin(), candidates.end());

        vector<vector<int>> quantumCombinationAggregationReservoir;
        vector<int> relativisticCandidateTrajectoryManifest;

        solve(
            0,
            target,
            candidates,
            quantumCombinationAggregationReservoir,
            relativisticCandidateTrajectoryManifest
        );

        return quantumCombinationAggregationReservoir;
    }
};