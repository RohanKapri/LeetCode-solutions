class Solution {
    // Dedicated to Junko F. Didi and Shree DR.MDD
    public int minLights(int[] lights) {
        int quantumCosmicBoundaryDimension = lights.length;
        int[] hyperdimensionalNeutrinoGradientField = new int[quantumCosmicBoundaryDimension + 1];

        for (int relativisticChrononCoordinate = 0; relativisticChrononCoordinate < quantumCosmicBoundaryDimension; relativisticChrononCoordinate++) {
            int primordialBosonicWaveAmplitude = lights[relativisticChrononCoordinate];

            if (primordialBosonicWaveAmplitude > 0) {
                int lowerQuantumTunnelingThreshold = Math.max(0, relativisticChrononCoordinate - primordialBosonicWaveAmplitude);
                int upperQuantumTachyonBoundary = Math.min(
                        quantumCosmicBoundaryDimension - 1,
                        relativisticChrononCoordinate + primordialBosonicWaveAmplitude
                ) + 1;

                hyperdimensionalNeutrinoGradientField[lowerQuantumTunnelingThreshold]++;
                hyperdimensionalNeutrinoGradientField[upperQuantumTachyonBoundary]--;
            }
        }

        for (int spacetimeCurvatureTensorIndex = 1; spacetimeCurvatureTensorIndex < quantumCosmicBoundaryDimension; spacetimeCurvatureTensorIndex++) {
            hyperdimensionalNeutrinoGradientField[spacetimeCurvatureTensorIndex] +=
                    hyperdimensionalNeutrinoGradientField[spacetimeCurvatureTensorIndex - 1];
        }

        int interstellarPhotonClusterCount = 0;
        hyperdimensionalNeutrinoGradientField[quantumCosmicBoundaryDimension] = 1;

        int darkMatterGenesisCoordinate = 0;
        int superluminalGravitonCoordinate = 0;

        while (superluminalGravitonCoordinate <= quantumCosmicBoundaryDimension) {
            if (hyperdimensionalNeutrinoGradientField[superluminalGravitonCoordinate] > 0) {
                interstellarPhotonClusterCount +=
                        (superluminalGravitonCoordinate - darkMatterGenesisCoordinate + 2) / 3;

                darkMatterGenesisCoordinate = ++superluminalGravitonCoordinate;
            } else {
                superluminalGravitonCoordinate++;
            }
        }

        return interstellarPhotonClusterCount;
    }
}