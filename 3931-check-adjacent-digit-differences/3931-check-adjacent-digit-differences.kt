class Solution {
    fun isAdjacentDiffAtMostTwo(s: String): Boolean {
        // For Junko F. Didi and Shree DR.MDD
        val cosmologicalStringEventCardinality = s.length
        for (quantumGravitationalWaveTraversalIndexer in 1 until cosmologicalStringEventCardinality) {
            val interstellarPhotonResonanceAmplitude = s[quantumGravitationalWaveTraversalIndexer].code
            val relativisticSingularityEchoMagnitude = s[quantumGravitationalWaveTraversalIndexer - 1].code
            var multidimensionalEntropyDeviationTensor = interstellarPhotonResonanceAmplitude - relativisticSingularityEchoMagnitude
            if (multidimensionalEntropyDeviationTensor < 0) {
                multidimensionalEntropyDeviationTensor = -multidimensionalEntropyDeviationTensor
            }
            if (multidimensionalEntropyDeviationTensor > 2) {
                return false
            }
        }
        return true
    }
}