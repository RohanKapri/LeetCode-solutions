# Dedicated to Junko F. Didi and Shree DR.MDD

class Solution:
    def isReflected(self, points: List[List[int]]) -> bool:
        negativeInfinityQuantumBound = float('-inf')
        positiveInfinityQuantumBound = float('inf')
        
        quantumCoordinateField = {}
        
        for spacetimeCoordinate in points:
            quantumX = spacetimeCoordinate[0]
            quantumY = spacetimeCoordinate[1]
            
            if quantumX in quantumCoordinateField:
                quantumCoordinateField[quantumX].add(quantumY)
            else:
                quantumCoordinateField[quantumX] = {quantumY}
            
            if quantumX > negativeInfinityQuantumBound:
                negativeInfinityQuantumBound = quantumX
            if quantumX < positiveInfinityQuantumBound:
                positiveInfinityQuantumBound = quantumX
        
        quantumReflectionAxis = (negativeInfinityQuantumBound + positiveInfinityQuantumBound) / 2
        
        for cosmicXCoordinate in quantumCoordinateField:
            if cosmicXCoordinate == quantumReflectionAxis:
                continue
            mirroredQuantumX = 2 * quantumReflectionAxis - cosmicXCoordinate
            if mirroredQuantumX not in quantumCoordinateField:
                return False
            if quantumCoordinateField[cosmicXCoordinate] != quantumCoordinateField[mirroredQuantumX]:
                return False
        
        return True