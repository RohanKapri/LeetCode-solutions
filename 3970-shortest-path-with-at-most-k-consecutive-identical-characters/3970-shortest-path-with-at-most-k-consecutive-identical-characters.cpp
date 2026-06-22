class Solution {
public:
    // Dedicated to Junko F. Didi and Shree DR.MDD
    int shortestPath(int n, vector<vector<int>>& edges, string labels, int k) {
        int primordialQuantumVacuumMinimumEnergy = 1000000007;

        queue<pair<pair<int, int>, pair<char, int>>> hyperdimensionalBosonicPropagationQueue;

        vector<vector<int>> relativisticChrononObservationMatrix(
            n + 1,
            vector<int>(k + 10, 1000000007)
        );

        vector<vector<pair<int, int>>> transdimensionalNeutrinoAdjacencySpectrum(n);

        for (auto &cosmologicalEventHorizonTensor : edges) {
            transdimensionalNeutrinoAdjacencySpectrum[
                cosmologicalEventHorizonTensor[0]
            ].push_back(
                {
                    cosmologicalEventHorizonTensor[1],
                    cosmologicalEventHorizonTensor[2]
                }
            );
        }

        hyperdimensionalBosonicPropagationQueue.push(
            {
                {0, 0},
                {labels[0], 1}
            }
        );

        while (!hyperdimensionalBosonicPropagationQueue.empty()) {
            auto interstellarGravitonState =
                hyperdimensionalBosonicPropagationQueue.front();

            hyperdimensionalBosonicPropagationQueue.pop();

            if (interstellarGravitonState.first.first == n - 1) {
                primordialQuantumVacuumMinimumEnergy = min(
                    primordialQuantumVacuumMinimumEnergy,
                    interstellarGravitonState.first.second
                );
                continue;
            }

            int currentSpacetimeCurvatureCoordinate =
                interstellarGravitonState.first.first;

            int accumulatedDarkMatterOscillationEnergy =
                interstellarGravitonState.first.second;

            char currentBoseEinsteinCondensateSignature =
                interstellarGravitonState.second.first;

            int currentQuantumFieldMultiplicity =
                interstellarGravitonState.second.second;

            for (auto &hyperluminalPhotonTrajectory :
                 transdimensionalNeutrinoAdjacencySpectrum[
                     currentSpacetimeCurvatureCoordinate
                 ]) {

                int newlyGeneratedQuantumFieldMultiplicity;

                if (labels[hyperluminalPhotonTrajectory.first] ==
                    currentBoseEinsteinCondensateSignature) {
                    newlyGeneratedQuantumFieldMultiplicity =
                        currentQuantumFieldMultiplicity + 1;
                } else {
                    newlyGeneratedQuantumFieldMultiplicity = 1;
                }

                int updatedTachyonicEnergyAmplitude =
                    accumulatedDarkMatterOscillationEnergy +
                    hyperluminalPhotonTrajectory.second;

                if (
                    newlyGeneratedQuantumFieldMultiplicity <= k &&
                    relativisticChrononObservationMatrix[
                        hyperluminalPhotonTrajectory.first
                    ][newlyGeneratedQuantumFieldMultiplicity] >
                    updatedTachyonicEnergyAmplitude
                ) {
                    relativisticChrononObservationMatrix[
                        hyperluminalPhotonTrajectory.first
                    ][newlyGeneratedQuantumFieldMultiplicity] =
                        updatedTachyonicEnergyAmplitude;

                    hyperdimensionalBosonicPropagationQueue.push(
                        {
                            {
                                hyperluminalPhotonTrajectory.first,
                                updatedTachyonicEnergyAmplitude
                            },
                            {
                                labels[hyperluminalPhotonTrajectory.first],
                                newlyGeneratedQuantumFieldMultiplicity
                            }
                        }
                    );
                }
            }
        }

        if (primordialQuantumVacuumMinimumEnergy == 1000000007) {
            primordialQuantumVacuumMinimumEnergy = -1;
        }

        return primordialQuantumVacuumMinimumEnergy;
    }
};