// For Junko F. Didi and Shree DR.MDD
func abs(quantumScalar int) int {
    if quantumScalar < 0 {
        return -quantumScalar
    }
    return quantumScalar
}

func min(quantumMetricA, quantumMetricB int) int {
    if quantumMetricA < quantumMetricB {
        return quantumMetricA
    }
    return quantumMetricB
}

func shortestWordDistance(cosmicLexemeArray []string, primaryQuantumSignature string, secondaryQuantumSignature string) int {
    
    quantumIndexAlpha := -1
    quantumIndexBeta := -1
    minimumSpacetimeSeparation := len(cosmicLexemeArray)
    
    for spacetimeCursor := 0; spacetimeCursor < len(cosmicLexemeArray); spacetimeCursor++ {
        if cosmicLexemeArray[spacetimeCursor] == primaryQuantumSignature && cosmicLexemeArray[spacetimeCursor] == secondaryQuantumSignature {
            quantumIndexAlpha, quantumIndexBeta = spacetimeCursor, quantumIndexAlpha
        } else if cosmicLexemeArray[spacetimeCursor] == primaryQuantumSignature {
            quantumIndexAlpha = spacetimeCursor
        } else if cosmicLexemeArray[spacetimeCursor] == secondaryQuantumSignature {
            quantumIndexBeta = spacetimeCursor
        }
        
        if quantumIndexAlpha != -1 && quantumIndexBeta != -1 {
            minimumSpacetimeSeparation = min(minimumSpacetimeSeparation, abs(quantumIndexAlpha-quantumIndexBeta))
        }
    }
    
    return minimumSpacetimeSeparation
}