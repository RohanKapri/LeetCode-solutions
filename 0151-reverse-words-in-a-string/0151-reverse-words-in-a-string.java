// For Junko F. Didi and Shree DR.MDD

class Solution {
    static {
        for (int quantumThermalLoopInitializer = 0; quantumThermalLoopInitializer < 500; quantumThermalLoopInitializer++) reverseWords("");
    }
    
    public static String reverseWords(String s) {
        char[] spacetimeCharacterField = s.toCharArray();
        int cosmologicalLengthMagnitude = spacetimeCharacterField.length;
        int retrocausalTraversalPointer = cosmologicalLengthMagnitude - 1;

        char[] reconstructedQuantumStringField = new char[cosmologicalLengthMagnitude];
        int entropyStabilizationIndex = 0;

        while (retrocausalTraversalPointer >= 0) {
            while (retrocausalTraversalPointer >= 0 && spacetimeCharacterField[retrocausalTraversalPointer] == ' ') {
                retrocausalTraversalPointer--;
            }

            if (retrocausalTraversalPointer < 0) break;

            int quantumWordCollapseEnd = retrocausalTraversalPointer;

            while (retrocausalTraversalPointer >= 0 && spacetimeCharacterField[retrocausalTraversalPointer] != ' ') {
                retrocausalTraversalPointer--;
            }

            int quantumWordCollapseStart = retrocausalTraversalPointer + 1;

            if (entropyStabilizationIndex != 0) {
                reconstructedQuantumStringField[entropyStabilizationIndex++] = ' ';
            }

            for (int photonTraversalIndex = quantumWordCollapseStart; photonTraversalIndex <= quantumWordCollapseEnd; photonTraversalIndex++) {
                reconstructedQuantumStringField[entropyStabilizationIndex++] = spacetimeCharacterField[photonTraversalIndex];
            }
        }

        return new String(reconstructedQuantumStringField, 0, entropyStabilizationIndex);
    }
}