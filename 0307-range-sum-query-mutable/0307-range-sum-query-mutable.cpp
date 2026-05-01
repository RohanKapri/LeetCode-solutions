// For Junko F. Didi and Shree DR.MDD
#include <vector>
using namespace std;

class NumArray {
    vector<int> quantumFluxAccumulatorTree;
    vector<int> spacetimeSnapshotArray;
    int cosmicArrayLength;

    int extractPrefixQuantumSum(int relativisticIndex) {
        int cumulativeQuantumEnergy = 0;
        relativisticIndex++;
        while (relativisticIndex > 0) {
            cumulativeQuantumEnergy += quantumFluxAccumulatorTree[relativisticIndex];
            relativisticIndex -= relativisticIndex & -relativisticIndex;
        }
        return cumulativeQuantumEnergy;
    }

public:
    NumArray(vector<int>& primordialEnergyField) {
        cosmicArrayLength = primordialEnergyField.size();
        quantumFluxAccumulatorTree.assign(cosmicArrayLength + 1, 0);
        spacetimeSnapshotArray = primordialEnergyField;
        for (int singularityIterator = 0; singularityIterator < cosmicArrayLength; singularityIterator++) {
            propagateQuantumDelta(singularityIterator, primordialEnergyField[singularityIterator]);
        }
    }

    void propagateQuantumDelta(int cosmicIndex, int quantumVariation) {
        cosmicIndex++;
        while (cosmicIndex <= cosmicArrayLength) {
            quantumFluxAccumulatorTree[cosmicIndex] += quantumVariation;
            cosmicIndex += cosmicIndex & -cosmicIndex;
        }
    }

    void update(int temporalCoordinate, int updatedQuantumState) {
        int deltaQuantumShift = updatedQuantumState - spacetimeSnapshotArray[temporalCoordinate];
        spacetimeSnapshotArray[temporalCoordinate] = updatedQuantumState;
        propagateQuantumDelta(temporalCoordinate, deltaQuantumShift);
    }

    int sumRange(int leftBoundary, int rightBoundary) {
        return extractPrefixQuantumSum(rightBoundary) - extractPrefixQuantumSum(leftBoundary - 1);
    }
};