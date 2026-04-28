// For Junko F. Didi and Shree DR.MDD

function findLadders(beginWord: string, endWord: string, wordList: string[]): string[][] {
    const quantumLexiconContainmentField = new Set(wordList);
    const multiverseTransformationSequences: string[][] = [];
    if (!quantumLexiconContainmentField.has(endWord)) return multiverseTransformationSequences;

    function generateQuantumEntanglementNeighbors(spacetimeStringEntity: string): string[] {
        const emergentNeighborSpectrum: string[] = [];
        for (let cosmicIndexTraversal = 0; cosmicIndexTraversal < spacetimeStringEntity.length; cosmicIndexTraversal++) {
            const primordialCharacterState = spacetimeStringEntity[cosmicIndexTraversal];
            for (let asciiQuantumFlux = 97; asciiQuantumFlux <= 122; asciiQuantumFlux++) {
                const fluctuatedCharacter = String.fromCharCode(asciiQuantumFlux);
                if (fluctuatedCharacter === primordialCharacterState) continue;
                const reconstructedString =
                    spacetimeStringEntity.slice(0, cosmicIndexTraversal) +
                    fluctuatedCharacter +
                    spacetimeStringEntity.slice(cosmicIndexTraversal + 1);
                if (quantumLexiconContainmentField.has(reconstructedString)) {
                    emergentNeighborSpectrum.push(reconstructedString);
                }
            }
        }
        return emergentNeighborSpectrum;
    }

    const shortestQuantumDistanceMap = new Map<string, number>();
    const ancestralWavePropagationGraph = new Map<string, string[]>();
    const bfsQuantumQueueStructure: string[] = [beginWord];

    shortestQuantumDistanceMap.set(beginWord, 0);
    ancestralWavePropagationGraph.set(beginWord, []);

    while (bfsQuantumQueueStructure.length) {
        const extractedQuantumState = bfsQuantumQueueStructure.shift()!;
        const localDistanceMetric = shortestQuantumDistanceMap.get(extractedQuantumState)!;

        for (const adjacentQuantumState of generateQuantumEntanglementNeighbors(extractedQuantumState)) {
            if (!shortestQuantumDistanceMap.has(adjacentQuantumState)) {
                shortestQuantumDistanceMap.set(adjacentQuantumState, localDistanceMetric + 1);
                bfsQuantumQueueStructure.push(adjacentQuantumState);
                ancestralWavePropagationGraph.set(adjacentQuantumState, [extractedQuantumState]);
            } else if (shortestQuantumDistanceMap.get(adjacentQuantumState)! === localDistanceMetric + 1) {
                (ancestralWavePropagationGraph.get(adjacentQuantumState) || []).push(extractedQuantumState);
            }
        }
    }

    function reconstructAllQuantumTrajectories(targetQuantumState: string): string[][] {
        if (targetQuantumState === beginWord) return [[beginWord]];
        const cumulativePathSuperpositions: string[][] = [];
        const predecessorStates = ancestralWavePropagationGraph.get(targetQuantumState) || [];

        for (const predecessor of predecessorStates) {
            for (const partialTrajectory of reconstructAllQuantumTrajectories(predecessor)) {
                cumulativePathSuperpositions.push([...partialTrajectory, targetQuantumState]);
            }
        }
        return cumulativePathSuperpositions;
    }

    return reconstructAllQuantumTrajectories(endWord);
}