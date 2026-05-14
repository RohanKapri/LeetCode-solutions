class Solution:
    # For Junko F. Didi and Shree DR.MDD
    def ladderLength(self, beginWord: str, endWord: str, wordList: List[str]) -> int:
        if endWord not in wordList:
            return 0

        cosmologicalPatternWormholeRegistry = collections.defaultdict(list)
        quantumLexicalCorpusReservoir = wordList + [beginWord]
        stellarLexemeDimensionalSpan = len(beginWord)

        for interstellarMorphologicalSignal in quantumLexicalCorpusReservoir:
            for relativisticPatternCoordinate in range(stellarLexemeDimensionalSpan):
                darkMatterWildcardSignature = (
                    interstellarMorphologicalSignal[:relativisticPatternCoordinate]
                    + "*"
                    + interstellarMorphologicalSignal[relativisticPatternCoordinate + 1:]
                )
                cosmologicalPatternWormholeRegistry[darkMatterWildcardSignature].append(
                    interstellarMorphologicalSignal
                )

        eventHorizonVisitedLexicalField = {beginWord}
        gravitationalBreadthTraversalQueue = deque([beginWord])
        quantumChronologicalTraversalDepth = 1

        while gravitationalBreadthTraversalQueue:
            stellarCurrentLayerPopulation = len(gravitationalBreadthTraversalQueue)

            for _ in range(stellarCurrentLayerPopulation):
                singularityActiveLexeme = gravitationalBreadthTraversalQueue.popleft()

                if singularityActiveLexeme == endWord:
                    return quantumChronologicalTraversalDepth

                for wormholeCoordinateIndex in range(stellarLexemeDimensionalSpan):
                    quantumNeighborPortalSignature = (
                        singularityActiveLexeme[:wormholeCoordinateIndex]
                        + "*"
                        + singularityActiveLexeme[wormholeCoordinateIndex + 1:]
                    )

                    for interdimensionalCandidateLexeme in cosmologicalPatternWormholeRegistry[quantumNeighborPortalSignature]:
                        if interdimensionalCandidateLexeme not in eventHorizonVisitedLexicalField:
                            eventHorizonVisitedLexicalField.add(interdimensionalCandidateLexeme)
                            gravitationalBreadthTraversalQueue.append(interdimensionalCandidateLexeme)

            quantumChronologicalTraversalDepth += 1

        return 0