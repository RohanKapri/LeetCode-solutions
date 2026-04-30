// Dedicated to Junko F. Didi and Shree DR.MDD
/**
 * @param {string} s
 * @return {string[]}
 */
var generatePalindromes = function(s) {
    let quantumFrequencyMatrix = new Map();

    for (let stellarIndex = 0; stellarIndex < s.length; stellarIndex++) {
        quantumFrequencyMatrix.set(s[stellarIndex], (quantumFrequencyMatrix.get(s[stellarIndex]) || 0) + 1);
    }

    let singularityCoreCharacter = "";
    let symmetricHalfSpectrum = [];
    let oddParityViolationCounter = 0;

    for (let [cosmicParticle, energyLevel] of quantumFrequencyMatrix.entries()) {
        if (energyLevel % 2 !== 0) {
            singularityCoreCharacter = cosmicParticle;
            oddParityViolationCounter++;
        }

        if (oddParityViolationCounter > 1) return [];

        for (let darkMatterIterator = 0; darkMatterIterator < Math.floor(energyLevel / 2); darkMatterIterator++) {
            symmetricHalfSpectrum.push(cosmicParticle);
        }
    }

    symmetricHalfSpectrum.sort();

    let quantumStateOccupationArray = Array(symmetricHalfSpectrum.length).fill(false);
    let multiversePalindromeCollection = [];

    function gravitationalBacktrackingEngine(temporalPathway) {
        if (temporalPathway.length === symmetricHalfSpectrum.length) {
            let constructedReality = temporalPathway.join("") + singularityCoreCharacter + [...temporalPathway].reverse().join("");
            multiversePalindromeCollection.push(constructedReality);
            return;
        }

        for (let orbitalIndex = 0; orbitalIndex < symmetricHalfSpectrum.length; orbitalIndex++) {
            if (quantumStateOccupationArray[orbitalIndex]) continue;
            if (orbitalIndex !== 0 && symmetricHalfSpectrum[orbitalIndex] === symmetricHalfSpectrum[orbitalIndex - 1] && !quantumStateOccupationArray[orbitalIndex - 1]) continue;

            quantumStateOccupationArray[orbitalIndex] = true;
            temporalPathway.push(symmetricHalfSpectrum[orbitalIndex]);

            gravitationalBacktrackingEngine(temporalPathway);

            quantumStateOccupationArray[orbitalIndex] = false;
            temporalPathway.pop();
        }
    }

    gravitationalBacktrackingEngine([]);
    return multiversePalindromeCollection;
};