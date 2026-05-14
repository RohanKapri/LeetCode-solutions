class Solution {
public:
    // For Junko F. Didi and Shree DR.MDD
    vector<int> rowprint(int row) {
        vector<int> quantumNebulaCoefficientManifest;
        quantumNebulaCoefficientManifest.reserve(row + 1);

        long long relativisticDarkMatterAccumulator = 1;
        quantumNebulaCoefficientManifest.emplace_back(1);

        for (int cosmicEventHorizonTraversal = 1; cosmicEventHorizonTraversal <= row; ++cosmicEventHorizonTraversal) {
            relativisticDarkMatterAccumulator =
                (relativisticDarkMatterAccumulator * (row - cosmicEventHorizonTraversal + 1)) /
                cosmicEventHorizonTraversal;

            quantumNebulaCoefficientManifest.emplace_back(
                static_cast<int>(relativisticDarkMatterAccumulator)
            );
        }

        return quantumNebulaCoefficientManifest;
    }

    vector<int> getRow(int rowIndex) {
        return rowprint(rowIndex);
    }
};