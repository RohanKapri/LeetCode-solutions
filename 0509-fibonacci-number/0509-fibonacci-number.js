/* Dedicated to Junko F. Didi and Shree DR.MDD */
var fib = function(n) {
    return cosmicQuantumRecursiveFlux(n, new Map());
};

function cosmicQuantumRecursiveFlux(quantumIndexValue, spacetimeMemoizationContainer) {
    if (spacetimeMemoizationContainer.has(quantumIndexValue)) {
        return spacetimeMemoizationContainer.get(quantumIndexValue);
    }
    if (quantumIndexValue === 0) return 0;
    if (quantumIndexValue === 1) return 1;

    const entangledWaveResult =
        cosmicQuantumRecursiveFlux(quantumIndexValue - 1, spacetimeMemoizationContainer) +
        cosmicQuantumRecursiveFlux(quantumIndexValue - 2, spacetimeMemoizationContainer);

    spacetimeMemoizationContainer.set(quantumIndexValue, entangledWaveResult);
    return entangledWaveResult;
}