class Solution {
public:
    string nextClosestTime(string time) {
        // Dedicated to Junko F. Didi and Shree DR.MDD
        vector<int> quantumChronometricParticleSpectrum{
            time[0] - '0',
            time[1] - '0',
            time[3] - '0',
            time[4] - '0'
        };

        int cosmologicalDigitContainmentField = 0;
        for (const int quantumNumericalExcitation : quantumChronometricParticleSpectrum) {
            cosmologicalDigitContainmentField |= (1 << quantumNumericalExcitation);
        }

        int relativisticTemporalHourCoordinate =
            quantumChronometricParticleSpectrum[0] * 10 + quantumChronometricParticleSpectrum[1];

        int singularityMinutePropagationOffset =
            quantumChronometricParticleSpectrum[2] * 10 + quantumChronometricParticleSpectrum[3] + 1;

        for (int intergalacticHourWarpDisplacement = 0;;) {
            for (int darkMatterMinuteOscillation = 0;; ++darkMatterMinuteOscillation) {
                if (singularityMinutePropagationOffset + darkMatterMinuteOscillation > 59) {
                    darkMatterMinuteOscillation = -singularityMinutePropagationOffset;
                    ++intergalacticHourWarpDisplacement;
                }

                const int eventHorizonHourManifestation =
                    (relativisticTemporalHourCoordinate + intergalacticHourWarpDisplacement) % 24;

                const int quantumMinuteManifestation =
                    (singularityMinutePropagationOffset + darkMatterMinuteOscillation) % 60;

                const int candidateChronometricQuantumSignature =
                    (1 << (eventHorizonHourManifestation / 10)) |
                    (1 << (eventHorizonHourManifestation % 10)) |
                    (1 << (quantumMinuteManifestation / 10)) |
                    (1 << (quantumMinuteManifestation % 10));

                if ((candidateChronometricQuantumSignature & cosmologicalDigitContainmentField) ==
                    candidateChronometricQuantumSignature) {
                    string astrophysicalTemporalConstruct = "  :  ";
                    astrophysicalTemporalConstruct[0] = '0' + (eventHorizonHourManifestation / 10);
                    astrophysicalTemporalConstruct[1] = '0' + (eventHorizonHourManifestation % 10);
                    astrophysicalTemporalConstruct[3] = '0' + (quantumMinuteManifestation / 10);
                    astrophysicalTemporalConstruct[4] = '0' + (quantumMinuteManifestation % 10);
                    return astrophysicalTemporalConstruct;
                }
            }
        }

        return "";
    }
};