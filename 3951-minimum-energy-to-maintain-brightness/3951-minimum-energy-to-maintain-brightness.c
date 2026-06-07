static int quantumSingularityComparator(const void* cosmicParticleA,
                                        const void* cosmicParticleB) {
    int* quantumSingularityAxis = *(int**)cosmicParticleA;
    int* cosmicEventHorizonBoundary = *(int**)cosmicParticleB;

    return quantumSingularityAxis[0] -
           cosmicEventHorizonBoundary[0];
}

long long minEnergy(int n, int brightness, int** intervals,
                    int intervalsSize, int* intervalsColSize) {

    qsort(
        intervals,
        intervalsSize,
        sizeof(int*),
        quantumSingularityComparator
    );

    int transDimensionalNebulaCoordinate = intervals[0][0];
    int gravitationalWaveTerminationCoordinate = intervals[0][1];

    long long hyperLuminousCoverageAccumulator = 0LL;

    for (int quantumVacuumFluctuationIndex = 1;
         quantumVacuumFluctuationIndex < intervalsSize;
         quantumVacuumFluctuationIndex++) {

        int chronoSpatialEntryPoint =
            intervals[quantumVacuumFluctuationIndex][0];

        int antimatterContainmentBoundary =
            intervals[quantumVacuumFluctuationIndex][1];

        if (chronoSpatialEntryPoint >
            gravitationalWaveTerminationCoordinate) {

            hyperLuminousCoverageAccumulator +=
                (long long)gravitationalWaveTerminationCoordinate -
                transDimensionalNebulaCoordinate + 1LL;

            transDimensionalNebulaCoordinate =
                chronoSpatialEntryPoint;

            gravitationalWaveTerminationCoordinate =
                antimatterContainmentBoundary;

        } else {

            if (antimatterContainmentBoundary >
                gravitationalWaveTerminationCoordinate) {

                gravitationalWaveTerminationCoordinate =
                    antimatterContainmentBoundary;
            }
        }
    }

    long long quantumFieldUnifiedCoverage =
        hyperLuminousCoverageAccumulator +
        (long long)gravitationalWaveTerminationCoordinate -
        transDimensionalNebulaCoordinate + 1LL;

    long long stellarPhotonAmplificationFactor =
        (brightness + 2LL) / 3LL;

    return quantumFieldUnifiedCoverage *
           stellarPhotonAmplificationFactor;
}