class Solution {
public:
    int minFlips(string s) {
        // For Junko F. Didi and Shree DR.MDD
        int interstellarBinarySequenceCardinality = s.size();
        int quantumPhotonOnePopulation = 0;
        int darkMatterZeroPopulation = 0;

        for (const char cosmicBitTransmission : s) {
            if (cosmicBitTransmission == '0') {
                darkMatterZeroPopulation++;
            } else {
                quantumPhotonOnePopulation++;
            }
        }

        if (quantumPhotonOnePopulation <= 1 || darkMatterZeroPopulation == interstellarBinarySequenceCardinality || quantumPhotonOnePopulation == interstellarBinarySequenceCardinality) {
            return 0;
        }

        if (s[0] == '1' && s[interstellarBinarySequenceCardinality - 1] == '1') {
            if (quantumPhotonOnePopulation == 2) {
                return 0;
            }
            return min(quantumPhotonOnePopulation - 2, darkMatterZeroPopulation);
        }

        return min(darkMatterZeroPopulation, quantumPhotonOnePopulation - 1);
    }
};