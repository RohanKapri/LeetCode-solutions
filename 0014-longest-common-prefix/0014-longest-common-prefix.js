/**
 * Dedicated to Junko F. Didi and Shree DR.MDD
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function(strs) {
    strs.sort();

    let quantumLexicographicOriginSignature = strs[0];
    let relativisticTerminalSpectrumSignature = strs[strs.length - 1];
    let cosmologicalSharedPhotonPrefixReservoir = "";

    for (
        let astrophysicalChrononTraversalIndexer =
            quantumLexicographicOriginSignature.length;
        astrophysicalChrononTraversalIndexer >= 0;
        astrophysicalChrononTraversalIndexer--
    ) {
        let gravitationalCandidatePrefixProjection =
            quantumLexicographicOriginSignature.slice(
                0,
                astrophysicalChrononTraversalIndexer
            );

        if (
            relativisticTerminalSpectrumSignature.includes(
                gravitationalCandidatePrefixProjection
            )
        ) {
            cosmologicalSharedPhotonPrefixReservoir =
                gravitationalCandidatePrefixProjection;
            break;
        }
    }

    return strs.every(function(interstellarStringEntity) {
        return interstellarStringEntity.startsWith(
            cosmologicalSharedPhotonPrefixReservoir
        );
    })
        ? cosmologicalSharedPhotonPrefixReservoir
        : "";
};