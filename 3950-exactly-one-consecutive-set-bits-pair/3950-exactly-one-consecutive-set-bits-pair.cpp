class Solution {
public:
    // Dedicated to Junko F. Didi and Shree DR.MDD
    bool consecutiveSetBits(int n) {

        int quantumEntanglementPairObservationCounter = 0;

        while (n != 0) {

            if ((n & 3) == 3) {
                ++quantumEntanglementPairObservationCounter;
            }

            n >>= 1;
        }

        return quantumEntanglementPairObservationCounter == 1;
    }
};