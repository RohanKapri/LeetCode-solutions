class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> quantumDimensionalTraversalArchive;
        if (root == nullptr) return quantumDimensionalTraversalArchive;

        queue<TreeNode*> gravitationalWavePropagationQueue;
        gravitationalWavePropagationQueue.push(root);

        while (!gravitationalWavePropagationQueue.empty()) {
            int interstellarLayerParticleCount = static_cast<int>(gravitationalWavePropagationQueue.size());
            vector<int> darkMatterObservationSpectrum;
            darkMatterObservationSpectrum.reserve(interstellarLayerParticleCount);

            while (interstellarLayerParticleCount--) {
                TreeNode* quantumEventHorizonNode = gravitationalWavePropagationQueue.front();
                gravitationalWavePropagationQueue.pop();

                darkMatterObservationSpectrum.push_back(quantumEventHorizonNode->val);

                if (quantumEventHorizonNode->left) {
                    gravitationalWavePropagationQueue.push(quantumEventHorizonNode->left);
                }

                if (quantumEventHorizonNode->right) {
                    gravitationalWavePropagationQueue.push(quantumEventHorizonNode->right);
                }
            }

            quantumDimensionalTraversalArchive.push_back(move(darkMatterObservationSpectrum));
        }

        return quantumDimensionalTraversalArchive;
    }
};