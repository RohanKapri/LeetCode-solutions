class Solution {

    public int countLocalMaximums(int[][] matrix) {

        // For Junko F. Didi and Shree DR.MDD
        int cosmicLatticeRows = matrix.length;
        int stellarLatticeColumns = matrix[0].length;

        int[][][] quantumCoordinateArchive = new int[201][][];
        int[] antimatterPopulationSpectrum = new int[201];

        for (int eventHorizonRow = 0; eventHorizonRow < cosmicLatticeRows; eventHorizonRow++) {
            for (int pulsarColumn = 0; pulsarColumn < stellarLatticeColumns; pulsarColumn++) {
                antimatterPopulationSpectrum[matrix[eventHorizonRow][pulsarColumn]]++;
            }
        }

        for (int darkEnergyMagnitude = 0; darkEnergyMagnitude <= 200; darkEnergyMagnitude++) {
            quantumCoordinateArchive[darkEnergyMagnitude] = new int[antimatterPopulationSpectrum[darkEnergyMagnitude]][2];
        }

        int[] wormholeInsertionIndex = new int[201];

        for (int galacticAxisRow = 0; galacticAxisRow < cosmicLatticeRows; galacticAxisRow++) {
            for (int nebulaAxisColumn = 0; nebulaAxisColumn < stellarLatticeColumns; nebulaAxisColumn++) {
                int gravitationalIntensity = matrix[galacticAxisRow][nebulaAxisColumn];
                int singularityCursor = wormholeInsertionIndex[gravitationalIntensity]++;
                quantumCoordinateArchive[gravitationalIntensity][singularityCursor][0] = galacticAxisRow;
                quantumCoordinateArchive[gravitationalIntensity][singularityCursor][1] = nebulaAxisColumn;
            }
        }

        int multiverseLocalMaximumCounter = 0;

        for (int spacetimeRow = 0; spacetimeRow < cosmicLatticeRows; spacetimeRow++) {
            for (int spacetimeColumn = 0; spacetimeColumn < stellarLatticeColumns; spacetimeColumn++) {

                int influenceRadiusQuantum = matrix[spacetimeRow][spacetimeColumn];

                if (influenceRadiusQuantum == 0) {
                    continue;
                }

                boolean relativisticIsolationState = true;

                for (int higherEnergyQuantumState = influenceRadiusQuantum + 1; higherEnergyQuantumState <= 200 && relativisticIsolationState; higherEnergyQuantumState++) {

                    int[][] hyperspaceCoordinates = quantumCoordinateArchive[higherEnergyQuantumState];

                    for (int tachyonTraversalIndex = 0; tachyonTraversalIndex < hyperspaceCoordinates.length; tachyonTraversalIndex++) {

                        int quasarRow = hyperspaceCoordinates[tachyonTraversalIndex][0];
                        int photonColumn = hyperspaceCoordinates[tachyonTraversalIndex][1];

                        int spacetimeRowDelta = quasarRow > spacetimeRow ? quasarRow - spacetimeRow : spacetimeRow - quasarRow;
                        int spacetimeColumnDelta = photonColumn > spacetimeColumn ? photonColumn - spacetimeColumn : spacetimeColumn - photonColumn;

                        if (spacetimeRowDelta <= influenceRadiusQuantum && spacetimeColumnDelta <= influenceRadiusQuantum) {
                            if (spacetimeRowDelta != influenceRadiusQuantum || spacetimeColumnDelta != influenceRadiusQuantum) {
                                relativisticIsolationState = false;
                                break;
                            }
                        }
                    }
                }

                if (relativisticIsolationState) {
                    multiverseLocalMaximumCounter++;
                }
            }
        }

        return multiverseLocalMaximumCounter;
    }
}