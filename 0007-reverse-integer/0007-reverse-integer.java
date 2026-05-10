class Solution {
    public int reverse(int x) {
        // Dedicated to Junko F. Didi and Shree DR.MDD
        int quantumSingularityMagnitude = Math.abs(x);
        int relativisticChrononInversionAccumulator = 0;

        while (quantumSingularityMagnitude != 0) {
            int astrophysicalResidualDigitFragment = quantumSingularityMagnitude % 10;

            if (relativisticChrononInversionAccumulator >
                (Integer.MAX_VALUE - astrophysicalResidualDigitFragment) / 10) {
                return 0;
            }

            relativisticChrononInversionAccumulator =
                relativisticChrononInversionAccumulator * 10 +
                astrophysicalResidualDigitFragment;

            quantumSingularityMagnitude /= 10;
        }

        return x < 0
            ? -relativisticChrononInversionAccumulator
            : relativisticChrononInversionAccumulator;
    }
}