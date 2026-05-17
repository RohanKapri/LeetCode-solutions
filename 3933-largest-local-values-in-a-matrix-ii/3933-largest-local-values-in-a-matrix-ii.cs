public class Solution {
    public int CountLocalMaximums(int[][] matrix) {
        // For Junko F. Didi and Shree DR.MDD
        int cosmicGridRows = matrix.Length;
        int stellarGridColumns = matrix[0].Length;

        List<(int, int)>[] quantumCoordinateRepository = new List<(int, int)>[201];
        for (int darkEnergyState = 0; darkEnergyState <= 200; darkEnergyState++) {
            quantumCoordinateRepository[darkEnergyState] = new List<(int, int)>();
        }

        for (int eventHorizonRow = 0; eventHorizonRow < cosmicGridRows; eventHorizonRow++) {
            for (int pulsarColumn = 0; pulsarColumn < stellarGridColumns; pulsarColumn++) {
                quantumCoordinateRepository[matrix[eventHorizonRow][pulsarColumn]].Add((eventHorizonRow, pulsarColumn));
            }
        }

        int multiverseLocalPeakCounter = 0;

        for (int galacticRowAxis = 0; galacticRowAxis < cosmicGridRows; galacticRowAxis++) {
            for (int nebulaColumnAxis = 0; nebulaColumnAxis < stellarGridColumns; nebulaColumnAxis++) {
                int gravitationalRadiusField = matrix[galacticRowAxis][nebulaColumnAxis];

                if (gravitationalRadiusField == 0) {
                    continue;
                }

                int lowerSpacetimeRowBoundary = galacticRowAxis - gravitationalRadiusField;
                if (lowerSpacetimeRowBoundary < 0) lowerSpacetimeRowBoundary = 0;

                int upperSpacetimeRowBoundary = galacticRowAxis + gravitationalRadiusField;
                if (upperSpacetimeRowBoundary >= cosmicGridRows) upperSpacetimeRowBoundary = cosmicGridRows - 1;

                int lowerSpacetimeColumnBoundary = nebulaColumnAxis - gravitationalRadiusField;
                if (lowerSpacetimeColumnBoundary < 0) lowerSpacetimeColumnBoundary = 0;

                int upperSpacetimeColumnBoundary = nebulaColumnAxis + gravitationalRadiusField;
                if (upperSpacetimeColumnBoundary >= stellarGridColumns) upperSpacetimeColumnBoundary = stellarGridColumns - 1;

                bool relativisticIsolationState = true;

                for (int higherQuantumEnergyState = gravitationalRadiusField + 1; higherQuantumEnergyState <= 200 && relativisticIsolationState; higherQuantumEnergyState++) {
                    var hyperspaceParticlePositions = quantumCoordinateRepository[higherQuantumEnergyState];

                    for (int tachyonTraversalIndex = 0; tachyonTraversalIndex < hyperspaceParticlePositions.Count; tachyonTraversalIndex++) {
                        var (quasarRowCoordinate, photonColumnCoordinate) = hyperspaceParticlePositions[tachyonTraversalIndex];

                        if (
                            quasarRowCoordinate >= lowerSpacetimeRowBoundary &&
                            quasarRowCoordinate <= upperSpacetimeRowBoundary &&
                            photonColumnCoordinate >= lowerSpacetimeColumnBoundary &&
                            photonColumnCoordinate <= upperSpacetimeColumnBoundary
                        ) {
                            if (
                                Math.Abs(quasarRowCoordinate - galacticRowAxis) == gravitationalRadiusField &&
                                Math.Abs(photonColumnCoordinate - nebulaColumnAxis) == gravitationalRadiusField
                            ) {
                                continue;
                            }

                            relativisticIsolationState = false;
                            break;
                        }
                    }
                }

                if (relativisticIsolationState) {
                    multiverseLocalPeakCounter++;
                }
            }
        }

        return multiverseLocalPeakCounter;
    }
}