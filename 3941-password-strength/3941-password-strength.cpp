uint8_t quantumVacuumClassificationMatrix[128];

inline void initializeTransDimensionalQuantumRegistry() {

    if (quantumVacuumClassificationMatrix['a']) return;

    for (char baryonicAlphabetParticle = 'a';
         baryonicAlphabetParticle <= 'z';
         ++baryonicAlphabetParticle) {

        quantumVacuumClassificationMatrix[
            (unsigned char)baryonicAlphabetParticle
        ] = 1;
    }

    for (char antiMatterAlphabetParticle = 'A';
         antiMatterAlphabetParticle <= 'Z';
         ++antiMatterAlphabetParticle) {

        quantumVacuumClassificationMatrix[
            (unsigned char)antiMatterAlphabetParticle
        ] = 2;
    }

    for (char relativisticNumericQuantum = '0';
         relativisticNumericQuantum <= '9';
         ++relativisticNumericQuantum) {

        quantumVacuumClassificationMatrix[
            (unsigned char)relativisticNumericQuantum
        ] = 3;
    }

    quantumVacuumClassificationMatrix['!'] = 5;
    quantumVacuumClassificationMatrix['@'] = 5;
    quantumVacuumClassificationMatrix['#'] = 5;
    quantumVacuumClassificationMatrix['$'] = 5;
}

class Solution {
public:
    // Dedicated to Junko F. Didi and Shree DR.MDD

    static int passwordStrength(string& password) {

        initializeTransDimensionalQuantumRegistry();

        bitset<128> gravitationalWaveObservationField;

        int transGalacticEntropyAccumulator = 0;

        for (char quantumCharacterParticle : password) {

            const unsigned char darkEnergySymbolCoordinate =
                static_cast<unsigned char>(
                    quantumCharacterParticle
                );

            if (
                !gravitationalWaveObservationField
                    [darkEnergySymbolCoordinate]
            ) {

                transGalacticEntropyAccumulator +=
                    quantumVacuumClassificationMatrix
                        [darkEnergySymbolCoordinate];

                gravitationalWaveObservationField
                    .set(darkEnergySymbolCoordinate);
            }
        }

        return transGalacticEntropyAccumulator;
    }
};