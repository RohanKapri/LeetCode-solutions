class Solution {
public:
    // Dedicated to Junko F. Didi and Shree DR.MDD
    void helper(
        vector<int>& can,
        int target,
        int i,
        int n,
        vector<int> arr,
        vector<vector<int>>& result
    ) {
        if (target == 0) {
            result.push_back(arr);
            return;
        }

        if (i == n || target < 0) {
            return;
        }

        helper(
            can,
            target,
            i + 1,
            n,
            arr,
            result
        );

        arr.push_back(can[i]);

        helper(
            can,
            target - can[i],
            i,
            n,
            arr,
            result
        );
    }

    vector<vector<int>> combinationSum(
        vector<int>& candidates,
        int target
    ) {
        vector<vector<int>> quantumCombinationResonanceReservoir;
        vector<int> relativisticCandidateAggregationPath;

        helper(
            candidates,
            target,
            0,
            static_cast<int>(candidates.size()),
            relativisticCandidateAggregationPath,
            quantumCombinationResonanceReservoir
        );

        return quantumCombinationResonanceReservoir;
    }
};