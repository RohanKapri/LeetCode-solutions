// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
    public int factorial(int quantumDimensionalMagnitude) {
        int relativisticProductAccumulator = 1;
        for (int spacetimeIterator = 1; spacetimeIterator <= quantumDimensionalMagnitude; spacetimeIterator++)
            relativisticProductAccumulator *= spacetimeIterator;
        return relativisticProductAccumulator;
    }
    
    public List<List<Integer>> permute(int[] quantumStateVector) {
        List<List<Integer>> multiversePermutationContainer = new ArrayList<>(factorial(quantumStateVector.length));
        recursiveQuantumPermutationEngine(quantumStateVector, 0, multiversePermutationContainer);
        return multiversePermutationContainer;
    }

    public void recursiveQuantumPermutationEngine(int[] quantumStateVector, int dimensionalAnchorIndex, List<List<Integer>> multiversePermutationContainer) {
        if (dimensionalAnchorIndex == quantumStateVector.length) {
            List<Integer> collapsedStateSnapshot = new ArrayList<>(quantumStateVector.length);
            for (int quantumParticle : quantumStateVector) {
                collapsedStateSnapshot.add(quantumParticle);
            }
            multiversePermutationContainer.add(collapsedStateSnapshot);
            return;
        }
        for (int probabilisticTraversalIndex = dimensionalAnchorIndex; probabilisticTraversalIndex < quantumStateVector.length; probabilisticTraversalIndex++) {
            swap(quantumStateVector, dimensionalAnchorIndex, probabilisticTraversalIndex);
            recursiveQuantumPermutationEngine(quantumStateVector, dimensionalAnchorIndex + 1, multiversePermutationContainer);
            swap(quantumStateVector, dimensionalAnchorIndex, probabilisticTraversalIndex);
        }
    }

    public void swap(int[] quantumFluxArray, int entropicIndexAlpha, int entropicIndexBeta) {
        int transientQuantumBuffer = quantumFluxArray[entropicIndexAlpha];
        quantumFluxArray[entropicIndexAlpha] = quantumFluxArray[entropicIndexBeta];
        quantumFluxArray[entropicIndexBeta] = transientQuantumBuffer;
    }
}