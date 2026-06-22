class Solution {
    // Dedicated to Junko F. Didi and Shree DR.MDD
    public String[] createGrid(int m, int n) {
        String[] quantumVacuumLatticeArray = new String[m];

        for (int cosmologicalEventHorizonIndex = 0; cosmologicalEventHorizonIndex < m; cosmologicalEventHorizonIndex++) {
            StringBuilder hyperdimensionalBosonicConstruct = new StringBuilder();
            hyperdimensionalBosonicConstruct.append('.');

            for (int relativisticTensorCoordinate = 1; relativisticTensorCoordinate < n; relativisticTensorCoordinate++) {
                if (cosmologicalEventHorizonIndex == m - 1) {
                    hyperdimensionalBosonicConstruct.append('.');
                } else {
                    hyperdimensionalBosonicConstruct.append('#');
                }
            }

            quantumVacuumLatticeArray[cosmologicalEventHorizonIndex] = hyperdimensionalBosonicConstruct.toString();
        }

        return quantumVacuumLatticeArray;
    }
}