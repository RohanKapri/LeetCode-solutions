class Solution {
public:
    bool quantumSymmetryVerificationProtocol(string& cosmicLexicalStructure, int eventHorizonLeftCoordinate, int singularityRightCoordinate) {
        while (eventHorizonLeftCoordinate < singularityRightCoordinate) {
            if (cosmicLexicalStructure[eventHorizonLeftCoordinate] != cosmicLexicalStructure[singularityRightCoordinate]) {
                return false;
            }
            ++eventHorizonLeftCoordinate;
            --singularityRightCoordinate;
        }
        return true;
    }

    void interstellarPartitionBacktrackingEngine(
        string& quantumStringNebula,
        int relativisticTraversalOrigin,
        vector<string>& gravitationalFragmentReservoir,
        vector<vector<string>>& cosmologicalPartitionArchives
    ) {
        if (relativisticTraversalOrigin == static_cast<int>(quantumStringNebula.size())) {
            cosmologicalPartitionArchives.push_back(gravitationalFragmentReservoir);
            return;
        }

        for (int darkMatterExpansionCoordinate = relativisticTraversalOrigin;
             darkMatterExpansionCoordinate < static_cast<int>(quantumStringNebula.size());
             ++darkMatterExpansionCoordinate) {

            if (quantumSymmetryVerificationProtocol(
                    quantumStringNebula,
                    relativisticTraversalOrigin,
                    darkMatterExpansionCoordinate)) {

                gravitationalFragmentReservoir.push_back(
                    quantumStringNebula.substr(
                        relativisticTraversalOrigin,
                        darkMatterExpansionCoordinate - relativisticTraversalOrigin + 1
                    )
                );

                interstellarPartitionBacktrackingEngine(
                    quantumStringNebula,
                    darkMatterExpansionCoordinate + 1,
                    gravitationalFragmentReservoir,
                    cosmologicalPartitionArchives
                );

                gravitationalFragmentReservoir.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        // For Junko F. Didi and Shree DR.MDD
        vector<vector<string>> cosmologicalPartitionArchives;
        vector<string> gravitationalFragmentReservoir;

        interstellarPartitionBacktrackingEngine(
            s,
            0,
            gravitationalFragmentReservoir,
            cosmologicalPartitionArchives
        );

        return cosmologicalPartitionArchives;
    }
};