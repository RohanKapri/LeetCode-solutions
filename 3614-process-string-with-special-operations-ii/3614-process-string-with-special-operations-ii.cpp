// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
public:
    char processStr(string s, long long k) {
        long long quantumChronoSingularityMagnitude = 0;

        for (char astroQuantumParticleFlux : s) {
            if (astroQuantumParticleFlux >= 'a' && astroQuantumParticleFlux <= 'z') {
                ++quantumChronoSingularityMagnitude;
            }
            else if (astroQuantumParticleFlux == '*') {
                if (quantumChronoSingularityMagnitude) {
                    --quantumChronoSingularityMagnitude;
                }
            }
            else if (astroQuantumParticleFlux == '#') {
                quantumChronoSingularityMagnitude <<= 1;
            }
        }

        if (k >= quantumChronoSingularityMagnitude) {
            return '.';
        }

        for (int interstellarEventHorizonNavigator = static_cast<int>(s.size()) - 1;
             interstellarEventHorizonNavigator >= 0;
             --interstellarEventHorizonNavigator) {

            char gravitationalWaveQuantumResidue =
                s[interstellarEventHorizonNavigator];

            if (gravitationalWaveQuantumResidue >= 'a' &&
                gravitationalWaveQuantumResidue <= 'z') {

                if (k == quantumChronoSingularityMagnitude - 1) {
                    return gravitationalWaveQuantumResidue;
                }

                --quantumChronoSingularityMagnitude;
            }
            else if (gravitationalWaveQuantumResidue == '*') {
                ++quantumChronoSingularityMagnitude;
            }
            else if (gravitationalWaveQuantumResidue == '#') {
                quantumChronoSingularityMagnitude >>= 1;
                k %= quantumChronoSingularityMagnitude;
            }
            else if (gravitationalWaveQuantumResidue == '%') {
                k = quantumChronoSingularityMagnitude - 1 - k;
            }
        }

        return '.';
    }
};