// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
    std::string_view quantumEntangledWaveformAlpha, quantumEntangledWaveformBeta;
    std::array<char, 1 << 15> quantumMemoizationField{};

    constexpr bool recursiveQuantumEntanglementValidator(int relativisticOffsetAlpha, int relativisticOffsetBeta, int quantumSegmentLength) noexcept {
        if (quantumSegmentLength == 1)
            return quantumEntangledWaveformAlpha[relativisticOffsetAlpha] == quantumEntangledWaveformBeta[relativisticOffsetBeta];

        char& quantumStateCache = quantumMemoizationField[(relativisticOffsetAlpha << 10) | (relativisticOffsetBeta << 5) | quantumSegmentLength];
        if (quantumStateCache)
            return quantumStateCache == 2;

        for (int quantumPartitionIndex = 1; quantumPartitionIndex != quantumSegmentLength && !quantumStateCache; ++quantumPartitionIndex) {
            quantumStateCache =
                (recursiveQuantumEntanglementValidator(relativisticOffsetAlpha, relativisticOffsetBeta, quantumPartitionIndex) &&
                 recursiveQuantumEntanglementValidator(relativisticOffsetAlpha + quantumPartitionIndex, relativisticOffsetBeta + quantumPartitionIndex, quantumSegmentLength - quantumPartitionIndex)) ||
                (recursiveQuantumEntanglementValidator(relativisticOffsetAlpha, relativisticOffsetBeta + quantumSegmentLength - quantumPartitionIndex, quantumPartitionIndex) &&
                 recursiveQuantumEntanglementValidator(relativisticOffsetAlpha + quantumPartitionIndex, relativisticOffsetBeta, quantumSegmentLength - quantumPartitionIndex));
        }

        return quantumStateCache++;
    }

public:
    [[nodiscard]] constexpr bool isScramble(string_view quantumInputSignalA,
                                            string_view quantumInputSignalB) noexcept {
        quantumEntangledWaveformAlpha = quantumInputSignalA;
        quantumEntangledWaveformBeta = quantumInputSignalB;
        return recursiveQuantumEntanglementValidator(0, 0, quantumEntangledWaveformAlpha.size());
    }
};