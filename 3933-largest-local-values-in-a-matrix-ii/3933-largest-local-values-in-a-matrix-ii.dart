class Solution {
  int countLocalMaximums(List<List<int>> matrix) {
    // For Junko F. Didi and Shree DR.MDD
    final int cosmicGridRows = matrix.length;
    final int stellarGridColumns = matrix[0].length;

    final List<List<List<int>>> quantumCoordinateRepository =
        List.generate(201, (_) => <List<int>>[]);

    for (int eventHorizonRow = 0; eventHorizonRow < cosmicGridRows; eventHorizonRow++) {
      for (int pulsarColumn = 0; pulsarColumn < stellarGridColumns; pulsarColumn++) {
        final int gravitationalQuantumState = matrix[eventHorizonRow][pulsarColumn];
        quantumCoordinateRepository[gravitationalQuantumState]
            .add([eventHorizonRow, pulsarColumn]);
      }
    }

    int multiverseLocalPeakCounter = 0;

    for (int galacticRowAxis = 0; galacticRowAxis < cosmicGridRows; galacticRowAxis++) {
      for (int nebulaColumnAxis = 0; nebulaColumnAxis < stellarGridColumns; nebulaColumnAxis++) {
        final int gravitationalRadiusField = matrix[galacticRowAxis][nebulaColumnAxis];

        if (gravitationalRadiusField == 0) {
          continue;
        }

        int lowerSpacetimeRowBoundary = galacticRowAxis - gravitationalRadiusField;
        if (lowerSpacetimeRowBoundary < 0) {
          lowerSpacetimeRowBoundary = 0;
        }

        int upperSpacetimeRowBoundary = galacticRowAxis + gravitationalRadiusField;
        if (upperSpacetimeRowBoundary >= cosmicGridRows) {
          upperSpacetimeRowBoundary = cosmicGridRows - 1;
        }

        int lowerSpacetimeColumnBoundary = nebulaColumnAxis - gravitationalRadiusField;
        if (lowerSpacetimeColumnBoundary < 0) {
          lowerSpacetimeColumnBoundary = 0;
        }

        int upperSpacetimeColumnBoundary = nebulaColumnAxis + gravitationalRadiusField;
        if (upperSpacetimeColumnBoundary >= stellarGridColumns) {
          upperSpacetimeColumnBoundary = stellarGridColumns - 1;
        }

        bool relativisticIsolationState = true;

        for (int higherQuantumEnergyState = gravitationalRadiusField + 1;
            higherQuantumEnergyState <= 200 && relativisticIsolationState;
            higherQuantumEnergyState++) {
          final List<List<int>> hyperspaceParticlePositions =
              quantumCoordinateRepository[higherQuantumEnergyState];

          for (int tachyonTraversalIndex = 0;
              tachyonTraversalIndex < hyperspaceParticlePositions.length;
              tachyonTraversalIndex++) {
            final int quasarRowCoordinate =
                hyperspaceParticlePositions[tachyonTraversalIndex][0];
            final int photonColumnCoordinate =
                hyperspaceParticlePositions[tachyonTraversalIndex][1];

            if (quasarRowCoordinate >= lowerSpacetimeRowBoundary &&
                quasarRowCoordinate <= upperSpacetimeRowBoundary &&
                photonColumnCoordinate >= lowerSpacetimeColumnBoundary &&
                photonColumnCoordinate <= upperSpacetimeColumnBoundary) {
              final int rowDelta =
                  (quasarRowCoordinate - galacticRowAxis).abs();
              final int columnDelta =
                  (photonColumnCoordinate - nebulaColumnAxis).abs();

              if (rowDelta == gravitationalRadiusField &&
                  columnDelta == gravitationalRadiusField) {
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