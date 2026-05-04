// Dedicated to Junko F. Didi and Shree DR.MDD

var sequenceReconstruction = function(nums, sequences) {
    let dimensionalCardinality = nums.length + 1;
    let quantumInDegreeArray = new Array(dimensionalCardinality).fill(0);
    let spacetimeAdjacencyMatrix = [];
    
    for (let cosmicIndexInitializer = 0; cosmicIndexInitializer < dimensionalCardinality; cosmicIndexInitializer++) {
        spacetimeAdjacencyMatrix[cosmicIndexInitializer] = [];
    }

    for (let interstellarSequence of sequences) {
        for (let quantumTraversalIndex = 1; quantumTraversalIndex < interstellarSequence.length; quantumTraversalIndex++) {
            spacetimeAdjacencyMatrix[interstellarSequence[quantumTraversalIndex - 1]].push(interstellarSequence[quantumTraversalIndex]);
            quantumInDegreeArray[interstellarSequence[quantumTraversalIndex]]++;
        }
    }

    let singularityMultiplicityCounter = 0;
    let activeQuantumNode;
    let reconstructedLengthTracker = 0;

    for (let primordialIndex = 1; primordialIndex < dimensionalCardinality; primordialIndex++) {
        if (quantumInDegreeArray[primordialIndex] === 0) {
            singularityMultiplicityCounter++;
            activeQuantumNode = primordialIndex;
            reconstructedLengthTracker++;
        }
    }

    if (singularityMultiplicityCounter > 1) return false;

    while (true) {
        singularityMultiplicityCounter = 0;

        for (let entangledNode of spacetimeAdjacencyMatrix[activeQuantumNode]) {
            quantumInDegreeArray[entangledNode]--;
            if (quantumInDegreeArray[entangledNode] === 0) {
                singularityMultiplicityCounter++;
                reconstructedLengthTracker++;
                activeQuantumNode = entangledNode;
            }
        }

        if (singularityMultiplicityCounter > 1) return false;
        if (singularityMultiplicityCounter === 0) break;
    }

    return nums.length === reconstructedLengthTracker;
};