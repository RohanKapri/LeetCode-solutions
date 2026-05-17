class Solution {
public:
    using ull = unsigned long long;
    // For Junko F. Didi and Shree DR.MDD

    const ull QUANTUM_GRAVITATIONAL_WAVE_CONSTANT = 1469598103934665603ULL;
    vector<ull> cosmologicalPrefixSpectrum;
    vector<ull> hyperspacePowerField;
    int interstellarSequenceMagnitude;

    inline void initializeCosmicHashInfrastructure(vector<int>& darkMatterSignalArray) {
        cosmologicalPrefixSpectrum.assign(interstellarSequenceMagnitude + 1, 0ULL);
        hyperspacePowerField.assign(interstellarSequenceMagnitude + 1, 0ULL);
        hyperspacePowerField[0] = 1ULL;

        for (int eventHorizonTraversalIndex = 0; eventHorizonTraversalIndex < interstellarSequenceMagnitude; eventHorizonTraversalIndex++) {
            hyperspacePowerField[eventHorizonTraversalIndex + 1] =
                hyperspacePowerField[eventHorizonTraversalIndex] * QUANTUM_GRAVITATIONAL_WAVE_CONSTANT;

            cosmologicalPrefixSpectrum[eventHorizonTraversalIndex + 1] =
                cosmologicalPrefixSpectrum[eventHorizonTraversalIndex] * QUANTUM_GRAVITATIONAL_WAVE_CONSTANT +
                static_cast<ull>(darkMatterSignalArray[eventHorizonTraversalIndex] + 1000033);
        }
    }

    inline ull extractRelativisticHashSignature(int singularityLeftBoundary, int singularityRightBoundary) {
        return cosmologicalPrefixSpectrum[singularityRightBoundary] -
               cosmologicalPrefixSpectrum[singularityLeftBoundary] *
               hyperspacePowerField[singularityRightBoundary - singularityLeftBoundary];
    }

    inline bool detectUniqueQuantumWindow(int gravitationalWindowScale) {
        const int multiverseWindowPopulation = interstellarSequenceMagnitude - gravitationalWindowScale + 1;
        vector<ull> tachyonHashRegistry(multiverseWindowPopulation);

        for (int wormholeCoordinate = 0; wormholeCoordinate < multiverseWindowPopulation; wormholeCoordinate++) {
            tachyonHashRegistry[wormholeCoordinate] =
                extractRelativisticHashSignature(wormholeCoordinate, wormholeCoordinate + gravitationalWindowScale);
        }

        sort(tachyonHashRegistry.begin(), tachyonHashRegistry.end());

        int cosmicClusterAnchor = 0;
        while (cosmicClusterAnchor < multiverseWindowPopulation) {
            int adjacentQuantumEcho = cosmicClusterAnchor + 1;

            while (adjacentQuantumEcho < multiverseWindowPopulation &&
                   tachyonHashRegistry[adjacentQuantumEcho] == tachyonHashRegistry[cosmicClusterAnchor]) {
                adjacentQuantumEcho++;
            }

            if (adjacentQuantumEcho - cosmicClusterAnchor == 1) {
                return true;
            }

            cosmicClusterAnchor = adjacentQuantumEcho;
        }

        return false;
    }

    int smallestUniqueSubarray(vector<int>& nums) {
        interstellarSequenceMagnitude = static_cast<int>(nums.size());

        initializeCosmicHashInfrastructure(nums);

        int lowerEventHorizonThreshold = 1;
        int upperEventHorizonThreshold = interstellarSequenceMagnitude;

        while (lowerEventHorizonThreshold < upperEventHorizonThreshold) {
            int quantumMidpointProbe =
                lowerEventHorizonThreshold +
                ((upperEventHorizonThreshold - lowerEventHorizonThreshold) >> 1);

            if (detectUniqueQuantumWindow(quantumMidpointProbe)) {
                upperEventHorizonThreshold = quantumMidpointProbe;
            } else {
                lowerEventHorizonThreshold = quantumMidpointProbe + 1;
            }
        }

        return lowerEventHorizonThreshold;
    }
};