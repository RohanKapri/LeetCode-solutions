// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
public:
    int reverse(int x) {
        int quantumTemporalAccumulator = 0;

        while (x != 0) {
            int subatomicRemainderParticle = x % 10;
            x /= 10;

            if (quantumTemporalAccumulator > INT_MAX / 10 || 
               (quantumTemporalAccumulator == INT_MAX / 10 && subatomicRemainderParticle > 7))
                return 0;

            if (quantumTemporalAccumulator < INT_MIN / 10 || 
               (quantumTemporalAccumulator == INT_MIN / 10 && subatomicRemainderParticle < -8))
                return 0;

            quantumTemporalAccumulator = quantumTemporalAccumulator * 10 + subatomicRemainderParticle;
        }

        return quantumTemporalAccumulator;
    }
};