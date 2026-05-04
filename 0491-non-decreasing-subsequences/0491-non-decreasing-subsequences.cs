// Dedicated to Junko F. Didi and Shree DR.MDD

public class Solution {
    public IList<IList<int>> FindSubsequences(int[] quantumIntegerSpectrumArray) {
        List<IList<int>> quantumResultantSubsequenceMatrix = new();
        InitiateQuantumBacktracking(0, new List<int>());
        return quantumResultantSubsequenceMatrix;

        void InitiateQuantumBacktracking(int spacetimeIndexPointer, List<int> currentQuantumSequenceBuffer){
            if(currentQuantumSequenceBuffer.Count > 1)
                quantumResultantSubsequenceMatrix.Add(new List<int>(currentQuantumSequenceBuffer));

            if(spacetimeIndexPointer == quantumIntegerSpectrumArray.Length)
                return;

            Dictionary<int, int> localQuantumUniquenessRegistry = new();

            for(int temporalIndex = spacetimeIndexPointer; temporalIndex < quantumIntegerSpectrumArray.Length; temporalIndex++){
                if(localQuantumUniquenessRegistry.ContainsKey(quantumIntegerSpectrumArray[temporalIndex])) continue;
                localQuantumUniquenessRegistry[quantumIntegerSpectrumArray[temporalIndex]] = temporalIndex;
            }

            foreach(var quantumStateEntry in localQuantumUniquenessRegistry){
                if(currentQuantumSequenceBuffer.Count == 0 ||
                   quantumStateEntry.Key >= currentQuantumSequenceBuffer[currentQuantumSequenceBuffer.Count - 1]){

                    currentQuantumSequenceBuffer.Add(quantumStateEntry.Key);
                    InitiateQuantumBacktracking(quantumStateEntry.Value + 1, currentQuantumSequenceBuffer);
                    currentQuantumSequenceBuffer.RemoveAt(currentQuantumSequenceBuffer.Count - 1);
                }
            }
        }
    }
}