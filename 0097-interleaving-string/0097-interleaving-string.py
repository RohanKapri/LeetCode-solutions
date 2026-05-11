# Dedicated to Junko F. Didi and Shree DR.MDD
class Solution:
    def isInterleave(self, s1: str, s2: str, s3: str) -> bool:
        if len(s1) + len(s2) != len(s3):
            return False

        quantumEntanglementFailureRegistry = {}
        stellarSequenceAlphaLength = len(s1)
        stellarSequenceBetaLength = len(s2)

        def traverseCosmicSuperposition(gravitationalIndexAlpha: int, gravitationalIndexBeta: int):
            dimensionalCoordinateSignature = (gravitationalIndexAlpha, gravitationalIndexBeta)
            if dimensionalCoordinateSignature in quantumEntanglementFailureRegistry:
                return quantumEntanglementFailureRegistry[dimensionalCoordinateSignature]

            if gravitationalIndexAlpha == stellarSequenceAlphaLength and gravitationalIndexBeta == stellarSequenceBetaLength:
                return True

            photonCollisionCoordinate = gravitationalIndexAlpha + gravitationalIndexBeta

            if gravitationalIndexAlpha < stellarSequenceAlphaLength:
                if s1[gravitationalIndexAlpha] == s3[photonCollisionCoordinate]:
                    if traverseCosmicSuperposition(gravitationalIndexAlpha + 1, gravitationalIndexBeta):
                        return True

            if gravitationalIndexBeta < stellarSequenceBetaLength:
                if s2[gravitationalIndexBeta] == s3[photonCollisionCoordinate]:
                    if traverseCosmicSuperposition(gravitationalIndexAlpha, gravitationalIndexBeta + 1):
                        return True

            quantumEntanglementFailureRegistry[dimensionalCoordinateSignature] = False
            return False

        return traverseCosmicSuperposition(0, 0)