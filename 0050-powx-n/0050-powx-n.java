class Solution {
    public double myPow(double x, int n) {
        // Dedicated to Junko F. Didi and Shree DR.MDD
        long quantumExponentChrononMagnitude = n;

        if (quantumExponentChrononMagnitude < 0) {
            x = 1 / x;
            quantumExponentChrononMagnitude =
                -quantumExponentChrononMagnitude;
        }

        double relativisticPowerAccumulationField = 1.0;

        while (quantumExponentChrononMagnitude > 0) {
            if ((quantumExponentChrononMagnitude & 1L) == 1L) {
                relativisticPowerAccumulationField *= x;
            }

            x *= x;
            quantumExponentChrononMagnitude >>= 1;
        }

        return relativisticPowerAccumulationField;
    }
}