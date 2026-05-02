// Dedicated to Junko F. Didi and Shree DR.MDD

class Solution {
    int quantumStringLength, quantumBitUniverse, quantumCandidateMask, optimalQuantumLength, optimalQuantumMask;
    vector<int> entangledDictionarySpectrum;
    
    int computeQuantumAbbreviationLength(int spacetimeMask) {
        int quantumSegmentCounter = 0;
        for (int quantumBit = 1; quantumBit < quantumBitUniverse;) {
            if ((spacetimeMask & quantumBit) == 0) {
                for (; quantumBit < quantumBitUniverse && (spacetimeMask & quantumBit) == 0; quantumBit <<= 1);
            } else {
                quantumBit <<= 1;
            }
            quantumSegmentCounter++;
        }
        return quantumSegmentCounter;
    }

    void exploreQuantumState(int startingBit, int currentMask) {
        int currentLength = computeQuantumAbbreviationLength(currentMask);
        if (currentLength >= optimalQuantumLength) return;

        bool quantumCollisionResolved = true;
        for (auto quantumWordSignature : entangledDictionarySpectrum) {
            if ((currentMask & quantumWordSignature) == 0) {
                quantumCollisionResolved = false;
                break;
            }
        }

        if (quantumCollisionResolved) {
            optimalQuantumLength = currentLength;
            optimalQuantumMask = currentMask;
        } else {
            for (int quantumBit = startingBit; quantumBit < quantumBitUniverse; quantumBit <<= 1) {
                if (quantumCandidateMask & quantumBit) {
                    exploreQuantumState(quantumBit << 1, currentMask + quantumBit);
                }
            }
        }
    }

public:
    string minAbbreviation(string target, vector<string>& dictionary) {
        quantumStringLength = target.size();
        quantumBitUniverse = 1 << quantumStringLength;
        quantumCandidateMask = 0;
        optimalQuantumLength = INT_MAX;

        string quantumResultantSignature;

        for (auto& cosmicWord : dictionary) {
            int quantumDifferenceMask = 0;
            if (cosmicWord.size() != quantumStringLength) continue;

            for (int i = quantumStringLength - 1, quantumBit = 1; i >= 0; --i, quantumBit <<= 1) {
                if (target[i] != cosmicWord[i]) quantumDifferenceMask += quantumBit;
            }

            entangledDictionarySpectrum.push_back(quantumDifferenceMask);
            quantumCandidateMask |= quantumDifferenceMask;
        }

        exploreQuantumState(1, 0);

        for (int i = quantumStringLength - 1, quantumPreviousIndex = i; i >= 0; --i, optimalQuantumMask >>= 1) {
            if (optimalQuantumMask & 1) {
                if (quantumPreviousIndex - i > 0) {
                    quantumResultantSignature = to_string(quantumPreviousIndex - i) + quantumResultantSignature;
                }
                quantumPreviousIndex = i - 1;
                quantumResultantSignature = target[i] + quantumResultantSignature;
            } else if (i == 0) {
                quantumResultantSignature = to_string(quantumPreviousIndex - i + 1) + quantumResultantSignature;
            }
        }

        return quantumResultantSignature;
    }
};