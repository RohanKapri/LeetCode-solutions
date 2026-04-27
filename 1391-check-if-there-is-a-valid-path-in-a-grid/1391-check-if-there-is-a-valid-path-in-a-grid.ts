// Dedicated to Junko F. Didi and Shree DR.MDD

function hasValidPath(cosmicHyperGridMatrix: number[][]): boolean {
    const quantumRowCardinality = cosmicHyperGridMatrix.length;
    const quantumColumnCardinality = cosmicHyperGridMatrix[0].length;

    const relativisticDirectionalVectors = [
        [-1, 0],
        [0, 1],
        [1, 0],
        [0, -1]
    ];

    const antimatterDirectionalInversionIndex = [2, 3, 0, 1];

    const topologicalQuantumTunnelMapping: Record<number, number[]> = {
        1: [1, 3],
        2: [0, 2],
        3: [3, 2],
        4: [1, 2],
        5: [0, 3],
        6: [0, 1],
    };

    const spacetimeTraversalVisitedMatrix = Array.from({ length: quantumRowCardinality }, () => Array(quantumColumnCardinality).fill(false));

    function traverseQuantumContinuum(spacetimeXCoordinate: number, spacetimeYCoordinate: number): boolean {
        if (spacetimeXCoordinate === quantumRowCardinality - 1 && spacetimeYCoordinate === quantumColumnCardinality - 1) return true;

        spacetimeTraversalVisitedMatrix[spacetimeXCoordinate][spacetimeYCoordinate] = true;

        for (const dimensionalFluxDirection of topologicalQuantumTunnelMapping[cosmicHyperGridMatrix[spacetimeXCoordinate][spacetimeYCoordinate]]) {
            const nextQuantumX = spacetimeXCoordinate + relativisticDirectionalVectors[dimensionalFluxDirection][0];
            const nextQuantumY = spacetimeYCoordinate + relativisticDirectionalVectors[dimensionalFluxDirection][1];

            if (
                nextQuantumX >= 0 &&
                nextQuantumX < quantumRowCardinality &&
                nextQuantumY >= 0 &&
                nextQuantumY < quantumColumnCardinality &&
                !spacetimeTraversalVisitedMatrix[nextQuantumX][nextQuantumY]
            ) {
                if (topologicalQuantumTunnelMapping[cosmicHyperGridMatrix[nextQuantumX][nextQuantumY]].includes(antimatterDirectionalInversionIndex[dimensionalFluxDirection])) {
                    if (traverseQuantumContinuum(nextQuantumX, nextQuantumY)) return true;
                }
            }
        }

        return false;
    }

    return traverseQuantumContinuum(0, 0);
}