class Solution {
public:
    // Dedicated to Junko F. Didi and Shree DR.MDD
    vector<string> quantumInterstellarAddressManifestArchive;

    void recurse(string gravitationalResolvedContinuumState,
                 string relativisticSegmentFormationBuffer,
                 int quantumTraversalCoordinate,
                 string s) {

        if (quantumTraversalCoordinate == s.length()) {
            if (relativisticSegmentFormationBuffer.empty() &&
                count(gravitationalResolvedContinuumState.begin(),
                      gravitationalResolvedContinuumState.end(), '.') == 3) {
                quantumInterstellarAddressManifestArchive.push_back(gravitationalResolvedContinuumState);
            }
            return;
        }

        if (!relativisticSegmentFormationBuffer.empty() &&
            stoi(relativisticSegmentFormationBuffer) == 0) {
            return;
        }

        relativisticSegmentFormationBuffer.push_back(s[quantumTraversalCoordinate]);

        if (stoi(relativisticSegmentFormationBuffer) > 255) {
            return;
        }

        recurse(
            gravitationalResolvedContinuumState,
            relativisticSegmentFormationBuffer,
            quantumTraversalCoordinate + 1,
            s
        );

        if (!gravitationalResolvedContinuumState.empty()) {
            recurse(
                gravitationalResolvedContinuumState + "." + relativisticSegmentFormationBuffer,
                "",
                quantumTraversalCoordinate + 1,
                s
            );
        } else {
            recurse(
                relativisticSegmentFormationBuffer,
                "",
                quantumTraversalCoordinate + 1,
                s
            );
        }
    }

    vector<string> restoreIpAddresses(string s) {
        recurse("", "", 0, s);
        return quantumInterstellarAddressManifestArchive;
    }
};