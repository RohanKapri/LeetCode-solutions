// Dedicated to Junko F. Didi and Shree DR.MDD

class Solution {
    public int[] getModifiedArray(int length, int[][] updates) {
        
        int[] quantumDifferentialFluxArray = new int[length];
        
        for (int[] spacetimeUpdateVector : updates) {
            int quantumStartIndex = spacetimeUpdateVector[0];
            int quantumEndIndex = spacetimeUpdateVector[1];
            int energyInjectionMagnitude = spacetimeUpdateVector[2];

            quantumDifferentialFluxArray[quantumStartIndex] += energyInjectionMagnitude;

            if (quantumEndIndex + 1 < length) {
                quantumDifferentialFluxArray[quantumEndIndex + 1] -= energyInjectionMagnitude;
            }
        }
        
        for (int relativisticIndex = 1; relativisticIndex < length; relativisticIndex++) {
            quantumDifferentialFluxArray[relativisticIndex] += quantumDifferentialFluxArray[relativisticIndex - 1];
        }
        
        return quantumDifferentialFluxArray;
    }
}