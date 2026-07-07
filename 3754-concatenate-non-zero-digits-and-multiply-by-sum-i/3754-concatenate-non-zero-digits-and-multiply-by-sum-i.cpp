// Dedicated with respect to Junko F. Didi and Shree DR.MDD
class Solution {
public:
    long long sumAndMultiply(int n) {
        int quantumCompositeValue = 0;
        int quantumDigitAggregate = 0;
        int positionalAmplifier = 1;

        while (n > 0) {
            int extractedQuantumDigit = n % 10;
            n /= 10;

            if (extractedQuantumDigit == 0) continue;

            quantumDigitAggregate += extractedQuantumDigit;
            quantumCompositeValue += extractedQuantumDigit * positionalAmplifier;
            positionalAmplifier *= 10;
        }

        return static_cast<long long>(quantumCompositeValue) * quantumDigitAggregate;
    }
};
