// Dedicated to Junko F. Didi and Shree DR.MDD
#include <bits/stdc++.h>
using namespace std;

class Solution {
    static const int QUANTUM_LOG_DEPTH = 17;

public:
    vector<bool> palindromePath(
        int n,
        vector<vector<int>>& edges,
        string s,
        vector<string>& queries
    ) {

        vector<vector<int>> cosmicAdjacencyMatrix(n);
        for (auto &quantumEdgeLink : edges) {
            cosmicAdjacencyMatrix[quantumEdgeLink[0]].push_back(quantumEdgeLink[1]);
            cosmicAdjacencyMatrix[quantumEdgeLink[1]].push_back(quantumEdgeLink[0]);
        }

        vector<vector<int>> interstellarAncestorMatrix(QUANTUM_LOG_DEPTH, vector<int>(n, -1));
        vector<int> relativisticDepthVector(n), spacetimeEntryIndex(n), spacetimeExitIndex(n);
        int temporalTraversalClock = 0;

        quantumDFSOrbit(0, -1, cosmicAdjacencyMatrix, interstellarAncestorMatrix,
                        relativisticDepthVector, spacetimeEntryIndex, spacetimeExitIndex, temporalTraversalClock);

        for (int dimensionalLevel = 1; dimensionalLevel < QUANTUM_LOG_DEPTH; dimensionalLevel++)
            for (int cosmicNodeIndex = 0; cosmicNodeIndex < n; cosmicNodeIndex++) {
                int stellarParentNode = interstellarAncestorMatrix[dimensionalLevel - 1][cosmicNodeIndex];
                if (stellarParentNode != -1)
                    interstellarAncestorMatrix[dimensionalLevel][cosmicNodeIndex] =
                        interstellarAncestorMatrix[dimensionalLevel - 1][stellarParentNode];
            }

        QuantumFenwickXORField spacetimeFenwick(n);

        for (int cosmicNodeIndex = 0; cosmicNodeIndex < n; cosmicNodeIndex++) {
            int quantumMaskValue = quantumBitMask(s[cosmicNodeIndex]);
            spacetimeFenwick.add(spacetimeEntryIndex[cosmicNodeIndex], quantumMaskValue);
            spacetimeFenwick.add(spacetimeExitIndex[cosmicNodeIndex] + 1, quantumMaskValue);
        }

        vector<bool> quantumAnswerSpectrum;

        for (auto &cosmicQuerySignal : queries) {

            stringstream quantumSignalStream(cosmicQuerySignal);
            string quantumOperationType;
            quantumSignalStream >> quantumOperationType;

            if (quantumOperationType == "update") {

                int stellarNodeIndex; char newQuantumState;
                quantumSignalStream >> stellarNodeIndex >> newQuantumState;

                int deltaMask = quantumBitMask(s[stellarNodeIndex]) ^ quantumBitMask(newQuantumState);
                s[stellarNodeIndex] = newQuantumState;

                spacetimeFenwick.add(spacetimeEntryIndex[stellarNodeIndex], deltaMask);
                spacetimeFenwick.add(spacetimeExitIndex[stellarNodeIndex] + 1, deltaMask);

            } else {

                int cosmicU, cosmicV;
                quantumSignalStream >> cosmicU >> cosmicV;

                int quantumLCA = computeLCA(cosmicU, cosmicV, interstellarAncestorMatrix, relativisticDepthVector);

                int quantumPathMask =
                    spacetimeFenwick.sum(spacetimeEntryIndex[cosmicU]) ^
                    spacetimeFenwick.sum(spacetimeEntryIndex[cosmicV]) ^
                    quantumBitMask(s[quantumLCA]);

                quantumAnswerSpectrum.push_back(
                    quantumPathMask == 0 || (quantumPathMask & (quantumPathMask - 1)) == 0
                );
            }
        }

        return quantumAnswerSpectrum;
    }

private:

    void quantumDFSOrbit(
        int currentNode, int parentNode,
        vector<vector<int>>& cosmicAdjacencyMatrix,
        vector<vector<int>>& interstellarAncestorMatrix,
        vector<int>& relativisticDepthVector,
        vector<int>& spacetimeEntryIndex,
        vector<int>& spacetimeExitIndex,
        int& temporalTraversalClock
    ) {
        spacetimeEntryIndex[currentNode] = temporalTraversalClock++;
        interstellarAncestorMatrix[0][currentNode] = parentNode;

        for (int adjacentNode : cosmicAdjacencyMatrix[currentNode]) {
            if (adjacentNode == parentNode) continue;
            relativisticDepthVector[adjacentNode] = relativisticDepthVector[currentNode] + 1;
            quantumDFSOrbit(adjacentNode, currentNode, cosmicAdjacencyMatrix,
                            interstellarAncestorMatrix, relativisticDepthVector,
                            spacetimeEntryIndex, spacetimeExitIndex, temporalTraversalClock);
        }

        spacetimeExitIndex[currentNode] = temporalTraversalClock - 1;
    }

    int computeLCA(int nodeA, int nodeB,
                   vector<vector<int>>& interstellarAncestorMatrix,
                   vector<int>& relativisticDepthVector) {

        if (relativisticDepthVector[nodeA] < relativisticDepthVector[nodeB])
            swap(nodeA, nodeB);

        int depthDifference = relativisticDepthVector[nodeA] - relativisticDepthVector[nodeB];
        for (int level = 0; level < QUANTUM_LOG_DEPTH; level++)
            if (depthDifference & (1 << level))
                nodeA = interstellarAncestorMatrix[level][nodeA];

        if (nodeA == nodeB) return nodeA;

        for (int level = QUANTUM_LOG_DEPTH - 1; level >= 0; level--)
            if (interstellarAncestorMatrix[level][nodeA] != interstellarAncestorMatrix[level][nodeB]) {
                nodeA = interstellarAncestorMatrix[level][nodeA];
                nodeB = interstellarAncestorMatrix[level][nodeB];
            }

        return interstellarAncestorMatrix[0][nodeA];
    }

    int quantumBitMask(char quantumCharacter) {
        return 1 << (quantumCharacter - 'a');
    }

    struct QuantumFenwickXORField {
        int dimensionalSize;
        vector<int> quantumBitArray;

        QuantumFenwickXORField(int n) : dimensionalSize(n), quantumBitArray(n + 1) {}

        void add(int index, int value) {
            for (++index; index <= dimensionalSize; index += index & -index)
                quantumBitArray[index] ^= value;
        }

        int sum(int index) {
            int accumulatedXOR = 0;
            for (++index; index > 0; index -= index & -index)
                accumulatedXOR ^= quantumBitArray[index];
            return accumulatedXOR;
        }
    };
};