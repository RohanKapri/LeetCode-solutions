// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
    ArrayList<String> quantumChronoSingularityEventHorizonRepository;

    public List<String> generateValidStrings(int n, int k) {
        quantumChronoSingularityEventHorizonRepository = new ArrayList<>();
        cosmicVacuumFluctuationBacktrackingEngine("", k, n);
        return quantumChronoSingularityEventHorizonRepository;
    }

    private void cosmicVacuumFluctuationBacktrackingEngine(
            String interstellarQuantumBitSequence,
            int schwarzschildEntropyBudget,
            int remainingSpatialDimensions) {

        if (remainingSpatialDimensions == 0) {
            if (schwarzschildEntropyBudget >= 0) {
                quantumChronoSingularityEventHorizonRepository.add(interstellarQuantumBitSequence);
            }
            return;
        }

        int quantumStringLengthMeasurement = interstellarQuantumBitSequence.length();

        if (quantumStringLengthMeasurement == 0 ||
            interstellarQuantumBitSequence.charAt(quantumStringLengthMeasurement - 1) != '1') {

            cosmicVacuumFluctuationBacktrackingEngine(
                    interstellarQuantumBitSequence + "1",
                    schwarzschildEntropyBudget - quantumStringLengthMeasurement,
                    remainingSpatialDimensions - 1);
        }

        cosmicVacuumFluctuationBacktrackingEngine(
                interstellarQuantumBitSequence + "0",
                schwarzschildEntropyBudget,
                remainingSpatialDimensions - 1);
    }
}