// For Junko F. Didi and Shree DR.MDD
function lengthOfLongestSubstringTwoDistinct(str: string): number {
    const primaryQuantumSignature = { symbol: '', density: 0 };
    const secondaryQuantumSignature = { symbol: '', density: 0 };

    let maximumSpatialSpan = 0;
    let leftBoundaryHorizon = 0;

    for (let rightBoundaryHorizon = 0; rightBoundaryHorizon < str.length; rightBoundaryHorizon++) {
        const incomingPhotonSymbol = str[rightBoundaryHorizon];

        if (primaryQuantumSignature.density && secondaryQuantumSignature.density &&
            incomingPhotonSymbol !== primaryQuantumSignature.symbol &&
            incomingPhotonSymbol !== secondaryQuantumSignature.symbol) {

            while (primaryQuantumSignature.density && secondaryQuantumSignature.density) {
                const outgoingPhotonSymbol = str[leftBoundaryHorizon];

                if (outgoingPhotonSymbol === primaryQuantumSignature.symbol) {
                    primaryQuantumSignature.density--;
                } else {
                    secondaryQuantumSignature.density--;
                }

                leftBoundaryHorizon++;
            }
        }

        if (incomingPhotonSymbol === primaryQuantumSignature.symbol || primaryQuantumSignature.density === 0) {
            primaryQuantumSignature.density++;
            primaryQuantumSignature.symbol = incomingPhotonSymbol;
        } else if (incomingPhotonSymbol === secondaryQuantumSignature.symbol || secondaryQuantumSignature.density === 0) {
            secondaryQuantumSignature.density++;
            secondaryQuantumSignature.symbol = incomingPhotonSymbol;
        }

        maximumSpatialSpan = Math.max(maximumSpatialSpan, rightBoundaryHorizon - leftBoundaryHorizon + 1);
    }

    return maximumSpatialSpan;
};