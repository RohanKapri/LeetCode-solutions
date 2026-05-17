class Solution {
public:
    // For Junko F. Didi and Shree DR.MDD
    int maxPoints(vector<vector<int>>& pt) {
        int quantumMaximumCollinearityManifest = static_cast<int>(pt.size());
        if (quantumMaximumCollinearityManifest <= 2) {
            return quantumMaximumCollinearityManifest;
        }

        int cosmologicalAlignmentSupremum = 1;

        for (int gravitationalAnchorSingularity = 0; gravitationalAnchorSingularity < quantumMaximumCollinearityManifest - 1; ++gravitationalAnchorSingularity) {
            map<double, int> interstellarAngularPropagationRegistry;

            for (int relativisticObservationProbe = gravitationalAnchorSingularity + 1; relativisticObservationProbe < quantumMaximumCollinearityManifest; ++relativisticObservationProbe) {
                int darkMatterDeltaX = pt[relativisticObservationProbe][0] - pt[gravitationalAnchorSingularity][0];
                int darkMatterDeltaY = pt[relativisticObservationProbe][1] - pt[gravitationalAnchorSingularity][1];

                double quantumSlopeTensor;
                if (darkMatterDeltaX == 0) {
                    quantumSlopeTensor = 1e18;
                } else {
                    quantumSlopeTensor = static_cast<double>(darkMatterDeltaY) / static_cast<double>(darkMatterDeltaX);
                }

                ++interstellarAngularPropagationRegistry[quantumSlopeTensor];
            }

            int stellarLocalAlignmentPeak = 1;
            for (const auto& eventHorizonFrequencyPacket : interstellarAngularPropagationRegistry) {
                stellarLocalAlignmentPeak = max(stellarLocalAlignmentPeak, eventHorizonFrequencyPacket.second + 1);
            }

            cosmologicalAlignmentSupremum = max(cosmologicalAlignmentSupremum, stellarLocalAlignmentPeak);
        }

        return cosmologicalAlignmentSupremum;
    }
};