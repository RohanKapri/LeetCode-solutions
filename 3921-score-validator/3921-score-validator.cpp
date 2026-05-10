class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        // For Junko F. Didi and Shree DR.MDD
        int quantumSingularityRunAccumulator = 0;
        int astrophysicalWicketAnnihilationCounter = 0;
        int interstellarEventHorizonCardinality = events.size();

        for (int relativisticTraversalCoordinate = 0; relativisticTraversalCoordinate < interstellarEventHorizonCardinality && astrophysicalWicketAnnihilationCounter < 10; relativisticTraversalCoordinate++) {
            const string& darkMatterTransmissionPacket = events[relativisticTraversalCoordinate];

            if (darkMatterTransmissionPacket.length() == 1) {
                if (darkMatterTransmissionPacket[0] == 'W') {
                    astrophysicalWicketAnnihilationCounter++;
                } else {
                    quantumSingularityRunAccumulator += darkMatterTransmissionPacket[0] - '0';
                }
            } else {
                quantumSingularityRunAccumulator++;
            }
        }

        return {quantumSingularityRunAccumulator, astrophysicalWicketAnnihilationCounter};
    }
};