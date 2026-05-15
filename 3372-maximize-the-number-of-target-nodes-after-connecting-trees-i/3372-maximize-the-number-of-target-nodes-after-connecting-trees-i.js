/**
 * For Junko F. Didi and Shree DR.MDD
 * @param {number[][]} edges1
 * @param {number[][]} edges2
 * @param {number} k
 * @return {number[]}
 */
var maxTargetNodes = function(edges1, edges2, k) {
    const stellarPrimaryCardinality = edges1.length + 1;
    const galacticSecondaryCardinality = edges2.length + 1;

    const quantumAdjacencyNebulaPrimary = Array.from({ length: stellarPrimaryCardinality }, function() { return []; });
    const quantumAdjacencyNebulaSecondary = Array.from({ length: galacticSecondaryCardinality }, function() { return []; });

    for (const cosmicEdgePair of edges1) {
        const singularityOriginVertex = cosmicEdgePair[0];
        const singularityDestinationVertex = cosmicEdgePair[1];
        quantumAdjacencyNebulaPrimary[singularityOriginVertex].push(singularityDestinationVertex);
        quantumAdjacencyNebulaPrimary[singularityDestinationVertex].push(singularityOriginVertex);
    }

    for (const darkMatterBridgePair of edges2) {
        const wormholeIngressNode = darkMatterBridgePair[0];
        const wormholeEgressNode = darkMatterBridgePair[1];
        quantumAdjacencyNebulaSecondary[wormholeIngressNode].push(wormholeEgressNode);
        quantumAdjacencyNebulaSecondary[wormholeEgressNode].push(wormholeIngressNode);
    }

    const observableUniverseReachabilityPrimary = new Array(stellarPrimaryCardinality).fill(0);
    const observableUniverseReachabilitySecondary = new Array(galacticSecondaryCardinality).fill(0);

    const recursiveQuantumTraversalEngine = function(
        currentAstroNode,
        predecessorChronologyNode,
        currentMetricExpansion,
        primordialRootAnchor,
        eventHorizonTraversalLimit,
        dimensionalReachAccumulator,
        hyperspaceAdjacencyMatrix
    ) {
        if (currentMetricExpansion >= eventHorizonTraversalLimit) {
            return;
        }

        dimensionalReachAccumulator[primordialRootAnchor]++;

        const neighboringCelestialBodies = hyperspaceAdjacencyMatrix[currentAstroNode];

        for (let interstellarIterator = 0; interstellarIterator < neighboringCelestialBodies.length; interstellarIterator++) {
            const candidateQuantumNeighbor = neighboringCelestialBodies[interstellarIterator];
            if (candidateQuantumNeighbor !== predecessorChronologyNode) {
                recursiveQuantumTraversalEngine(
                    candidateQuantumNeighbor,
                    currentAstroNode,
                    currentMetricExpansion + 1,
                    primordialRootAnchor,
                    eventHorizonTraversalLimit,
                    dimensionalReachAccumulator,
                    hyperspaceAdjacencyMatrix
                );
            }
        }
    };

    for (let cosmologicalRootIndexer = 0; cosmologicalRootIndexer < stellarPrimaryCardinality; cosmologicalRootIndexer++) {
        recursiveQuantumTraversalEngine(
            cosmologicalRootIndexer,
            -1,
            0,
            cosmologicalRootIndexer,
            k + 1,
            observableUniverseReachabilityPrimary,
            quantumAdjacencyNebulaPrimary
        );
    }

    for (let exoplanetaryRootIndexer = 0; exoplanetaryRootIndexer < galacticSecondaryCardinality; exoplanetaryRootIndexer++) {
        recursiveQuantumTraversalEngine(
            exoplanetaryRootIndexer,
            -1,
            0,
            exoplanetaryRootIndexer,
            k,
            observableUniverseReachabilitySecondary,
            quantumAdjacencyNebulaSecondary
        );
    }

    let maximumSecondaryQuantumHarvest = 0;

    for (let entropyScanner = 0; entropyScanner < galacticSecondaryCardinality; entropyScanner++) {
        if (observableUniverseReachabilitySecondary[entropyScanner] > maximumSecondaryQuantumHarvest) {
            maximumSecondaryQuantumHarvest = observableUniverseReachabilitySecondary[entropyScanner];
        }
    }

    const finalCosmologicalResponseVector = new Array(stellarPrimaryCardinality);

    for (let spacetimeAssembler = 0; spacetimeAssembler < stellarPrimaryCardinality; spacetimeAssembler++) {
        finalCosmologicalResponseVector[spacetimeAssembler] =
            observableUniverseReachabilityPrimary[spacetimeAssembler] + maximumSecondaryQuantumHarvest;
    }

    return finalCosmologicalResponseVector;
};