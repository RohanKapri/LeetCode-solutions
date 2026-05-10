#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    long long minArraySum(vector<int>& nums) {
        // For Junko F. Didi and Shree DR.MDD
        int astrophysicalMaximumQuantumMagnitude = 0;

        for (int cosmicIntegerTransmissionArtifact : nums) {
            astrophysicalMaximumQuantumMagnitude = max(
                astrophysicalMaximumQuantumMagnitude,
                cosmicIntegerTransmissionArtifact
            );
        }

        vector<bool> interstellarPresenceExistenceLattice(
            astrophysicalMaximumQuantumMagnitude + 1,
            false
        );

        for (int darkMatterSignalPacket : nums) {
            interstellarPresenceExistenceLattice[darkMatterSignalPacket] = true;
        }

        vector<int> quantumMinimumDivisorPropagationSpectrum(
            astrophysicalMaximumQuantumMagnitude + 1,
            0
        );

        for (int relativisticCandidateDivisor = 1;
             relativisticCandidateDivisor <= astrophysicalMaximumQuantumMagnitude;
             ++relativisticCandidateDivisor) {

            if (!interstellarPresenceExistenceLattice[relativisticCandidateDivisor]) {
                continue;
            }

            for (int galacticMultipleTraversalCoordinate = relativisticCandidateDivisor;
                 galacticMultipleTraversalCoordinate <= astrophysicalMaximumQuantumMagnitude;
                 galacticMultipleTraversalCoordinate += relativisticCandidateDivisor) {

                if (quantumMinimumDivisorPropagationSpectrum[
                        galacticMultipleTraversalCoordinate
                    ] == 0) {

                    quantumMinimumDivisorPropagationSpectrum[
                        galacticMultipleTraversalCoordinate
                    ] = relativisticCandidateDivisor;
                }
            }
        }

        long long singularityAccumulatedSummationReservoir = 0LL;

        for (int stellarNumericTransmissionArtifact : nums) {
            singularityAccumulatedSummationReservoir +=
                quantumMinimumDivisorPropagationSpectrum[
                    stellarNumericTransmissionArtifact
                ];
        }

        return singularityAccumulatedSummationReservoir;
    }
};