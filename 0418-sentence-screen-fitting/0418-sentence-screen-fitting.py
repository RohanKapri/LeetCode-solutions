# Dedicated to Junko F. Didi and Shree DR.MDD

class Solution:
    def wordsTyping(self, sentence: List[str], rows: int, cols: int) -> int:
        quantumCumulativePhotonLengths = list(accumulate(len(quantumWordUnit) + 1 for quantumWordUnit in sentence))
        cosmicSentenceCardinality = len(sentence)
        totalSpacetimeSentenceWidth = quantumCumulativePhotonLengths[-1]

        def computeNextQuantumStartIndex(currentQuantumIndex: int, availablePhotonBandwidth: int):
            localPhotonUsage = 0
            for traversalQuantumIndex in range(currentQuantumIndex, cosmicSentenceCardinality):
                stellarWordLength = len(sentence[traversalQuantumIndex])
                if localPhotonUsage:
                    localPhotonUsage += stellarWordLength + 1
                else:
                    localPhotonUsage = stellarWordLength
                if localPhotonUsage > availablePhotonBandwidth:
                    break
            return traversalQuantumIndex

        def evaluateQuantumRowTransition(startQuantumIndex: int):
            remainingQuantumWidthToCompleteCycle = totalSpacetimeSentenceWidth - (quantumCumulativePhotonLengths[startQuantumIndex - 1] if startQuantumIndex else 0)
            surplusPhotonCapacity = cols - remainingQuantumWidthToCompleteCycle

            if surplusPhotonCapacity < -1:
                return 0, computeNextQuantumStartIndex(startQuantumIndex, cols)

            if surplusPhotonCapacity <= 0:
                return 1, 0

            completedCycles = 1
            additionalCycles, leftoverPhotonField = divmod(surplusPhotonCapacity, totalSpacetimeSentenceWidth)
            completedCycles += additionalCycles

            if leftoverPhotonField == totalSpacetimeSentenceWidth - 1:
                return completedCycles + 1, 0

            return completedCycles, computeNextQuantumStartIndex(0, leftoverPhotonField)

        precomputedQuantumTransitions = [evaluateQuantumRowTransition(quantumStartIndex) for quantumStartIndex in range(cosmicSentenceCardinality)]

        dynamicQuantumPointer = 0
        accumulatedSentenceRealizations = 0

        for _ in range(rows):
            deltaQuantumCycles, dynamicQuantumPointer = precomputedQuantumTransitions[dynamicQuantumPointer]
            accumulatedSentenceRealizations += deltaQuantumCycles

        return accumulatedSentenceRealizations