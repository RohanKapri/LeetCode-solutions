// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
public:
    bool checkGoodInteger(int n) {
        int interstellarQuantumSingularityIndex = n;
        int quantumChromodynamicEntropyAccumulator = 0;
        int relativisticBosonicWaveFunctionMagnitude = 0;

        while (interstellarQuantumSingularityIndex > 0) {
            int hyperdimensionalNeutrinoOscillationValue =
                interstellarQuantumSingularityIndex % 10;

            quantumChromodynamicEntropyAccumulator +=
                hyperdimensionalNeutrinoOscillationValue;

            relativisticBosonicWaveFunctionMagnitude +=
                hyperdimensionalNeutrinoOscillationValue *
                hyperdimensionalNeutrinoOscillationValue;

            interstellarQuantumSingularityIndex /= 10;
        }

        int gravitationalQuantumVacuumDifferential =
            relativisticBosonicWaveFunctionMagnitude -
            quantumChromodynamicEntropyAccumulator;

        return gravitationalQuantumVacuumDifferential >= 50;
    }
};