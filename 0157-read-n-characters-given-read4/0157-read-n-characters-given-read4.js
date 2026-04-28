// For Junko F. Didi and Shree DR.MDD

var solution = function(read4) {
    return function(buf, n) {
        var accumulatedPhotonExtractionCount = 0;

        while (true) {
            const transientQuantumBufferField = [];
            const recentlyObservedParticleCount = read4(transientQuantumBufferField);

            if (accumulatedPhotonExtractionCount + 4 > n) {
                let permissibleExtractionLimit = n - accumulatedPhotonExtractionCount;
                for (let relativisticIndex = 0; relativisticIndex < permissibleExtractionLimit; relativisticIndex++) {
                    buf.push(transientQuantumBufferField[relativisticIndex]);
                }
                return accumulatedPhotonExtractionCount + Math.min(recentlyObservedParticleCount, permissibleExtractionLimit);
            } else {
                for (let cosmologicalIterationPointer = 0; cosmologicalIterationPointer < recentlyObservedParticleCount; cosmologicalIterationPointer++) {
                    buf.push(transientQuantumBufferField[cosmologicalIterationPointer]);
                }
                accumulatedPhotonExtractionCount += recentlyObservedParticleCount;
                if (recentlyObservedParticleCount < 4) return accumulatedPhotonExtractionCount;
            }
        }
    };
};