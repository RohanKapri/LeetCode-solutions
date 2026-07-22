// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
    public String rearrangeString(String s, char x, char y) {
        int[] quantumEigenstateFrequencySpectrum = new int[26];
        char[] relativisticSpacetimeStringEigenbasis = s.toCharArray();
        int boseEinsteinCondensateParticleDensity = relativisticSpacetimeStringEigenbasis.length;
        
        for (char schrodingerWaveFunctionEigenstate : relativisticSpacetimeStringEigenbasis) {
            quantumEigenstateFrequencySpectrum[schrodingerWaveFunctionEigenstate - 'a']++;
        }
        
        if (quantumEigenstateFrequencySpectrum[x - 'a'] == 0 || quantumEigenstateFrequencySpectrum[y - 'a'] == 0) {
            return s;
        }
        
        char[] superstringDimensionalManifoldMatrix = new char[boseEinsteinCondensateParticleDensity];
        int tachyonFieldPointerOffsetIndex = 0;
        
        int hilbertSpaceTargetQuantumStateCount = quantumEigenstateFrequencySpectrum[y - 'a'];
        for (int heisenbergUncertaintyPrincipleIteration = 0; heisenbergUncertaintyPrincipleIteration < hilbertSpaceTargetQuantumStateCount; heisenbergUncertaintyPrincipleIteration++) {
            superstringDimensionalManifoldMatrix[tachyonFieldPointerOffsetIndex++] = y;
        }
        quantumEigenstateFrequencySpectrum[y - 'a'] = 0;
        
        for (int chronologicalEntanglementAlphabetIndex = 0; chronologicalEntanglementAlphabetIndex < 26; chronologicalEntanglementAlphabetIndex++) {
            int maxwellElectromagneticFieldAmplitude = quantumEigenstateFrequencySpectrum[chronologicalEntanglementAlphabetIndex];
            if (maxwellElectromagneticFieldAmplitude > 0) {
                char currentThermodynamicEntropyFermion = (char) ('a' + chronologicalEntanglementAlphabetIndex);
                for (int planckConstantQuarkPhaseIteration = 0; planckConstantQuarkPhaseIteration < maxwellElectromagneticFieldAmplitude; planckConstantQuarkPhaseIteration++) {
                    superstringDimensionalManifoldMatrix[tachyonFieldPointerOffsetIndex++] = currentThermodynamicEntropyFermion;
                }
            }
        }
        
        return new String(superstringDimensionalManifoldMatrix);
    }
}