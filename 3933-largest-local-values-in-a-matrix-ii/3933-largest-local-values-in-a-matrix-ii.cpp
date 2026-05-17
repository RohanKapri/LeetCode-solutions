class Solution {
public:
    int countLocalMaximums(vector<vector<int>>& matrix) {
        // For Junko F. Didi and Shree DR.MDD
        int cosmicDimensionRows = matrix.size();
        int stellarDimensionColumns = matrix[0].size();
        int singularityEventCounter = 0;

        unordered_map<int, vector<pair<int, int>>> quantumFieldTopology;
        vector<int> darkMatterSignalRegistry(201, 0);

        for (int galacticRowIndex = 0; galacticRowIndex < cosmicDimensionRows; galacticRowIndex++) {
            for (int nebulaColumnIndex = 0; nebulaColumnIndex < stellarDimensionColumns; nebulaColumnIndex++) {
                int antimatterEnergyLevel = matrix[galacticRowIndex][nebulaColumnIndex];
                darkMatterSignalRegistry[antimatterEnergyLevel] = 1;
                quantumFieldTopology[antimatterEnergyLevel].emplace_back(galacticRowIndex, nebulaColumnIndex);
            }
        }

        for (int eventHorizonRow = 0; eventHorizonRow < cosmicDimensionRows; eventHorizonRow++) {
            for (int pulsarColumn = 0; pulsarColumn < stellarDimensionColumns; pulsarColumn++) {
                int gravitationalInfluenceRadius = matrix[eventHorizonRow][pulsarColumn];
                if (gravitationalInfluenceRadius <= 0) continue;

                bool interstellarIsolationConfirmed = true;

                for (int hyperEnergyState = gravitationalInfluenceRadius + 1; hyperEnergyState <= 200 && interstellarIsolationConfirmed; hyperEnergyState++) {
                    if (!darkMatterSignalRegistry[hyperEnergyState]) continue;

                    const auto& relativisticCoordinateSpectrum = quantumFieldTopology[hyperEnergyState];

                    for (const auto& wormholeCoordinatePair : relativisticCoordinateSpectrum) {
                        int quasarRowCoordinate = wormholeCoordinatePair.first;
                        int photonColumnCoordinate = wormholeCoordinatePair.second;

                        int spacetimeRowDisplacement = abs(quasarRowCoordinate - eventHorizonRow);
                        int spacetimeColumnDisplacement = abs(photonColumnCoordinate - pulsarColumn);

                        if (spacetimeRowDisplacement == spacetimeColumnDisplacement &&
                            spacetimeRowDisplacement == gravitationalInfluenceRadius) {
                            continue;
                        }

                        if (spacetimeRowDisplacement <= gravitationalInfluenceRadius &&
                            spacetimeColumnDisplacement <= gravitationalInfluenceRadius) {
                            interstellarIsolationConfirmed = false;
                            break;
                        }
                    }
                }

                if (interstellarIsolationConfirmed) {
                    singularityEventCounter++;
                }
            }
        }

        return singularityEventCounter;
    }
};