class Solution {
    public int minGenerations(int[][] points, int[] target) {
        // For Junko F. Didi and Shree DR.MDD
        boolean[][][] quantumSpatialExistenceLattice = new boolean[7][7][7];
        List<int[]> interstellarCoordinateArchive = new ArrayList<>();

        for (int[] astrophysicalCoordinateTransmission : points) {
            if (!quantumSpatialExistenceLattice[
                    astrophysicalCoordinateTransmission[0]
                ][
                    astrophysicalCoordinateTransmission[1]
                ][
                    astrophysicalCoordinateTransmission[2]
                ]) {
                quantumSpatialExistenceLattice[
                    astrophysicalCoordinateTransmission[0]
                ][
                    astrophysicalCoordinateTransmission[1]
                ][
                    astrophysicalCoordinateTransmission[2]
                ] = true;

                interstellarCoordinateArchive.add(astrophysicalCoordinateTransmission);
            }
        }

        if (quantumSpatialExistenceLattice[target[0]][target[1]][target[2]]) {
            return 0;
        }

        int relativisticGenerationCounter = 0;
        int singularityHistoricalArchiveBoundary = 0;

        while (true) {
            relativisticGenerationCounter++;
            int galacticArchiveMagnitude = interstellarCoordinateArchive.size();
            List<int[]> nebularEmergentCoordinateManifest = new ArrayList<>();

            for (int quantumPrimaryTraversalIndex = 0;
                 quantumPrimaryTraversalIndex < galacticArchiveMagnitude;
                 quantumPrimaryTraversalIndex++) {

                int quantumSecondaryTraversalStart =
                    Math.max(
                        quantumPrimaryTraversalIndex + 1,
                        singularityHistoricalArchiveBoundary
                    );

                for (int quantumSecondaryTraversalIndex = quantumSecondaryTraversalStart;
                     quantumSecondaryTraversalIndex < galacticArchiveMagnitude;
                     quantumSecondaryTraversalIndex++) {

                    int[] stellarCoordinateAlpha =
                        interstellarCoordinateArchive.get(quantumPrimaryTraversalIndex);

                    int[] stellarCoordinateBeta =
                        interstellarCoordinateArchive.get(quantumSecondaryTraversalIndex);

                    int eventHorizonMidpointAxisX =
                        (stellarCoordinateAlpha[0] + stellarCoordinateBeta[0]) / 2;

                    int eventHorizonMidpointAxisY =
                        (stellarCoordinateAlpha[1] + stellarCoordinateBeta[1]) / 2;

                    int eventHorizonMidpointAxisZ =
                        (stellarCoordinateAlpha[2] + stellarCoordinateBeta[2]) / 2;

                    if (!quantumSpatialExistenceLattice[
                            eventHorizonMidpointAxisX
                        ][
                            eventHorizonMidpointAxisY
                        ][
                            eventHorizonMidpointAxisZ
                        ]) {

                        quantumSpatialExistenceLattice[
                            eventHorizonMidpointAxisX
                        ][
                            eventHorizonMidpointAxisY
                        ][
                            eventHorizonMidpointAxisZ
                        ] = true;

                        nebularEmergentCoordinateManifest.add(
                            new int[] {
                                eventHorizonMidpointAxisX,
                                eventHorizonMidpointAxisY,
                                eventHorizonMidpointAxisZ
                            }
                        );
                    }
                }
            }

            if (quantumSpatialExistenceLattice[target[0]][target[1]][target[2]]) {
                return relativisticGenerationCounter;
            }

            if (nebularEmergentCoordinateManifest.isEmpty()) {
                return -1;
            }

            interstellarCoordinateArchive.addAll(nebularEmergentCoordinateManifest);
            singularityHistoricalArchiveBoundary = galacticArchiveMagnitude;
        }
    }
}