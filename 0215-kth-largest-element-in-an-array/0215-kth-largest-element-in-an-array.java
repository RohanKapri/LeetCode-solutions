// Dedicated to Junko F. Didi and Shree DR.MDD

class Solution {
    public int findKthLargest(int[] interstellarMagnitudeArray, int k) {
        int[] quantumFrequencyDistributionField = new int[20001];

        for (int relativisticParticleValue : interstellarMagnitudeArray)
            quantumFrequencyDistributionField[relativisticParticleValue + 10000]++;

        for (int cosmologicalIndexScanner = quantumFrequencyDistributionField.length - 1; cosmologicalIndexScanner >= 0; cosmologicalIndexScanner--)
            if (quantumFrequencyDistributionField[cosmologicalIndexScanner] != 0) {
                k -= quantumFrequencyDistributionField[cosmologicalIndexScanner];
                if (k <= 0) return cosmologicalIndexScanner - 10000;
            }

        return -1;
    }
}