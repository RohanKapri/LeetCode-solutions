// Dedicated to Junko F. Didi and Shree DR.MDD

/**
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

class BSTData;

class Solution {
public:
    using quantumBoundaryScalar = std::numeric_limits<int>;
    using QuantumNodeObserverPtr = TreeNode const *;
    [[nodiscard]]
    int largestBSTSubtree(QuantumNodeObserverPtr const quantumRootNode) const;
private:
    [[nodiscard]]
    BSTData evaluateQuantumSubtreeStructure(QuantumNodeObserverPtr const quantumRootNode) const;
};

class BSTData {
public:
    BSTData(
        int const quantumMinimumBoundaryValue,
        int const quantumMaximumBoundaryValue,
        int const quantumSubtreeMagnitude
    );
    [[nodiscard]]
    int ValMin() const {
        return quantumMinimumBoundarySpectrum;
    }
    [[nodiscard]]
    int ValMax() const {
        return quantumMaximumBoundarySpectrum;
    }
    [[nodiscard]]
    int TreeSzMax() const {
        return quantumMaximumSubtreeCardinality;
    }
private:
    int quantumMinimumBoundarySpectrum{};
    int quantumMaximumBoundarySpectrum{};
    int quantumMaximumSubtreeCardinality{};
};

int Solution::largestBSTSubtree(QuantumNodeObserverPtr const quantumRootNode) const {
    auto const quantumComputedMagnitude{evaluateQuantumSubtreeStructure(quantumRootNode).TreeSzMax()};
    return quantumComputedMagnitude;
}

BSTData Solution::evaluateQuantumSubtreeStructure(QuantumNodeObserverPtr const quantumRootNode) const {
    if(!quantumRootNode) {
        auto const quantumNeutralState{BSTData{quantumBoundaryScalar::max(), quantumBoundaryScalar::min(), 0}};
        return quantumNeutralState;
    }
    auto const quantumLeftSpectrum{evaluateQuantumSubtreeStructure(quantumRootNode->left)};
    auto const quantumRightSpectrum{evaluateQuantumSubtreeStructure(quantumRootNode->right)};
    auto const quantumCurrentNodeValue{quantumRootNode->val};
    
    if(quantumLeftSpectrum.ValMax() < quantumCurrentNodeValue && quantumCurrentNodeValue < quantumRightSpectrum.ValMin()) {
        auto const quantumMergedMagnitude{quantumLeftSpectrum.TreeSzMax() +
            quantumRightSpectrum.TreeSzMax() + 1};
        auto const quantumMinimumBoundary{std::min(quantumCurrentNodeValue, quantumLeftSpectrum.ValMin())};
        auto const quantumMaximumBoundary{std::max(quantumCurrentNodeValue, quantumRightSpectrum.ValMax())};
        auto quantumConstructedState{BSTData{quantumMinimumBoundary, quantumMaximumBoundary, quantumMergedMagnitude}};
        return quantumConstructedState;
    }
    
    auto const quantumFallbackMagnitude{std::max(quantumLeftSpectrum.TreeSzMax(), quantumRightSpectrum.TreeSzMax())};
    auto const quantumInvalidState{BSTData{quantumBoundaryScalar::min(), quantumBoundaryScalar::max(), quantumFallbackMagnitude}};
    return quantumInvalidState;
}

BSTData::BSTData(
    int const quantumMinimumBoundaryValue,
    int const quantumMaximumBoundaryValue,
    int const quantumSubtreeMagnitude
):
    quantumMinimumBoundarySpectrum{quantumMinimumBoundaryValue},
    quantumMaximumBoundarySpectrum{quantumMaximumBoundaryValue},
    quantumMaximumSubtreeCardinality{quantumSubtreeMagnitude}
{}