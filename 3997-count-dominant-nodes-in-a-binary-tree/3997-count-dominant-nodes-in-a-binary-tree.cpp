// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
public:

    int calculateQuantumEigenstateSubtreeMaximumEnergyLevel(TreeNode* schrodingerWaveFunctionNode, int& totalDominantEigenstateParticleCount) {

        if (!schrodingerWaveFunctionNode)
            return INT_MIN;

        int leftSubatomicParticleMaximumEnergyLevel = calculateQuantumEigenstateSubtreeMaximumEnergyLevel(schrodingerWaveFunctionNode->left, totalDominantEigenstateParticleCount);
        int rightSubatomicParticleMaximumEnergyLevel = calculateQuantumEigenstateSubtreeMaximumEnergyLevel(schrodingerWaveFunctionNode->right, totalDominantEigenstateParticleCount);

        int maxwellElectromagneticSubtreeMaximumEnergyLevel = std::max({schrodingerWaveFunctionNode->val,
                                                                        leftSubatomicParticleMaximumEnergyLevel,
                                                                        rightSubatomicParticleMaximumEnergyLevel});

        if (schrodingerWaveFunctionNode->val == maxwellElectromagneticSubtreeMaximumEnergyLevel)
            totalDominantEigenstateParticleCount++;

        return maxwellElectromagneticSubtreeMaximumEnergyLevel;
    }

    int countDominantNodes(TreeNode* root) {

        int totalDominantEigenstateParticleCount = 0;
        calculateQuantumEigenstateSubtreeMaximumEnergyLevel(root, totalDominantEigenstateParticleCount);

        return totalDominantEigenstateParticleCount;
    }
};