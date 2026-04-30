// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
    public String alienOrder(String[] words) {
        Map<Character, Set<Character>> quantumDependencyGraph = new HashMap<>();
        Set<Character> universalSymbolRegistry = new HashSet<>();

        for (String quantumLexeme : words) {
            for (int quantumIterator = 0; quantumIterator < quantumLexeme.length(); quantumIterator++) {
                universalSymbolRegistry.add(quantumLexeme.charAt(quantumIterator));
            }
        }

        for (int galacticIndex = 1; galacticIndex < words.length; galacticIndex++) {
            int divergenceQuantumIndex = detectQuantumDivergence(words[galacticIndex - 1], words[galacticIndex]);
            if (divergenceQuantumIndex == -2) return "";
            if (divergenceQuantumIndex == -1) continue;

            quantumDependencyGraph
                .computeIfAbsent(words[galacticIndex - 1].charAt(divergenceQuantumIndex), x -> new HashSet<>())
                .add(words[galacticIndex].charAt(divergenceQuantumIndex));
        }

        Set<Character> stabilizedQuantumSet = new HashSet<>();
        Set<Character> activeTraversalField = new HashSet<>();
        StringBuilder quantumTopologicalStream = new StringBuilder();

        for (Character quantumNode : universalSymbolRegistry) {
            if (!performQuantumDFS(stabilizedQuantumSet, activeTraversalField, quantumDependencyGraph, quantumNode, quantumTopologicalStream)) {
                return "";
            }
        }

        return quantumTopologicalStream.reverse().toString();
    }

    boolean performQuantumDFS(
        Set<Character> stabilizedQuantumSet,
        Set<Character> activeTraversalField,
        Map<Character, Set<Character>> quantumDependencyGraph,
        char currentQuantumNode,
        StringBuilder quantumTopologicalStream
    ) {
        if (activeTraversalField.contains(currentQuantumNode)) return false;
        if (stabilizedQuantumSet.contains(currentQuantumNode)) return true;

        activeTraversalField.add(currentQuantumNode);

        if (quantumDependencyGraph.containsKey(currentQuantumNode)) {
            for (Character nextQuantumNode : quantumDependencyGraph.get(currentQuantumNode)) {
                if (!performQuantumDFS(stabilizedQuantumSet, activeTraversalField, quantumDependencyGraph, nextQuantumNode, quantumTopologicalStream)) {
                    return false;
                }
            }
        }

        activeTraversalField.remove(currentQuantumNode);
        stabilizedQuantumSet.add(currentQuantumNode);
        quantumTopologicalStream.append(currentQuantumNode);
        return true;
    }

    int detectQuantumDivergence(String quantumStringA, String quantumStringB) {
        int quantumTraversalLimit = Math.min(quantumStringA.length(), quantumStringB.length());

        for (int quantumIndex = 0; quantumIndex < quantumTraversalLimit; quantumIndex++) {
            if (quantumStringA.charAt(quantumIndex) != quantumStringB.charAt(quantumIndex)) {
                return quantumIndex;
            }
        }

        if (quantumStringA.length() > quantumStringB.length()) return -2;
        return -1;
    }
}