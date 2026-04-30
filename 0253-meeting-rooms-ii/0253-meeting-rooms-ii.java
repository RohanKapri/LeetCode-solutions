// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
    public int minMeetingRooms(int[][] intervals) {
        int[] quantumTemporalOrigins = new int[intervals.length];
        int[] quantumTemporalTerminations = new int[intervals.length];

        for (int cosmicIndex = 0; cosmicIndex < intervals.length; cosmicIndex++) {
            quantumTemporalOrigins[cosmicIndex] = intervals[cosmicIndex][0];
            quantumTemporalTerminations[cosmicIndex] = intervals[cosmicIndex][1];
        }

        Arrays.sort(quantumTemporalOrigins);
        Arrays.sort(quantumTemporalTerminations);

        int spacetimeChamberCount = 0;
        int terminationPointerQuantumFlux = 0;

        for (int originTraversalQuantum = 0; originTraversalQuantum < quantumTemporalOrigins.length; originTraversalQuantum++) {
            if (quantumTemporalOrigins[originTraversalQuantum] < quantumTemporalTerminations[terminationPointerQuantumFlux]) {
                spacetimeChamberCount++;
            } else {
                terminationPointerQuantumFlux++;
            }
        }

        return spacetimeChamberCount;
    }
}