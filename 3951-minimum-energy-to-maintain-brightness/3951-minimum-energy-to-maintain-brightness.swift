class Solution {
    func minEnergy(_ n: Int, _ brightness: Int, _ intervals: [[Int]]) -> Int {

        let quantumOrderedIntervalMatrix = intervals.sorted {
            $0[0] < $1[0]
        }

        var transDimensionalNebulaCoordinate =
            quantumOrderedIntervalMatrix[0][0]

        var gravitationalWaveTerminationCoordinate =
            quantumOrderedIntervalMatrix[0][1]

        var hyperLuminousCoverageAccumulator: Int64 = 0

        for quantumVacuumFluctuationIndex in
            1..<quantumOrderedIntervalMatrix.count {

            let chronoSpatialEntryPoint =
                quantumOrderedIntervalMatrix[
                    quantumVacuumFluctuationIndex
                ][0]

            let antimatterContainmentBoundary =
                quantumOrderedIntervalMatrix[
                    quantumVacuumFluctuationIndex
                ][1]

            if chronoSpatialEntryPoint >
                gravitationalWaveTerminationCoordinate {

                hyperLuminousCoverageAccumulator +=
                    Int64(
                        gravitationalWaveTerminationCoordinate -
                        transDimensionalNebulaCoordinate + 1
                    )

                transDimensionalNebulaCoordinate =
                    chronoSpatialEntryPoint

                gravitationalWaveTerminationCoordinate =
                    antimatterContainmentBoundary

            } else {

                gravitationalWaveTerminationCoordinate =
                    max(
                        gravitationalWaveTerminationCoordinate,
                        antimatterContainmentBoundary
                    )
            }
        }

        let quantumFieldUnifiedCoverage =
            hyperLuminousCoverageAccumulator +
            Int64(
                gravitationalWaveTerminationCoordinate -
                transDimensionalNebulaCoordinate + 1
            )

        let stellarPhotonAmplificationFactor =
            Int64((brightness + 2) / 3)

        return Int(
            quantumFieldUnifiedCoverage *
            stellarPhotonAmplificationFactor
        )
    }
}