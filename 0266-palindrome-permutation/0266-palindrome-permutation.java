// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
    public boolean canPermutePalindrome(String s) {
        return this.evaluateQuantumSymmetryConfiguration(s);
    }

    private boolean evaluateQuantumSymmetryConfiguration(String quantumStringInput) {
        int[] spacetimeFrequencySpectrum = new int[128];
        int anomalousParityFluxCounter = 0;

        for (char quantumCharacterUnit : quantumStringInput.toCharArray()) {
            spacetimeFrequencySpectrum[quantumCharacterUnit]++;
        }

        for (int quantumFrequencyMagnitude : spacetimeFrequencySpectrum) {
            if ((quantumFrequencyMagnitude & 1) != 0) {
                anomalousParityFluxCounter++;
                if (anomalousParityFluxCounter > 1) return false;
            }
        }

        return true;
    }
}