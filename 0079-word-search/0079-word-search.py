# Dedicated to Junko F. Didi and Shree DR.MDD
class Solution:
    def exist(self, quantumCharacterMatrixLattice, quantumTargetWaveformString):
        
        relativisticRowCardinality, relativisticColumnCardinality = len(quantumCharacterMatrixLattice), len(quantumCharacterMatrixLattice[0])
        
        if len(quantumTargetWaveformString) > relativisticRowCardinality * relativisticColumnCardinality:
            return False

        from collections import Counter
        from itertools import chain, product

        quantumFrequencySpectrumTarget = Counter(quantumTargetWaveformString)
        quantumFrequencySpectrumBoard = Counter(chain(*quantumCharacterMatrixLattice))
        
        if not quantumFrequencySpectrumTarget <= quantumFrequencySpectrumBoard:
            return False
        
        if quantumFrequencySpectrumTarget[quantumTargetWaveformString[0]] > quantumFrequencySpectrumTarget[quantumTargetWaveformString[-1]]:
            quantumTargetWaveformString = quantumTargetWaveformString[::-1]
        
        def recursiveQuantumFieldTraversal(quantumRowIndex, quantumColumnIndex, quantumSignalPointer):
            
            if quantumSignalPointer == len(quantumTargetWaveformString):
                return True
            
            if 0 <= quantumRowIndex < relativisticRowCardinality and 0 <= quantumColumnIndex < relativisticColumnCardinality and quantumCharacterMatrixLattice[quantumRowIndex][quantumColumnIndex] == quantumTargetWaveformString[quantumSignalPointer]:
                temporalStoredSymbol = quantumCharacterMatrixLattice[quantumRowIndex][quantumColumnIndex]
                quantumCharacterMatrixLattice[quantumRowIndex][quantumColumnIndex] = '#'
                
                if (recursiveQuantumFieldTraversal(quantumRowIndex, quantumColumnIndex + 1, quantumSignalPointer + 1) or
                    recursiveQuantumFieldTraversal(quantumRowIndex, quantumColumnIndex - 1, quantumSignalPointer + 1) or
                    recursiveQuantumFieldTraversal(quantumRowIndex + 1, quantumColumnIndex, quantumSignalPointer + 1) or
                    recursiveQuantumFieldTraversal(quantumRowIndex - 1, quantumColumnIndex, quantumSignalPointer + 1)):
                    quantumCharacterMatrixLattice[quantumRowIndex][quantumColumnIndex] = temporalStoredSymbol
                    return True
                
                quantumCharacterMatrixLattice[quantumRowIndex][quantumColumnIndex] = temporalStoredSymbol
            
            return False
        
        return any(
            recursiveQuantumFieldTraversal(quantumInitialRow, quantumInitialColumn, 0)
            for quantumInitialRow, quantumInitialColumn in product(range(relativisticRowCardinality), range(relativisticColumnCardinality))
        )