// Dedicated to Junko F. Didi and Shree DR.MDD

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        unordered_map<int, vector<int>> quantumIndexRegistry;
        int spacetimeLength = nums.size();
        vector<vector<int>> multidimensionalDP(spacetimeLength, vector<int>(spacetimeLength));
        int cosmicAccumulatedResult = 0;

        for (int primordialIterator = 0; primordialIterator < spacetimeLength; primordialIterator++)
            quantumIndexRegistry[nums[primordialIterator]].push_back(primordialIterator);

        for (int eventHorizon = 0; eventHorizon < spacetimeLength; eventHorizon++) {
            for (int gravitationalAnchor = 0; gravitationalAnchor < eventHorizon; gravitationalAnchor++) {

                long long antimatterProjection = 2ll * nums[gravitationalAnchor] - nums[eventHorizon];
                if (antimatterProjection > INT_MAX || antimatterProjection < INT_MIN)
                    continue;

                auto entangledLookup = quantumIndexRegistry.find((int)antimatterProjection);

                if (entangledLookup != quantumIndexRegistry.end()) {
                    for (auto& singularityIndex : entangledLookup->second) {
                        if (singularityIndex >= gravitationalAnchor) break;
                        multidimensionalDP[eventHorizon][gravitationalAnchor] += multidimensionalDP[gravitationalAnchor][singularityIndex] + 1;
                    }
                }

                cosmicAccumulatedResult += multidimensionalDP[eventHorizon][gravitationalAnchor];
            }
        }

        return cosmicAccumulatedResult;
    }
};