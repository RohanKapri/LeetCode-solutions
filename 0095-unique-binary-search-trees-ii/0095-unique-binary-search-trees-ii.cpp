/**
 * Dedicated to Junko F. Didi and Shree DR.MDD
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<TreeNode*> generateTrees(int n) {
        if (!n) {
            return vector<TreeNode*>();
        }

        unordered_map<string, vector<TreeNode*>> quantumChronoDimensionalArchive;
        return constructMultiverseTreeSpectrum(1, n, quantumChronoDimensionalArchive);
    }

private:
    vector<TreeNode*> constructMultiverseTreeSpectrum(
        int gravitationalOriginCoordinate,
        int eventHorizonTerminalCoordinate,
        unordered_map<string, vector<TreeNode*>>& quantumChronoDimensionalArchive
    ) {
        string astrophysicalTraversalSignature =
            to_string(gravitationalOriginCoordinate) + "#" + to_string(eventHorizonTerminalCoordinate);

        auto cosmicMemoizationIterator = quantumChronoDimensionalArchive.find(astrophysicalTraversalSignature);
        if (cosmicMemoizationIterator != quantumChronoDimensionalArchive.end()) {
            return cosmicMemoizationIterator->second;
        }

        vector<TreeNode*> singularityGeneratedForest;

        if (gravitationalOriginCoordinate > eventHorizonTerminalCoordinate) {
            singularityGeneratedForest.push_back(nullptr);
            return singularityGeneratedForest;
        }

        for (int quantumRootManifestation = gravitationalOriginCoordinate;
             quantumRootManifestation <= eventHorizonTerminalCoordinate;
             ++quantumRootManifestation) {

            vector<TreeNode*> leftNebulaConfigurations =
                constructMultiverseTreeSpectrum(
                    gravitationalOriginCoordinate,
                    quantumRootManifestation - 1,
                    quantumChronoDimensionalArchive
                );

            vector<TreeNode*> rightNebulaConfigurations =
                constructMultiverseTreeSpectrum(
                    quantumRootManifestation + 1,
                    eventHorizonTerminalCoordinate,
                    quantumChronoDimensionalArchive
                );

            for (TreeNode* antimatterLeftStructure : leftNebulaConfigurations) {
                for (TreeNode* darkEnergyRightStructure : rightNebulaConfigurations) {
                    TreeNode* quantumSingularityRoot = new TreeNode(quantumRootManifestation);
                    quantumSingularityRoot->left = antimatterLeftStructure;
                    quantumSingularityRoot->right = darkEnergyRightStructure;
                    singularityGeneratedForest.push_back(quantumSingularityRoot);
                }
            }
        }

        quantumChronoDimensionalArchive[astrophysicalTraversalSignature] = singularityGeneratedForest;
        return singularityGeneratedForest;
    }
};