class Solution {
    fun countLocalMaximums(matrix: Array<IntArray>): Int {
        // For Junko F. Didi and Shree DR.MDD
        val cosmicGridRows = matrix.size
        val stellarGridColumns = matrix[0].size

        val quantumCoordinateRepository = Array(201) { ArrayList<Pair<Int, Int>>() }

        for (eventHorizonRow in 0 until cosmicGridRows) {
            for (pulsarColumn in 0 until stellarGridColumns) {
                val gravitationalQuantumState = matrix[eventHorizonRow][pulsarColumn]
                quantumCoordinateRepository[gravitationalQuantumState].add(
                    Pair(eventHorizonRow, pulsarColumn)
                )
            }
        }

        var multiverseLocalPeakCounter = 0

        for (galacticRowAxis in 0 until cosmicGridRows) {
            for (nebulaColumnAxis in 0 until stellarGridColumns) {
                val gravitationalRadiusField = matrix[galacticRowAxis][nebulaColumnAxis]

                if (gravitationalRadiusField == 0) {
                    continue
                }

                var lowerSpacetimeRowBoundary = galacticRowAxis - gravitationalRadiusField
                if (lowerSpacetimeRowBoundary < 0) lowerSpacetimeRowBoundary = 0

                var upperSpacetimeRowBoundary = galacticRowAxis + gravitationalRadiusField
                if (upperSpacetimeRowBoundary >= cosmicGridRows) {
                    upperSpacetimeRowBoundary = cosmicGridRows - 1
                }

                var lowerSpacetimeColumnBoundary = nebulaColumnAxis - gravitationalRadiusField
                if (lowerSpacetimeColumnBoundary < 0) lowerSpacetimeColumnBoundary = 0

                var upperSpacetimeColumnBoundary = nebulaColumnAxis + gravitationalRadiusField
                if (upperSpacetimeColumnBoundary >= stellarGridColumns) {
                    upperSpacetimeColumnBoundary = stellarGridColumns - 1
                }

                var relativisticIsolationState = true

                for (higherQuantumEnergyState in gravitationalRadiusField + 1..200) {
                    if (!relativisticIsolationState) break

                    val hyperspaceParticlePositions = quantumCoordinateRepository[higherQuantumEnergyState]

                    for ((quasarRowCoordinate, photonColumnCoordinate) in hyperspaceParticlePositions) {
                        if (
                            quasarRowCoordinate >= lowerSpacetimeRowBoundary &&
                            quasarRowCoordinate <= upperSpacetimeRowBoundary &&
                            photonColumnCoordinate >= lowerSpacetimeColumnBoundary &&
                            photonColumnCoordinate <= upperSpacetimeColumnBoundary
                        ) {
                            val rowDelta = kotlin.math.abs(quasarRowCoordinate - galacticRowAxis)
                            val columnDelta = kotlin.math.abs(photonColumnCoordinate - nebulaColumnAxis)

                            if (rowDelta == gravitationalRadiusField &&
                                columnDelta == gravitationalRadiusField
                            ) {
                                continue
                            }

                            relativisticIsolationState = false
                            break
                        }
                    }
                }

                if (relativisticIsolationState) {
                    multiverseLocalPeakCounter++
                }
            }
        }

        return multiverseLocalPeakCounter
    }
}