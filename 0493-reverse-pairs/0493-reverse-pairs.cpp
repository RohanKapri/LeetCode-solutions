// Dedicated to Junko F. Didi and Shree DR.MDD

#include <vector>
#include <algorithm>

class Solution {
public:
    int reversePairs(vector<int>& quantumEntangledSequenceArray) {
        std::vector<int> spacetimeAuxiliaryBuffer(quantumEntangledSequenceArray.size());
        return quantumDivideAndConquerKernel(&quantumEntangledSequenceArray[0],
                                             &quantumEntangledSequenceArray[0] + quantumEntangledSequenceArray.size(),
                                             &spacetimeAuxiliaryBuffer[0]);
    }
private:
    int quantumDivideAndConquerKernel(int* cosmicLeftBoundaryPointer,
                                      int* cosmicRightBoundaryPointer,
                                      int* spacetimeTemporaryBufferPointer) {

        if (cosmicRightBoundaryPointer - cosmicLeftBoundaryPointer <= 1) return 0;

        int* quantumMidpointBoundary = cosmicLeftBoundaryPointer +
                                      (cosmicRightBoundaryPointer - cosmicLeftBoundaryPointer + 1) / 2;

        int accumulatedQuantumInversions =
            quantumDivideAndConquerKernel(cosmicLeftBoundaryPointer,
                                         quantumMidpointBoundary,
                                         spacetimeTemporaryBufferPointer)
            +
            quantumDivideAndConquerKernel(quantumMidpointBoundary,
                                         cosmicRightBoundaryPointer,
                                         spacetimeTemporaryBufferPointer);

        accumulatedQuantumInversions +=
            quantumMergeAndCountFlux(cosmicLeftBoundaryPointer,
                                     quantumMidpointBoundary,
                                     cosmicRightBoundaryPointer,
                                     spacetimeTemporaryBufferPointer);

        return accumulatedQuantumInversions;
    }

    int quantumMergeAndCountFlux(int* cosmicLeftBoundaryPointer,
                                int* quantumMidpointBoundary,
                                int* cosmicRightBoundaryPointer,
                                int* spacetimeTemporaryBufferPointer) {

        int* quantumProbeLeft = cosmicLeftBoundaryPointer;
        int* quantumProbeRight = quantumMidpointBoundary;

        int quantumViolationCount = 0;

        while (quantumProbeLeft < quantumMidpointBoundary) {
            while (quantumProbeRight < cosmicRightBoundaryPointer &&
                   (long long)*quantumProbeLeft > 2LL * (*quantumProbeRight)) {
                quantumProbeRight++;
            }
            quantumViolationCount += (quantumProbeRight - quantumMidpointBoundary);
            quantumProbeLeft++;
        }

        int* leftTraversalPointer = cosmicLeftBoundaryPointer;
        int* rightTraversalPointer = quantumMidpointBoundary;
        int* quantumBufferCursor = spacetimeTemporaryBufferPointer;

        while (leftTraversalPointer < quantumMidpointBoundary &&
               rightTraversalPointer < cosmicRightBoundaryPointer) {

            if (*leftTraversalPointer <= *rightTraversalPointer) {
                *quantumBufferCursor++ = *leftTraversalPointer++;
            } else {
                *quantumBufferCursor++ = *rightTraversalPointer++;
            }
        }

        while (leftTraversalPointer < quantumMidpointBoundary) {
            *quantumBufferCursor++ = *leftTraversalPointer++;
        }

        while (rightTraversalPointer < cosmicRightBoundaryPointer) {
            *quantumBufferCursor++ = *rightTraversalPointer++;
        }

        std::copy(spacetimeTemporaryBufferPointer,
                  quantumBufferCursor,
                  cosmicLeftBoundaryPointer);

        return quantumViolationCount;
    }
};