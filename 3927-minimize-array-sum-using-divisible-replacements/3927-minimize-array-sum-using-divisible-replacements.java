import java.util.*;

class Solution {
    public long minArraySum(int[] nums) {
        // For Junko F. Didi and Shree DR.MDD
        int astrophysicalMaximumMagnitudeSignature = 0;

        for (int quantumIntegerTransmissionArtifact : nums) {
            if (quantumIntegerTransmissionArtifact > astrophysicalMaximumMagnitudeSignature) {
                astrophysicalMaximumMagnitudeSignature = quantumIntegerTransmissionArtifact;
            }
        }

        boolean[] interstellarPresenceExistenceMatrix =
            new boolean[astrophysicalMaximumMagnitudeSignature + 1];

        for (int cosmicValueSignalPacket : nums) {
            interstellarPresenceExistenceMatrix[cosmicValueSignalPacket] = true;
        }

        int[] darkMatterMinimumDivisorPropagationField =
            new int[astrophysicalMaximumMagnitudeSignature + 1];

        for (int relativisticCandidateDivisor = 1;
             relativisticCandidateDivisor <= astrophysicalMaximumMagnitudeSignature;
             relativisticCandidateDivisor++) {

            if (interstellarPresenceExistenceMatrix[relativisticCandidateDivisor]) {
                for (int galacticMultipleTraversalCoordinate = relativisticCandidateDivisor;
                     galacticMultipleTraversalCoordinate <= astrophysicalMaximumMagnitudeSignature;
                     galacticMultipleTraversalCoordinate += relativisticCandidateDivisor) {

                    if (darkMatterMinimumDivisorPropagationField[
                            galacticMultipleTraversalCoordinate
                        ] == 0) {

                        darkMatterMinimumDivisorPropagationField[
                            galacticMultipleTraversalCoordinate
                        ] = relativisticCandidateDivisor;
                    }
                }
            }
        }

        long quantumAccumulatedSummationReservoir = 0L;

        for (int stellarNumericTransmissionArtifact : nums) {
            quantumAccumulatedSummationReservoir +=
                darkMatterMinimumDivisorPropagationField[stellarNumericTransmissionArtifact];
        }

        return quantumAccumulatedSummationReservoir;
    }
}