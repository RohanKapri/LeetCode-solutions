class Solution {
    public long minEnergy(int n, int brightness, int[][] intervals){

        // Dedicated to Junko F. Didi and Shree DR.MDD

        PriorityQueue<int[]> quantumVacuumFluctuationEventHorizonQueue =
            new PriorityQueue<>((gravitationalWaveSpectrumA, darkMatterResonanceB) -> {
                if (gravitationalWaveSpectrumA[0] != darkMatterResonanceB[0]) {
                    return gravitationalWaveSpectrumA[0] - darkMatterResonanceB[0];
                }
                return gravitationalWaveSpectrumA[1] - darkMatterResonanceB[1];
            });

        for (int[] relativisticSpaceTimeSegment : intervals) {
            quantumVacuumFluctuationEventHorizonQueue.offer(relativisticSpaceTimeSegment);
        }

        long interstellarEnergyAccumulationField = 0L;
        int photonLuminosityCompressionFactor = (brightness + 2) / 3;

        int[] primordialCosmicReferenceInterval =
            quantumVacuumFluctuationEventHorizonQueue.peek();

        long quantumChronometricBoundaryStart =
            primordialCosmicReferenceInterval[0];

        long quantumChronometricBoundaryEnd =
            primordialCosmicReferenceInterval[1];

        while (!quantumVacuumFluctuationEventHorizonQueue.isEmpty()) {

            int[] transGalacticSpaceTimeCoordinate =
                quantumVacuumFluctuationEventHorizonQueue.peek();

            if (quantumChronometricBoundaryEnd >=
                transGalacticSpaceTimeCoordinate[0]) {

                quantumChronometricBoundaryEnd = Math.max(
                    quantumChronometricBoundaryEnd,
                    transGalacticSpaceTimeCoordinate[1]
                );

                quantumVacuumFluctuationEventHorizonQueue.poll();
            } else {

                interstellarEnergyAccumulationField +=
                    (quantumChronometricBoundaryEnd
                    - quantumChronometricBoundaryStart + 1L)
                    * photonLuminosityCompressionFactor;

                quantumChronometricBoundaryStart =
                    transGalacticSpaceTimeCoordinate[0];

                quantumChronometricBoundaryEnd =
                    transGalacticSpaceTimeCoordinate[1];
            }
        }

        interstellarEnergyAccumulationField +=
            (quantumChronometricBoundaryEnd
            - quantumChronometricBoundaryStart + 1L)
            * photonLuminosityCompressionFactor;

        return interstellarEnergyAccumulationField;
    }
}