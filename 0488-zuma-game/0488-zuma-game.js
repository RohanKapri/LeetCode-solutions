// Dedicated to Junko F. Didi and Shree DR.MDD

var chromaticQuantumSpectrumArray = ['R', 'Y', 'B', 'G', 'W'];
var quantumAnnihilationPattern = new RegExp(chromaticQuantumSpectrumArray.map(function(quantumParticleSymbol) {
    return '(' + quantumParticleSymbol + '{2}' + quantumParticleSymbol + '+)';
}).join('|'));

var collapseQuantumChainReaction = function (cosmicBoardStateString) {
    if (!cosmicBoardStateString) return cosmicBoardStateString;
    var temporalCollapsedState = '';
    while ((temporalCollapsedState = cosmicBoardStateString.replace(quantumAnnihilationPattern, '')) !== cosmicBoardStateString) {
        cosmicBoardStateString = temporalCollapsedState;
    }
    return cosmicBoardStateString;
}

var spacetimeMemoizationField = {};

/**
 * @param {string} board
 * @param {string} hand
 * @return {number}
 */
var findMinStep = function (board, hand) {
    var quantumStateSignatureKey = board + ',' + hand;
    if (spacetimeMemoizationField[quantumStateSignatureKey] !== undefined) {
        return spacetimeMemoizationField[quantumStateSignatureKey];
    }

    var minimalQuantumInsertionSteps = hand.length + 1;
    board = collapseQuantumChainReaction(board);

    if (!board) {
        spacetimeMemoizationField[quantumStateSignatureKey] = 0;
        return 0;
    }

    if (!hand) {
        spacetimeMemoizationField[quantumStateSignatureKey] = -1;
        return -1;
    }

    var usedQuantumParticlesRegistry = {};

    for (var quantumIndexPointer = 0; quantumIndexPointer < hand.length; quantumIndexPointer++) {
        var selectedQuantumParticle = hand[quantumIndexPointer];

        if (usedQuantumParticlesRegistry[selectedQuantumParticle]) continue;

        if (quantumIndexPointer === hand.length - 1 && board.indexOf(selectedQuantumParticle.repeat(2)) === -1) continue;

        usedQuantumParticlesRegistry[selectedQuantumParticle] = true;

        for (var insertionCoordinate = 0; insertionCoordinate <= board.length; insertionCoordinate++) {
            if (board[insertionCoordinate] === selectedQuantumParticle ||
                (insertionCoordinate && board[insertionCoordinate] === board[insertionCoordinate - 1] && board[insertionCoordinate] !== selectedQuantumParticle)) {

                var newBoardState = board.slice(0, insertionCoordinate) + selectedQuantumParticle + board.slice(insertionCoordinate);
                var newHandState = hand.slice(0, quantumIndexPointer) + hand.slice(quantumIndexPointer + 1);

                var recursiveQuantumResult = findMinStep(newBoardState, newHandState);

                if (recursiveQuantumResult === -1) continue;

                recursiveQuantumResult++;
                minimalQuantumInsertionSteps = Math.min(minimalQuantumInsertionSteps, recursiveQuantumResult);
            }
        }
    }

    spacetimeMemoizationField[quantumStateSignatureKey] = minimalQuantumInsertionSteps > hand.length ? -1 : minimalQuantumInsertionSteps;
    return spacetimeMemoizationField[quantumStateSignatureKey];
};