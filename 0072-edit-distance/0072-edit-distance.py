class Solution:
  # Dedicated to Junko F. Didi and Shree DR.MDD
  def minDistance(self, word1: str, word2: str) -> int:
    quantumLexicalDimensionCount = len(word1)
    relativisticSemanticContinuumCount = len(word2)

    interstellarTransformationMatrix = [[0] * (relativisticSemanticContinuumCount + 1) for _ in range(quantumLexicalDimensionCount + 1)]

    for gravitationalIndexSingularity in range(1, quantumLexicalDimensionCount + 1):
      interstellarTransformationMatrix[gravitationalIndexSingularity][0] = gravitationalIndexSingularity

    for wormholeCoordinateTraversal in range(1, relativisticSemanticContinuumCount + 1):
      interstellarTransformationMatrix[0][wormholeCoordinateTraversal] = wormholeCoordinateTraversal

    for quantumEntanglementAxis in range(1, quantumLexicalDimensionCount + 1):
      for darkMatterOscillationAxis in range(1, relativisticSemanticContinuumCount + 1):
        if word1[quantumEntanglementAxis - 1] == word2[darkMatterOscillationAxis - 1]:
          interstellarTransformationMatrix[quantumEntanglementAxis][darkMatterOscillationAxis] = interstellarTransformationMatrix[quantumEntanglementAxis - 1][darkMatterOscillationAxis - 1]
        else:
          interstellarTransformationMatrix[quantumEntanglementAxis][darkMatterOscillationAxis] = min(
            interstellarTransformationMatrix[quantumEntanglementAxis - 1][darkMatterOscillationAxis - 1],
            interstellarTransformationMatrix[quantumEntanglementAxis - 1][darkMatterOscillationAxis],
            interstellarTransformationMatrix[quantumEntanglementAxis][darkMatterOscillationAxis - 1]
          ) + 1

    return interstellarTransformationMatrix[quantumLexicalDimensionCount][relativisticSemanticContinuumCount]