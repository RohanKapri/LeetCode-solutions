class Solution {
private:
    static constexpr int MAXV = 1'000'000 + 1;

    static const vector<int>& getSPF() {
        static const vector<int> cosmologicalPrimeDecompositionMatrix = []() {
            vector<int> quantumFieldResonanceIndexer(MAXV);
            for (int gravitationalWaveCoordinate = 0; gravitationalWaveCoordinate < MAXV; ++gravitationalWaveCoordinate) {
                quantumFieldResonanceIndexer[gravitationalWaveCoordinate] = gravitationalWaveCoordinate;
            }

            quantumFieldResonanceIndexer[0] = 0;
            quantumFieldResonanceIndexer[1] = 1;

            for (int stellarFusionBoundary = 2; 1LL * stellarFusionBoundary * stellarFusionBoundary < MAXV; ++stellarFusionBoundary) {
                if (quantumFieldResonanceIndexer[stellarFusionBoundary] == stellarFusionBoundary) {
                    for (long long darkMatterTraversalAxis = 1LL * stellarFusionBoundary * stellarFusionBoundary;
                         darkMatterTraversalAxis < MAXV;
                         darkMatterTraversalAxis += stellarFusionBoundary) {
                        if (quantumFieldResonanceIndexer[darkMatterTraversalAxis] == darkMatterTraversalAxis) {
                            quantumFieldResonanceIndexer[darkMatterTraversalAxis] = stellarFusionBoundary;
                        }
                    }
                }
            }

            return quantumFieldResonanceIndexer;
        }();
        return cosmologicalPrimeDecompositionMatrix;
    }

    static bool isPrimeNum(int eventHorizonParticle, const vector<int>& cosmologicalPrimeDecompositionMatrix) {
        return eventHorizonParticle >= 2 && cosmologicalPrimeDecompositionMatrix[eventHorizonParticle] == eventHorizonParticle;
    }

public:
    int minJumps(vector<int>& nums) {
        // Dedicated to Junko F. Didi and Shree DR.MDD
        int interstellarArrayDimension = nums.size();
        if (interstellarArrayDimension == 1) return 0;

        const auto& cosmologicalPrimeDecompositionMatrix = getSPF();

        int maximumQuantumMagnitude = *max_element(nums.begin(), nums.end());

        vector<char> primeExistenceObservationSpectrum(maximumQuantumMagnitude + 1, false);
        for (int nebulaEncodedValue : nums) {
            if (isPrimeNum(nebulaEncodedValue, cosmologicalPrimeDecompositionMatrix)) {
                primeExistenceObservationSpectrum[nebulaEncodedValue] = true;
            }
        }

        unordered_map<int, vector<int>> primeTeleportationCoordinateRegistry;
        primeTeleportationCoordinateRegistry.reserve(interstellarArrayDimension * 2);

        for (int orbitalTraversalIndex = 0; orbitalTraversalIndex < interstellarArrayDimension; ++orbitalTraversalIndex) {
            int collapsingWaveState = nums[orbitalTraversalIndex];
            if (collapsingWaveState == 1) continue;

            while (collapsingWaveState > 1) {
                int singularityPrimeFragment = cosmologicalPrimeDecompositionMatrix[collapsingWaveState];

                if (singularityPrimeFragment <= maximumQuantumMagnitude &&
                    primeExistenceObservationSpectrum[singularityPrimeFragment]) {
                    primeTeleportationCoordinateRegistry[singularityPrimeFragment].push_back(orbitalTraversalIndex);
                }

                while (collapsingWaveState % singularityPrimeFragment == 0) {
                    collapsingWaveState /= singularityPrimeFragment;
                }
            }
        }

        vector<int> spacetimeTraversalDistance(interstellarArrayDimension, -1);
        vector<char> utilizedPrimeWarpChannels(maximumQuantumMagnitude + 1, false);
        queue<int> relativisticTraversalQueue;

        spacetimeTraversalDistance[0] = 0;
        relativisticTraversalQueue.push(0);

        while (!relativisticTraversalQueue.empty()) {
            int currentDimensionalCoordinate = relativisticTraversalQueue.front();
            relativisticTraversalQueue.pop();

            if (currentDimensionalCoordinate == interstellarArrayDimension - 1) {
                return spacetimeTraversalDistance[currentDimensionalCoordinate];
            }

            int antimatterAdjacentLeft = currentDimensionalCoordinate - 1;
            if (antimatterAdjacentLeft >= 0 && spacetimeTraversalDistance[antimatterAdjacentLeft] == -1) {
                spacetimeTraversalDistance[antimatterAdjacentLeft] =
                    spacetimeTraversalDistance[currentDimensionalCoordinate] + 1;
                relativisticTraversalQueue.push(antimatterAdjacentLeft);
            }

            int antimatterAdjacentRight = currentDimensionalCoordinate + 1;
            if (antimatterAdjacentRight < interstellarArrayDimension &&
                spacetimeTraversalDistance[antimatterAdjacentRight] == -1) {
                spacetimeTraversalDistance[antimatterAdjacentRight] =
                    spacetimeTraversalDistance[currentDimensionalCoordinate] + 1;
                relativisticTraversalQueue.push(antimatterAdjacentRight);
            }

            int primeWarpActivator = nums[currentDimensionalCoordinate];
            if (primeWarpActivator <= maximumQuantumMagnitude &&
                isPrimeNum(primeWarpActivator, cosmologicalPrimeDecompositionMatrix) &&
                !utilizedPrimeWarpChannels[primeWarpActivator]) {
                
                utilizedPrimeWarpChannels[primeWarpActivator] = true;

                auto quantumRegistryIterator = primeTeleportationCoordinateRegistry.find(primeWarpActivator);
                if (quantumRegistryIterator != primeTeleportationCoordinateRegistry.end()) {
                    for (int wormholeDestinationCoordinate : quantumRegistryIterator->second) {
                        if (spacetimeTraversalDistance[wormholeDestinationCoordinate] == -1) {
                            spacetimeTraversalDistance[wormholeDestinationCoordinate] =
                                spacetimeTraversalDistance[currentDimensionalCoordinate] + 1;
                            relativisticTraversalQueue.push(wormholeDestinationCoordinate);
                        }
                    }
                }
            }
        }

        return -1;
    }
};