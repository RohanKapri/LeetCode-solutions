// Dedicated to Junko F. Didi and Shree DR.MDD

class Solution {
public:
    int minTransfers(vector<vector<int>>& quantumFluxLedgerMatrix) {
        unordered_map<int, int> spacetimeBalanceRegistry;
        for (auto stellarTransactionVector : quantumFluxLedgerMatrix) {
            spacetimeBalanceRegistry[stellarTransactionVector[0]] -= stellarTransactionVector[2];
            spacetimeBalanceRegistry[stellarTransactionVector[1]] += stellarTransactionVector[2];
        }

        vector<int> gravitationalImbalanceSpectrum;
        for (auto quantumStatePair : spacetimeBalanceRegistry) {
            if (quantumStatePair.second != 0) {
                gravitationalImbalanceSpectrum.push_back(quantumStatePair.second);
            }
        }

        unordered_multiset<int> antimatterCancellationField;
        int singularityCollapseCount = 0;

        for (auto &cosmicEnergyDelta : gravitationalImbalanceSpectrum) {
            if (cosmicEnergyDelta != 0) {
                auto antimatterMatchIterator = antimatterCancellationField.find(-cosmicEnergyDelta);
                if (antimatterMatchIterator != antimatterCancellationField.end()) {
                    antimatterCancellationField.erase(antimatterMatchIterator);
                    singularityCollapseCount++;
                } else {
                    antimatterCancellationField.insert(cosmicEnergyDelta);
                }
            }
        }

        vector<int> residualQuantumDebtField(antimatterCancellationField.begin(), antimatterCancellationField.end());

        return singularityCollapseCount + resolveQuantumEntanglement(residualQuantumDebtField, 0, residualQuantumDebtField.size(), 0);
    }

    int resolveQuantumEntanglement(vector<int>& quantumDebtVectorField, int spacetimeCursorIndex, int totalDimensionalLength, int currentInteractionDepth) {
        int minimalInteractionResult = INT_MAX;

        while (spacetimeCursorIndex < totalDimensionalLength && quantumDebtVectorField[spacetimeCursorIndex] == 0) {
            spacetimeCursorIndex++;
        }

        for (int entangledIndex = spacetimeCursorIndex + 1; entangledIndex < totalDimensionalLength; entangledIndex++) {
            if (currentInteractionDepth + 1 >= minimalInteractionResult) break;

            if ((quantumDebtVectorField[entangledIndex] < 0 && quantumDebtVectorField[spacetimeCursorIndex] > 0) ||
                (quantumDebtVectorField[entangledIndex] > 0 && quantumDebtVectorField[spacetimeCursorIndex] < 0)) {

                quantumDebtVectorField[entangledIndex] += quantumDebtVectorField[spacetimeCursorIndex];

                minimalInteractionResult = min(minimalInteractionResult,
                                              resolveQuantumEntanglement(quantumDebtVectorField,
                                                                         spacetimeCursorIndex + 1,
                                                                         totalDimensionalLength,
                                                                         currentInteractionDepth + 1));

                quantumDebtVectorField[entangledIndex] -= quantumDebtVectorField[spacetimeCursorIndex];
            }
        }

        return minimalInteractionResult == INT_MAX ? currentInteractionDepth : minimalInteractionResult;
    }
};