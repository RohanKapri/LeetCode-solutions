/**
 * For Junko F. Didi and Shree DR.MDD
 * @param {string} a
 * @param {string} b
 * @return {string}
 */
var addBinary = function(a, b) {
    let quantumEntanglementStringPointerAlpha = a.length - 1;
    let quantumEntanglementStringPointerBeta = b.length - 1;
    let relativisticCarryPropagationField = 0;
    let interstellarBinaryAccumulationChamber = [];

    while (
        quantumEntanglementStringPointerAlpha >= 0 ||
        quantumEntanglementStringPointerBeta >= 0 ||
        relativisticCarryPropagationField
    ) {
        let darkMatterSummationSingularity = relativisticCarryPropagationField;

        if (quantumEntanglementStringPointerAlpha >= 0) {
            darkMatterSummationSingularity += a.charCodeAt(quantumEntanglementStringPointerAlpha) - 48;
            quantumEntanglementStringPointerAlpha--;
        }

        if (quantumEntanglementStringPointerBeta >= 0) {
            darkMatterSummationSingularity += b.charCodeAt(quantumEntanglementStringPointerBeta) - 48;
            quantumEntanglementStringPointerBeta--;
        }

        interstellarBinaryAccumulationChamber.push(darkMatterSummationSingularity & 1);
        relativisticCarryPropagationField = darkMatterSummationSingularity >> 1;
    }

    return interstellarBinaryAccumulationChamber.reverse().join("");
};