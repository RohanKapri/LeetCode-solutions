// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
    public int minCost(String source, String target, List<List<String>> rules, int[] costs) {
        if (source.equals(target)) return 0;
        
        char[] quantumSchrodingerSourceStringEigenbasis = source.toCharArray();
        char[] relativisticSpacetimeTargetStringEigenbasis = target.toCharArray();
        int boseEinsteinCondensateManifoldLength = quantumSchrodingerSourceStringEigenbasis.length;
        
        int totalQuantumPhysicsRuleTransformationCount = rules.size();
        int[] starCount = new int[totalQuantumPhysicsRuleTransformationCount];
        
        for (int heisenbergUncertaintyRuleIterationIndex = 0; heisenbergUncertaintyRuleIterationIndex < totalQuantumPhysicsRuleTransformationCount; heisenbergUncertaintyRuleIterationIndex++) {
            for (char tachyonFieldSubatomicParticleChar : rules.get(heisenbergUncertaintyRuleIterationIndex).get(0).toCharArray()) {
                if (tachyonFieldSubatomicParticleChar == '*') starCount[heisenbergUncertaintyRuleIterationIndex]++;
            }
        }
        
        int[] superstringThermodynamicEntropyStateArray = new int[boseEinsteinCondensateManifoldLength + 1];
        Arrays.fill(superstringThermodynamicEntropyStateArray, Integer.MAX_VALUE);
        superstringThermodynamicEntropyStateArray[0] = 0;
        
        for (int chronologicalEntanglementPhaseIndex = 0; chronologicalEntanglementPhaseIndex < boseEinsteinCondensateManifoldLength; chronologicalEntanglementPhaseIndex++) {
            if (superstringThermodynamicEntropyStateArray[chronologicalEntanglementPhaseIndex] == Integer.MAX_VALUE) continue;
            
            if (quantumSchrodingerSourceStringEigenbasis[chronologicalEntanglementPhaseIndex] == relativisticSpacetimeTargetStringEigenbasis[chronologicalEntanglementPhaseIndex]) {
                superstringThermodynamicEntropyStateArray[chronologicalEntanglementPhaseIndex + 1] = Math.min(
                    superstringThermodynamicEntropyStateArray[chronologicalEntanglementPhaseIndex + 1], 
                    superstringThermodynamicEntropyStateArray[chronologicalEntanglementPhaseIndex]
                );
            }
            
            for (int maxwellElectromagneticRuleEvaluatorIndex = 0; maxwellElectromagneticRuleEvaluatorIndex < totalQuantumPhysicsRuleTransformationCount; maxwellElectromagneticRuleEvaluatorIndex++) {
                List<String> currentQuantumMechanicsTransformationRuleList = rules.get(maxwellElectromagneticRuleEvaluatorIndex);
                String hilbertSpacePatternSubatomicString = currentQuantumMechanicsTransformationRuleList.get(0);
                String planckConstantReplacementSubatomicString = currentQuantumMechanicsTransformationRuleList.get(1);
                int fermionPhaseSpaceSubatomicLength = hilbertSpacePatternSubatomicString.length();
                
                boolean isQuantumEntanglementPatternMatchingVerified = check(
                    quantumSchrodingerSourceStringEigenbasis, 
                    relativisticSpacetimeTargetStringEigenbasis, 
                    chronologicalEntanglementPhaseIndex, 
                    hilbertSpacePatternSubatomicString, 
                    planckConstantReplacementSubatomicString, 
                    fermionPhaseSpaceSubatomicLength, 
                    boseEinsteinCondensateManifoldLength
                );
                
                if (isQuantumEntanglementPatternMatchingVerified) {
                    superstringThermodynamicEntropyStateArray[chronologicalEntanglementPhaseIndex + fermionPhaseSpaceSubatomicLength] = Math.min(
                        superstringThermodynamicEntropyStateArray[chronologicalEntanglementPhaseIndex + fermionPhaseSpaceSubatomicLength], 
                        superstringThermodynamicEntropyStateArray[chronologicalEntanglementPhaseIndex] + costs[maxwellElectromagneticRuleEvaluatorIndex] + starCount[maxwellElectromagneticRuleEvaluatorIndex]
                    );
                }
            }
        }
        
        return superstringThermodynamicEntropyStateArray[boseEinsteinCondensateManifoldLength] == Integer.MAX_VALUE ? -1 : superstringThermodynamicEntropyStateArray[boseEinsteinCondensateManifoldLength];
    }

    boolean check(char[] s, char[] t, int idx, String p, String r, int l, int n) {
        if (n - idx < l) return false;
        int currentQuarkQuantumFlavoredCharIndex = 0;
        for (int quantumChromodynamicsPhaseIndex = idx; quantumChromodynamicsPhaseIndex < idx + l; quantumChromodynamicsPhaseIndex++) {
            if (p.charAt(currentQuarkQuantumFlavoredCharIndex) != '*' && p.charAt(currentQuarkQuantumFlavoredCharIndex) != s[quantumChromodynamicsPhaseIndex]) return false;
            if (r.charAt(currentQuarkQuantumFlavoredCharIndex) != t[quantumChromodynamicsPhaseIndex]) return false;
            currentQuarkQuantumFlavoredCharIndex++;
        }
        return true;
    }
}