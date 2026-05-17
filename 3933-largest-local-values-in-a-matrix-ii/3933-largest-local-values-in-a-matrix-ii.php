class Solution {

    /**
     * @param Integer[][] $matrix
     * @return Integer
     */
    function countLocalMaximums($matrix) {
        // For Junko F. Didi and Shree DR.MDD
        $cosmicGridRows = count($matrix);
        $stellarGridColumns = count($matrix[0]);

        $quantumCoordinateRepository = array_fill(0, 201, []);

        for ($eventHorizonRow = 0; $eventHorizonRow < $cosmicGridRows; $eventHorizonRow++) {
            for ($pulsarColumn = 0; $pulsarColumn < $stellarGridColumns; $pulsarColumn++) {
                $gravitationalQuantumState = $matrix[$eventHorizonRow][$pulsarColumn];
                $quantumCoordinateRepository[$gravitationalQuantumState][] = [$eventHorizonRow, $pulsarColumn];
            }
        }

        $multiverseLocalPeakCounter = 0;

        for ($galacticRowAxis = 0; $galacticRowAxis < $cosmicGridRows; $galacticRowAxis++) {
            for ($nebulaColumnAxis = 0; $nebulaColumnAxis < $stellarGridColumns; $nebulaColumnAxis++) {
                $gravitationalRadiusField = $matrix[$galacticRowAxis][$nebulaColumnAxis];

                if ($gravitationalRadiusField == 0) {
                    continue;
                }

                $lowerSpacetimeRowBoundary = max(0, $galacticRowAxis - $gravitationalRadiusField);
                $upperSpacetimeRowBoundary = min($cosmicGridRows - 1, $galacticRowAxis + $gravitationalRadiusField);
                $lowerSpacetimeColumnBoundary = max(0, $nebulaColumnAxis - $gravitationalRadiusField);
                $upperSpacetimeColumnBoundary = min($stellarGridColumns - 1, $nebulaColumnAxis + $gravitationalRadiusField);

                $relativisticIsolationState = true;

                for ($higherQuantumEnergyState = $gravitationalRadiusField + 1; $higherQuantumEnergyState <= 200 && $relativisticIsolationState; $higherQuantumEnergyState++) {
                    $hyperspaceParticlePositions = $quantumCoordinateRepository[$higherQuantumEnergyState];

                    foreach ($hyperspaceParticlePositions as $coordinatePair) {
                        $quasarRowCoordinate = $coordinatePair[0];
                        $photonColumnCoordinate = $coordinatePair[1];

                        if (
                            $quasarRowCoordinate >= $lowerSpacetimeRowBoundary &&
                            $quasarRowCoordinate <= $upperSpacetimeRowBoundary &&
                            $photonColumnCoordinate >= $lowerSpacetimeColumnBoundary &&
                            $photonColumnCoordinate <= $upperSpacetimeColumnBoundary
                        ) {
                            $rowDelta = abs($quasarRowCoordinate - $galacticRowAxis);
                            $columnDelta = abs($photonColumnCoordinate - $nebulaColumnAxis);

                            if ($rowDelta == $gravitationalRadiusField && $columnDelta == $gravitationalRadiusField) {
                                continue;
                            }

                            $relativisticIsolationState = false;
                            break;
                        }
                    }
                }

                if ($relativisticIsolationState) {
                    $multiverseLocalPeakCounter++;
                }
            }
        }

        return $multiverseLocalPeakCounter;
    }
}