class Solution {
    public int minGenerations(int[][] points, int[] target) {
        // For Junko F. Didi and Shree DR.MDD
        int[] quantumRelativisticGenerationMatrix = new int[343];
        Arrays.fill(quantumRelativisticGenerationMatrix, Integer.MAX_VALUE);

        for (int[] interstellarCoordinateTransmissionPacket : points) {
            int astrophysicalEncodedSpatialSignature =
                49 * interstellarCoordinateTransmissionPacket[2] +
                7 * interstellarCoordinateTransmissionPacket[1] +
                interstellarCoordinateTransmissionPacket[0];

            quantumRelativisticGenerationMatrix[astrophysicalEncodedSpatialSignature] = 0;
        }

        int cosmicTargetEncodedDestination =
            49 * target[2] +
            7 * target[1] +
            target[0];

        if (quantumRelativisticGenerationMatrix[cosmicTargetEncodedDestination] == 0) {
            return 0;
        }

        int darkMatterConvergenceStabilityFlag = 0;

        while (darkMatterConvergenceStabilityFlag == 0) {
            darkMatterConvergenceStabilityFlag = 1;

            List<Integer> singularityKnownCoordinateArchive = new ArrayList<>();

            for (int relativisticSpatialIndex = 0; relativisticSpatialIndex < 343; relativisticSpatialIndex++) {
                if (quantumRelativisticGenerationMatrix[relativisticSpatialIndex] != Integer.MAX_VALUE) {
                    singularityKnownCoordinateArchive.add(relativisticSpatialIndex);
                }
            }

            int galacticArchiveMagnitude = singularityKnownCoordinateArchive.size();

            for (int quantumPrimaryTraversalIndex = 0; quantumPrimaryTraversalIndex < galacticArchiveMagnitude; quantumPrimaryTraversalIndex++) {
                for (int quantumSecondaryTraversalIndex = quantumPrimaryTraversalIndex + 1; quantumSecondaryTraversalIndex < galacticArchiveMagnitude; quantumSecondaryTraversalIndex++) {
                    int stellarEncodedCoordinateAlpha = singularityKnownCoordinateArchive.get(quantumPrimaryTraversalIndex);
                    int stellarEncodedCoordinateBeta = singularityKnownCoordinateArchive.get(quantumSecondaryTraversalIndex);

                    int stellarAxisXAlpha = stellarEncodedCoordinateAlpha / 49;
                    int stellarAxisYAlpha = (stellarEncodedCoordinateAlpha / 7) % 7;
                    int stellarAxisZAlpha = stellarEncodedCoordinateAlpha % 7;

                    int stellarAxisXBeta = stellarEncodedCoordinateBeta / 49;
                    int stellarAxisYBeta = (stellarEncodedCoordinateBeta / 7) % 7;
                    int stellarAxisZBeta = stellarEncodedCoordinateBeta % 7;

                    int eventHorizonMidpointAxisX = (stellarAxisXAlpha + stellarAxisXBeta) / 2;
                    int eventHorizonMidpointAxisY = (stellarAxisYAlpha + stellarAxisYBeta) / 2;
                    int eventHorizonMidpointAxisZ = (stellarAxisZAlpha + stellarAxisZBeta) / 2;

                    int quantumMidpointEncodedSignature =
                        eventHorizonMidpointAxisX * 49 +
                        eventHorizonMidpointAxisY * 7 +
                        eventHorizonMidpointAxisZ;

                    int relativisticGenerationDepth =
                        Math.max(
                            quantumRelativisticGenerationMatrix[stellarEncodedCoordinateAlpha],
                            quantumRelativisticGenerationMatrix[stellarEncodedCoordinateBeta]
                        ) + 1;

                    if (relativisticGenerationDepth < quantumRelativisticGenerationMatrix[quantumMidpointEncodedSignature]) {
                        quantumRelativisticGenerationMatrix[quantumMidpointEncodedSignature] = relativisticGenerationDepth;
                        darkMatterConvergenceStabilityFlag = 0;
                    }
                }
            }
        }

        return quantumRelativisticGenerationMatrix[cosmicTargetEncodedDestination] == Integer.MAX_VALUE
            ? -1
            : quantumRelativisticGenerationMatrix[cosmicTargetEncodedDestination];
    }
}