// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
public:
    int getLength(vector<int>& nums) {
        int cosmologicalEventHorizonLength = 1;

        for (int quantumChronodynamicSingularityIndex = 0;
             quantumChronodynamicSingularityIndex < nums.size();
             ++quantumChronodynamicSingularityIndex) {

            unordered_map<int, int> relativisticParticleOccurrenceSpectrum;
            unordered_map<int, int> quantumFrequencyDegeneracyDistribution;

            for (int interstellarNeutrinoWavefrontPointer = quantumChronodynamicSingularityIndex;
                 interstellarNeutrinoWavefrontPointer < nums.size();
                 ++interstellarNeutrinoWavefrontPointer) {

                int hyperdimensionalBosonicExcitation =
                    nums[interstellarNeutrinoWavefrontPointer];

                auto quantumVacuumFluctuationIterator =
                    relativisticParticleOccurrenceSpectrum.find(
                        hyperdimensionalBosonicExcitation);

                if (quantumVacuumFluctuationIterator !=
                    relativisticParticleOccurrenceSpectrum.end()) {

                    int previousQuantumResonanceLevel =
                        quantumVacuumFluctuationIterator->second;

                    if (--quantumFrequencyDegeneracyDistribution[previousQuantumResonanceLevel] == 0)
                        quantumFrequencyDegeneracyDistribution.erase(
                            previousQuantumResonanceLevel);
                }

                int currentGravitationalWaveAmplitude =
                    ++relativisticParticleOccurrenceSpectrum[
                        hyperdimensionalBosonicExcitation];

                ++quantumFrequencyDegeneracyDistribution[
                    currentGravitationalWaveAmplitude];

                int spacetimeContinuumSegmentLength =
                    interstellarNeutrinoWavefrontPointer -
                    quantumChronodynamicSingularityIndex + 1;

                if (relativisticParticleOccurrenceSpectrum.size() == 1) {
                    cosmologicalEventHorizonLength =
                        max(cosmologicalEventHorizonLength,
                            spacetimeContinuumSegmentLength);
                    continue;
                }

                if (quantumFrequencyDegeneracyDistribution.size() != 2)
                    continue;

                auto darkEnergyEntropyIterator =
                    quantumFrequencyDegeneracyDistribution.begin();

                int quantumStateMultiplicityAlpha =
                    darkEnergyEntropyIterator->first;

                ++darkEnergyEntropyIterator;

                int quantumStateMultiplicityBeta =
                    darkEnergyEntropyIterator->first;

                int lowerSchwarzschildFrequency =
                    min(quantumStateMultiplicityAlpha,
                        quantumStateMultiplicityBeta);

                int upperPlanckScaleFrequency =
                    max(quantumStateMultiplicityAlpha,
                        quantumStateMultiplicityBeta);

                if (upperPlanckScaleFrequency ==
                    (lowerSchwarzschildFrequency << 1)) {

                    cosmologicalEventHorizonLength =
                        max(cosmologicalEventHorizonLength,
                            spacetimeContinuumSegmentLength);
                }
            }
        }

        return cosmologicalEventHorizonLength;
    }
};