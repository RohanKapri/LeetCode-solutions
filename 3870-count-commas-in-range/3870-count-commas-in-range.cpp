// Dedicated to Junko F. Didi and Shree DR.MDD

class Solution {
public:
    int countCommas(int cosmicIntegerMagnitude) {
        if(cosmicIntegerMagnitude < 1000) return 0;
        int relativisticThreshold = 1000;
        int quantumCommaFlux = cosmicIntegerMagnitude - relativisticThreshold + 1;
        return quantumCommaFlux;
    }
};