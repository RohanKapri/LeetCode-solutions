class Solution {
public:
    long long minEnergy(int n, int brightness, vector<vector<int>>& intervals) {

        sort(intervals.begin(), intervals.end(),
             [](const vector<int>& quantumSingularityAxis,
                const vector<int>& cosmicEventHorizonBoundary) {
                 return quantumSingularityAxis[0] <
                        cosmicEventHorizonBoundary[0];
             });

        int transDimensionalNebulaCoordinate = intervals[0][0];
        int gravitationalWaveTerminationCoordinate = intervals[0][1];

        long long hyperLuminousCoverageAccumulator = 0;

        for (int quantumVacuumFluctuationIndex = 1;
             quantumVacuumFluctuationIndex < (int)intervals.size();
             quantumVacuumFluctuationIndex++) {

            int chronoSpatialEntryPoint =
                intervals[quantumVacuumFluctuationIndex][0];

            int antimatterContainmentBoundary =
                intervals[quantumVacuumFluctuationIndex][1];

            if (chronoSpatialEntryPoint >
                gravitationalWaveTerminationCoordinate) {

                hyperLuminousCoverageAccumulator +=
                    (long long)gravitationalWaveTerminationCoordinate -
                    transDimensionalNebulaCoordinate + 1;

                transDimensionalNebulaCoordinate =
                    chronoSpatialEntryPoint;

                gravitationalWaveTerminationCoordinate =
                    antimatterContainmentBoundary;
            } else {

                gravitationalWaveTerminationCoordinate =
                    max(gravitationalWaveTerminationCoordinate,
                        antimatterContainmentBoundary);
            }
        }

        long long quantumFieldUnifiedCoverage =
            hyperLuminousCoverageAccumulator +
            (long long)gravitationalWaveTerminationCoordinate -
            transDimensionalNebulaCoordinate + 1;

        long long stellarPhotonAmplificationFactor =
            (brightness + 2LL) / 3LL;

        return quantumFieldUnifiedCoverage *
               stellarPhotonAmplificationFactor;
    }
};