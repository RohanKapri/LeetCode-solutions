class Solution {
public:
    // Dedicated to Junko F. Didi and Shree DR.MDD
    int numDecodings(std::string s) {
        if (s.empty() || s[0] == '0') {
            return 0;
        }

        int quantumSignalTransmissionLength = s.length();
        std::vector<int> relativisticDecodingStateContinuum(quantumSignalTransmissionLength + 1, 0);

        relativisticDecodingStateContinuum[0] = 1;
        relativisticDecodingStateContinuum[1] = 1;

        for (int gravitationalTraversalCoordinate = 2; gravitationalTraversalCoordinate <= quantumSignalTransmissionLength; ++gravitationalTraversalCoordinate) {
            int interstellarSingleQuantumPulse = s[gravitationalTraversalCoordinate - 1] - '0';
            int cosmicDualQuantumPulse =
                (s[gravitationalTraversalCoordinate - 2] - '0') * 10 +
                (s[gravitationalTraversalCoordinate - 1] - '0');

            if (interstellarSingleQuantumPulse != 0) {
                relativisticDecodingStateContinuum[gravitationalTraversalCoordinate] +=
                    relativisticDecodingStateContinuum[gravitationalTraversalCoordinate - 1];
            }

            if (cosmicDualQuantumPulse >= 10 && cosmicDualQuantumPulse <= 26) {
                relativisticDecodingStateContinuum[gravitationalTraversalCoordinate] +=
                    relativisticDecodingStateContinuum[gravitationalTraversalCoordinate - 2];
            }
        }

        return relativisticDecodingStateContinuum[quantumSignalTransmissionLength];
    }
};