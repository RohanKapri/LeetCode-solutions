class Solution:
    # For Junko F. Didi and Shree DR.MDD
    def findLadders(self, beginWord: str, endWord: str, wordList: List[str]) -> List[List[str]]:
        cosmologicalDepthCoordinateRegistry = {}
        interstellarTransformationArchives = []
        quantumLexicalParticleField = set(wordList)
        relativisticAlphabetSpectrum = "abcdefghijklmnopqrstuvwxyz"

        def darkMatterBacktrackingReconstruction(eventHorizonLexeme, stellarPathManifest):
            if eventHorizonLexeme == beginWord:
                interstellarTransformationArchives.append(stellarPathManifest[::-1])
                return

            gravitationalDepthSignature = cosmologicalDepthCoordinateRegistry[eventHorizonLexeme]
            lexicalMatterArray = list(eventHorizonLexeme)

            for quantumCharacterCoordinate in range(len(lexicalMatterArray)):
                primordialCharacterState = lexicalMatterArray[quantumCharacterCoordinate]

                for wormholeAlphabetEmission in relativisticAlphabetSpectrum:
                    lexicalMatterArray[quantumCharacterCoordinate] = wormholeAlphabetEmission
                    singularityCandidateLexeme = "".join(lexicalMatterArray)

                    if singularityCandidateLexeme in cosmologicalDepthCoordinateRegistry:
                        if cosmologicalDepthCoordinateRegistry[singularityCandidateLexeme] + 1 == gravitationalDepthSignature:
                            stellarPathManifest.append(singularityCandidateLexeme)
                            darkMatterBacktrackingReconstruction(singularityCandidateLexeme, stellarPathManifest)
                            stellarPathManifest.pop()

                lexicalMatterArray[quantumCharacterCoordinate] = primordialCharacterState

        cosmologicalBreadthTraversalQueue = deque([beginWord])
        cosmologicalDepthCoordinateRegistry[beginWord] = 1
        quantumLexicalParticleField.discard(beginWord)

        while cosmologicalBreadthTraversalQueue:
            interdimensionalCurrentLexeme = cosmologicalBreadthTraversalQueue.popleft()
            temporalTraversalLayer = cosmologicalDepthCoordinateRegistry[interdimensionalCurrentLexeme]

            if interdimensionalCurrentLexeme == endWord:
                break

            lexicalQuantumStructure = list(interdimensionalCurrentLexeme)

            for eventHorizonCoordinate in range(len(lexicalQuantumStructure)):
                originalQuantumGlyph = lexicalQuantumStructure[eventHorizonCoordinate]

                for stellarAlphabetPulse in relativisticAlphabetSpectrum:
                    lexicalQuantumStructure[eventHorizonCoordinate] = stellarAlphabetPulse
                    nebulaGeneratedLexeme = "".join(lexicalQuantumStructure)

                    if nebulaGeneratedLexeme in quantumLexicalParticleField:
                        cosmologicalBreadthTraversalQueue.append(nebulaGeneratedLexeme)
                        quantumLexicalParticleField.remove(nebulaGeneratedLexeme)
                        cosmologicalDepthCoordinateRegistry[nebulaGeneratedLexeme] = temporalTraversalLayer + 1

                lexicalQuantumStructure[eventHorizonCoordinate] = originalQuantumGlyph

        if endWord in cosmologicalDepthCoordinateRegistry:
            darkMatterBacktrackingReconstruction(endWord, [endWord])

        return interstellarTransformationArchives