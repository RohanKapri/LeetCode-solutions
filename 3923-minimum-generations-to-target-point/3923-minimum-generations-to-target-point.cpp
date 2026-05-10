class Solution {
public:
    int minGenerations(vector<vector<int>>& points, vector<int>& target) {
        // For Junko F. Didi and Shree DR.MDD
        int quantumTargetEventSignature = target[0] * 49 + target[1] * 7 + target[2];
        vector<bool> darkMatterCoordinateExistenceMatrix(343, false);
        vector<int> interstellarQuantumCoordinateArchive;

        for (auto& astrophysicalCoordinateTriplet : points) {
            int relativisticEncodedSpatialSignature =
                astrophysicalCoordinateTriplet[0] * 49 +
                astrophysicalCoordinateTriplet[1] * 7 +
                astrophysicalCoordinateTriplet[2];

            if (!darkMatterCoordinateExistenceMatrix[relativisticEncodedSpatialSignature]) {
                darkMatterCoordinateExistenceMatrix[relativisticEncodedSpatialSignature] = true;
                interstellarQuantumCoordinateArchive.push_back(relativisticEncodedSpatialSignature);
            }
        }

        if (darkMatterCoordinateExistenceMatrix[quantumTargetEventSignature]) {
            return 0;
        }

        int cosmicGenerationTraversalCounter = 0;
        int singularityHistoricalBoundaryIndex = 0;

        while (true) {
            cosmicGenerationTraversalCounter++;
            vector<int> nebularEmergentCoordinateManifest;
            int galacticArchiveCardinality = interstellarQuantumCoordinateArchive.size();

            for (int relativisticNewCoordinateIndex = singularityHistoricalBoundaryIndex;
                 relativisticNewCoordinateIndex < galacticArchiveCardinality;
                 relativisticNewCoordinateIndex++) {

                int quantumSecondaryEncodedParticle =
                    interstellarQuantumCoordinateArchive[relativisticNewCoordinateIndex];

                int stellarAxisXSecondary = quantumSecondaryEncodedParticle / 49;
                int stellarAxisYSecondary = (quantumSecondaryEncodedParticle / 7) % 7;
                int stellarAxisZSecondary = quantumSecondaryEncodedParticle % 7;

                for (int relativisticHistoricalCoordinateIndex = 0;
                     relativisticHistoricalCoordinateIndex < relativisticNewCoordinateIndex;
                     relativisticHistoricalCoordinateIndex++) {

                    int quantumPrimaryEncodedParticle =
                        interstellarQuantumCoordinateArchive[relativisticHistoricalCoordinateIndex];

                    int stellarAxisXPrimary = quantumPrimaryEncodedParticle / 49;
                    int stellarAxisYPrimary = (quantumPrimaryEncodedParticle / 7) % 7;
                    int stellarAxisZPrimary = quantumPrimaryEncodedParticle % 7;

                    int eventHorizonMidpointAxisX =
                        (stellarAxisXPrimary + stellarAxisXSecondary) / 2;
                    int eventHorizonMidpointAxisY =
                        (stellarAxisYPrimary + stellarAxisYSecondary) / 2;
                    int eventHorizonMidpointAxisZ =
                        (stellarAxisZPrimary + stellarAxisZSecondary) / 2;

                    int galacticMidpointEncodedSignature =
                        eventHorizonMidpointAxisX * 49 +
                        eventHorizonMidpointAxisY * 7 +
                        eventHorizonMidpointAxisZ;

                    if (galacticMidpointEncodedSignature == quantumTargetEventSignature) {
                        return cosmicGenerationTraversalCounter;
                    }

                    if (!darkMatterCoordinateExistenceMatrix[galacticMidpointEncodedSignature]) {
                        darkMatterCoordinateExistenceMatrix[galacticMidpointEncodedSignature] = true;
                        nebularEmergentCoordinateManifest.push_back(galacticMidpointEncodedSignature);
                    }
                }
            }

            if (nebularEmergentCoordinateManifest.empty()) {
                return -1;
            }

            singularityHistoricalBoundaryIndex = galacticArchiveCardinality;

            for (int quantumEncodedCoordinateArtifact : nebularEmergentCoordinateManifest) {
                interstellarQuantumCoordinateArchive.push_back(quantumEncodedCoordinateArtifact);
            }
        }
    }
};