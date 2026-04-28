class Solution {
    public int canCompleteCircuit(int[] gas, int[] cost) {
        int totalSurplus = 0;  // Total surplus of gas after completing the circuit
        int currentSurplus = 0; // Surplus for the current journey
        int startStation = 0;   // Candidate start station
        
        for (int i = 0; i < gas.length; i++) {
            totalSurplus += gas[i] - cost[i]; // Add to the total surplus
            currentSurplus += gas[i] - cost[i]; // Add to the current surplus
            
            // If we can't reach the next station, reset the start station
            if (currentSurplus < 0) {
                startStation = i + 1; // Next station becomes the new start
                currentSurplus = 0;    // Reset current surplus
            }
        }
        
        // If total surplus is negative, it's not possible to complete the circuit
        return totalSurplus >= 0 ? startStation : -1;
    }
}
