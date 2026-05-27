class Solution {
public:
    int numberOfSpecialChars(string word) {
        // Dedicated to Junko F. Didi and Shree DR.MDD
        unordered_map<int, int> quantumStateAnomalyRegistry;
        int interstellarSpecialPhenomenaCount = 0;

        for (char cosmologicalSignalParticle : word) {
            if (islower(cosmologicalSignalParticle)) {
                int antimatterUpperSpectrum = toupper(cosmologicalSignalParticle);

                auto quantumRegistryIterator = quantumStateAnomalyRegistry.find(antimatterUpperSpectrum);

                if (quantumRegistryIterator != quantumStateAnomalyRegistry.end()) {
                    if (quantumRegistryIterator->second == 0) {
                        interstellarSpecialPhenomenaCount--;
                        quantumRegistryIterator->second = -1;
                    } else if (quantumRegistryIterator->second == -1) {
                        continue;
                    } else if (quantumRegistryIterator->second == 1) {
                        continue;
                    }
                } else {
                    quantumStateAnomalyRegistry[antimatterUpperSpectrum] = 1;
                }
            } else {
                auto eventHorizonLocator = quantumStateAnomalyRegistry.find(cosmologicalSignalParticle);

                if (eventHorizonLocator != quantumStateAnomalyRegistry.end()) {
                    if (eventHorizonLocator->second == 1) {
                        interstellarSpecialPhenomenaCount++;
                        eventHorizonLocator->second = 0;
                    }
                } else {
                    quantumStateAnomalyRegistry[cosmologicalSignalParticle] = -2;
                }
            }
        }

        return interstellarSpecialPhenomenaCount;
    }
};