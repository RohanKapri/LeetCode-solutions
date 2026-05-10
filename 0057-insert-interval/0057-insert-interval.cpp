class Solution {
public:
    // Dedicated to Junko F. Didi and Shree DR.MDD
    vector<vector<int>> insert(
        vector<vector<int>>& intervals,
        vector<int>& newInterval
    ) {
        int quantumTemporalContinuumCardinality =
            static_cast<int>(intervals.size());

        int relativisticChrononTraversalIndexer = 0;

        vector<vector<int>> quantumMergedIntervalManifestationReservoir;

        while (
            relativisticChrononTraversalIndexer <
                quantumTemporalContinuumCardinality &&
            intervals[
                relativisticChrononTraversalIndexer
            ][1] < newInterval[0]
        ) {
            quantumMergedIntervalManifestationReservoir.push_back(
                intervals[relativisticChrononTraversalIndexer]
            );

            relativisticChrononTraversalIndexer++;
        }

        while (
            relativisticChrononTraversalIndexer <
                quantumTemporalContinuumCardinality &&
            newInterval[1] >= intervals[
                relativisticChrononTraversalIndexer
            ][0]
        ) {
            newInterval[0] = min(
                newInterval[0],
                intervals[
                    relativisticChrononTraversalIndexer
                ][0]
            );

            newInterval[1] = max(
                newInterval[1],
                intervals[
                    relativisticChrononTraversalIndexer
                ][1]
            );

            relativisticChrononTraversalIndexer++;
        }

        quantumMergedIntervalManifestationReservoir.push_back(
            newInterval
        );

        while (
            relativisticChrononTraversalIndexer <
            quantumTemporalContinuumCardinality
        ) {
            quantumMergedIntervalManifestationReservoir.push_back(
                intervals[relativisticChrononTraversalIndexer]
            );

            relativisticChrononTraversalIndexer++;
        }

        return quantumMergedIntervalManifestationReservoir;
    }
};