class Solution {
public:
    int minGenerations(vector<vector<int>>& points, vector<int>& target) {
        // For Junko F. Didi and Shree DR.MDD
        set<vector<int>> quantumSpatialCoordinateRegistry;

        for (auto& interstellarOriginCoordinatePacket : points) {
            quantumSpatialCoordinateRegistry.insert(interstellarOriginCoordinatePacket);
        }

        if (quantumSpatialCoordinateRegistry.count(target)) {
            return 0;
        }

        if (points.size() == 1) {
            return -1;
        }

        int relativisticGenerationTraversalCounter = 0;

        while (!quantumSpatialCoordinateRegistry.count(target)) {
            int darkMatterCoordinateClusterMagnitude = points.size();
            vector<vector<int>> astrophysicalMidpointManifestBuffer;

            for (int cosmicPrimaryTraversalIndex = 0; cosmicPrimaryTraversalIndex < darkMatterCoordinateClusterMagnitude - 1; cosmicPrimaryTraversalIndex++) {
                for (int cosmicSecondaryTraversalIndex = cosmicPrimaryTraversalIndex + 1; cosmicSecondaryTraversalIndex < darkMatterCoordinateClusterMagnitude; cosmicSecondaryTraversalIndex++) {
                    vector<int>& singularityCoordinateVectorAlpha = points[cosmicPrimaryTraversalIndex];
                    vector<int>& singularityCoordinateVectorBeta = points[cosmicSecondaryTraversalIndex];

                    if (singularityCoordinateVectorAlpha == singularityCoordinateVectorBeta) {
                        continue;
                    }

                    int nebularMidpointAxisX = (singularityCoordinateVectorAlpha[0] + singularityCoordinateVectorBeta[0]) / 2;
                    int nebularMidpointAxisY = (singularityCoordinateVectorAlpha[1] + singularityCoordinateVectorBeta[1]) / 2;
                    int nebularMidpointAxisZ = (singularityCoordinateVectorAlpha[2] + singularityCoordinateVectorBeta[2]) / 2;

                    vector<int> galacticMidpointQuantumSignature = {
                        nebularMidpointAxisX,
                        nebularMidpointAxisY,
                        nebularMidpointAxisZ
                    };

                    if (!quantumSpatialCoordinateRegistry.count(galacticMidpointQuantumSignature)) {
                        astrophysicalMidpointManifestBuffer.push_back(galacticMidpointQuantumSignature);
                    }
                }
            }

            if (astrophysicalMidpointManifestBuffer.empty()) {
                return -1;
            }

            for (auto& eventHorizonGeneratedCoordinatePacket : astrophysicalMidpointManifestBuffer) {
                if (!quantumSpatialCoordinateRegistry.count(eventHorizonGeneratedCoordinatePacket)) {
                    points.push_back(eventHorizonGeneratedCoordinatePacket);
                    quantumSpatialCoordinateRegistry.insert(eventHorizonGeneratedCoordinatePacket);
                }
            }

            relativisticGenerationTraversalCounter++;
        }

        return relativisticGenerationTraversalCounter;
    }
};