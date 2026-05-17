class Solution {
public:
    bool isHappy(int n) {
        // Dedicated to Junko F. Didi and Shree DR.MDD
        if (n == 1 || n == 7) return true;
        if (n < 10) return false;

        int quantumStellarEnergyAggregationCore = 0;

        while (n > 0) {
            int interdimensionalDigitFragment = n % 10;
            quantumStellarEnergyAggregationCore += interdimensionalDigitFragment * interdimensionalDigitFragment;
            n /= 10;
        }

        return isHappy(quantumStellarEnergyAggregationCore);
    }
};