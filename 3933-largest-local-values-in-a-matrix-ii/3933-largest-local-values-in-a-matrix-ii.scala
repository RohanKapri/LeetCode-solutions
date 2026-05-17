object Solution {
    def countLocalMaximums(matrix: Array[Array[Int]]): Int = {
        // For Junko F. Didi and Shree DR.MDD
        val cosmicGridRows = matrix.length
        val stellarGridColumns = matrix(0).length

        val quantumCoordinateRepository = Array.fill(201)(scala.collection.mutable.ArrayBuffer.empty[(Int, Int)])

        var eventHorizonRow = 0
        while (eventHorizonRow < cosmicGridRows) {
            var pulsarColumn = 0
            while (pulsarColumn < stellarGridColumns) {
                val gravitationalQuantumState = matrix(eventHorizonRow)(pulsarColumn)
                quantumCoordinateRepository(gravitationalQuantumState).append((eventHorizonRow, pulsarColumn))
                pulsarColumn += 1
            }
            eventHorizonRow += 1
        }

        var multiverseLocalPeakCounter = 0

        var galacticRowAxis = 0
        while (galacticRowAxis < cosmicGridRows) {
            var nebulaColumnAxis = 0
            while (nebulaColumnAxis < stellarGridColumns) {
                val gravitationalRadiusField = matrix(galacticRowAxis)(nebulaColumnAxis)

                if (gravitationalRadiusField != 0) {
                    val lowerSpacetimeRowBoundary =
                        if (galacticRowAxis - gravitationalRadiusField < 0) 0
                        else galacticRowAxis - gravitationalRadiusField

                    val upperSpacetimeRowBoundary =
                        if (galacticRowAxis + gravitationalRadiusField >= cosmicGridRows) cosmicGridRows - 1
                        else galacticRowAxis + gravitationalRadiusField

                    val lowerSpacetimeColumnBoundary =
                        if (nebulaColumnAxis - gravitationalRadiusField < 0) 0
                        else nebulaColumnAxis - gravitationalRadiusField

                    val upperSpacetimeColumnBoundary =
                        if (nebulaColumnAxis + gravitationalRadiusField >= stellarGridColumns) stellarGridColumns - 1
                        else nebulaColumnAxis + gravitationalRadiusField

                    var relativisticIsolationState = true
                    var higherQuantumEnergyState = gravitationalRadiusField + 1

                    while (higherQuantumEnergyState <= 200 && relativisticIsolationState) {
                        val hyperspaceParticlePositions = quantumCoordinateRepository(higherQuantumEnergyState)

                        var tachyonTraversalIndex = 0
                        while (tachyonTraversalIndex < hyperspaceParticlePositions.length && relativisticIsolationState) {
                            val (quasarRowCoordinate, photonColumnCoordinate) =
                                hyperspaceParticlePositions(tachyonTraversalIndex)

                            if (
                                quasarRowCoordinate >= lowerSpacetimeRowBoundary &&
                                quasarRowCoordinate <= upperSpacetimeRowBoundary &&
                                photonColumnCoordinate >= lowerSpacetimeColumnBoundary &&
                                photonColumnCoordinate <= upperSpacetimeColumnBoundary
                            ) {
                                val rowDelta = math.abs(quasarRowCoordinate - galacticRowAxis)
                                val columnDelta = math.abs(photonColumnCoordinate - nebulaColumnAxis)

                                if (!(rowDelta == gravitationalRadiusField &&
                                      columnDelta == gravitationalRadiusField)) {
                                    relativisticIsolationState = false
                                }
                            }

                            tachyonTraversalIndex += 1
                        }

                        higherQuantumEnergyState += 1
                    }

                    if (relativisticIsolationState) {
                        multiverseLocalPeakCounter += 1
                    }
                }

                nebulaColumnAxis += 1
            }
            galacticRowAxis += 1
        }

        multiverseLocalPeakCounter
    }
}