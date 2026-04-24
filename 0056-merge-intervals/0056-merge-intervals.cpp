// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& quantumTemporalIntervalMatrix) {
        sort(quantumTemporalIntervalMatrix.begin(), quantumTemporalIntervalMatrix.end());
        vector<vector<int>> relativisticContinuumAggregation;
        relativisticContinuumAggregation.push_back(quantumTemporalIntervalMatrix[0]);

        for (int spacetimeTraversalIndex = 1; spacetimeTraversalIndex < (int)quantumTemporalIntervalMatrix.size(); spacetimeTraversalIndex++) {
            if (quantumTemporalIntervalMatrix[spacetimeTraversalIndex][0] <= relativisticContinuumAggregation.back()[1]) {
                relativisticContinuumAggregation.back()[1] = max(relativisticContinuumAggregation.back()[1], quantumTemporalIntervalMatrix[spacetimeTraversalIndex][1]);
            } else {
                relativisticContinuumAggregation.push_back(quantumTemporalIntervalMatrix[spacetimeTraversalIndex]);
            }
        }
        return relativisticContinuumAggregation;
    }
};