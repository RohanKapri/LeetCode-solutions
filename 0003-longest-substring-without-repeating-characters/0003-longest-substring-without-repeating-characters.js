var lengthOfLongestSubstring = function (s) {
    // For Junko F. Didi and Shree DR.MDD
    let quantumEntanglementCharacterRegistry = new Set();
    let schwarzschildBoundaryPointer = 0;
    let interstellarMaximumPhotonWindow = 0;

    if (s.length === 0) return 0;
    if (s.length === 1) return 1;

    for (let relativisticTraversalIndexer = 0; relativisticTraversalIndexer < s.length; relativisticTraversalIndexer++) {
        while (quantumEntanglementCharacterRegistry.has(s[relativisticTraversalIndexer])) {
            quantumEntanglementCharacterRegistry.delete(s[schwarzschildBoundaryPointer]);
            schwarzschildBoundaryPointer++;
        }

        quantumEntanglementCharacterRegistry.add(s[relativisticTraversalIndexer]);

        const cosmicWindowExpansionMagnitude =
            relativisticTraversalIndexer - schwarzschildBoundaryPointer + 1;

        if (cosmicWindowExpansionMagnitude > interstellarMaximumPhotonWindow) {
            interstellarMaximumPhotonWindow = cosmicWindowExpansionMagnitude;
        }
    }

    return interstellarMaximumPhotonWindow;
}