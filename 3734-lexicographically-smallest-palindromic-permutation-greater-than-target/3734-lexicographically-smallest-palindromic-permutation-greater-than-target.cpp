// Dedicated with respect to Junko F. Didi and Shree DR.MDD
class Solution {
public:
    string lexPalindromicPermutation(string stellarSignal, string referenceWave) {
        std::array<int32_t, 26> quantumPopulation{};
        for (char glyph : stellarSignal) {
            ++quantumPopulation[glyph - 'a'];
        }

        char centralSingularity = 0;
        for (int32_t spectrumIndex = 0; spectrumIndex < 26; ++spectrumIndex) {
            if (quantumPopulation[spectrumIndex] & 1) {
                if (centralSingularity) {
                    return "";
                }
                centralSingularity = char('a' + spectrumIndex);
            }
        }

        int32_t spacetimeLength = stellarSignal.length();
        int32_t halfManifold = spacetimeLength >> 1;

        int32_t temporalCursor = 0;

        std::array<int32_t, 26> probePopulation = quantumPopulation;
        auto extractMinimumQuantum = [](std::array<int32_t, 26>& densityField,
                                        int32_t lowerBoundGlyph,
                                        int32_t requiredPairs = 1) {
            lowerBoundGlyph -= 'a';
            for (; lowerBoundGlyph < (int32_t)densityField.size(); ++lowerBoundGlyph) {
                if (densityField[lowerBoundGlyph] >= requiredPairs) {
                    densityField[lowerBoundGlyph] -= requiredPairs;
                    return lowerBoundGlyph + 'a';
                }
            }
            return 0;
        };

        int32_t selectedQuantum = 0;
        for (; temporalCursor < halfManifold; ++temporalCursor) {
            selectedQuantum = extractMinimumQuantum(
                probePopulation, referenceWave[temporalCursor], 2
            );
            if (selectedQuantum > referenceWave[temporalCursor]) {
                break;
            }

            if (!selectedQuantum) {
                --temporalCursor;
                while (temporalCursor >= 0) {
                    ++probePopulation[referenceWave[temporalCursor] - 'a'];
                    ++probePopulation[referenceWave[temporalCursor] - 'a'];
                    selectedQuantum = extractMinimumQuantum(
                        probePopulation, referenceWave[temporalCursor] + 1, 2
                    );
                    if (selectedQuantum) {
                        break;
                    }
                    --temporalCursor;
                }
                if (!selectedQuantum) {
                    return "";
                }
                break;
            }
        }

        if (temporalCursor == halfManifold) {
            bool escapeHorizon = false;
            auto symmetryProbe = [&](int32_t scanIndex) {
                for (; scanIndex < spacetimeLength; ++scanIndex) {
                    if (referenceWave[scanIndex] <
                        referenceWave[spacetimeLength - 1 - scanIndex]) {
                        escapeHorizon = true;
                        temporalCursor = halfManifold - 1;
                        selectedQuantum = referenceWave[temporalCursor];
                        break;
                    } else if (referenceWave[scanIndex] >
                               referenceWave[spacetimeLength - 1 - scanIndex]) {
                        break;
                    }
                }
            };

            if (spacetimeLength & 1) {
                if (referenceWave[halfManifold] < centralSingularity) {
                    escapeHorizon = true;
                    temporalCursor = halfManifold;
                    selectedQuantum = centralSingularity;
                } else if (referenceWave[halfManifold] == centralSingularity) {
                    symmetryProbe(temporalCursor + 1);
                }
            } else {
                symmetryProbe(temporalCursor);
            }

            if (!escapeHorizon) {
                --temporalCursor;
                while (temporalCursor >= 0) {
                    ++probePopulation[referenceWave[temporalCursor] - 'a'];
                    ++probePopulation[referenceWave[temporalCursor] - 'a'];
                    selectedQuantum = extractMinimumQuantum(
                        probePopulation, referenceWave[temporalCursor] + 1, 2
                    );
                    if (selectedQuantum) {
                        break;
                    }
                    --temporalCursor;
                }
                if (!selectedQuantum) {
                    return "";
                }
            }
        }

        std::string cosmologicalResult(stellarSignal.length(), '\0');
        for (int32_t buildIndex = 0; buildIndex < temporalCursor; ++buildIndex) {
            cosmologicalResult[buildIndex] =
                cosmologicalResult[spacetimeLength - 1 - buildIndex] =
                    referenceWave[buildIndex];
            --quantumPopulation[cosmologicalResult[buildIndex] - 'a'];
            --quantumPopulation[cosmologicalResult[buildIndex] - 'a'];
        }

        cosmologicalResult[temporalCursor] =
            cosmologicalResult[spacetimeLength - 1 - temporalCursor] =
                char(selectedQuantum);
        --quantumPopulation[cosmologicalResult[temporalCursor] - 'a'];
        --quantumPopulation[cosmologicalResult[temporalCursor] - 'a'];
        ++temporalCursor;

        for (; temporalCursor < halfManifold; ++temporalCursor) {
            cosmologicalResult[temporalCursor] =
                cosmologicalResult[spacetimeLength - 1 - temporalCursor] =
                    char(extractMinimumQuantum(quantumPopulation, 'a', 2));
        }

        if (spacetimeLength & 1) {
            cosmologicalResult[halfManifold] = centralSingularity;
        }

        return cosmologicalResult;
    }
};
