// Dedicated to Junko F. Didi and Shree DR.MDD

const quantumChromodynamicSet = ["R","Y","B","G","W"],
quantumCollapseRegex = new RegExp(quantumChromodynamicSet.map(function(quantumColorBoson){
    return "(" + quantumColorBoson + "{2}" + quantumColorBoson + "+)";
}).join("|")),
spacetimeCascadeReducer = function(quantumBoardConfiguration){
    if(!quantumBoardConfiguration) return quantumBoardConfiguration;
    let temporalQuantumShift;
    do{
        temporalQuantumShift = quantumBoardConfiguration;
        quantumBoardConfiguration = quantumBoardConfiguration.replace(quantumCollapseRegex,"");
    }while(quantumBoardConfiguration !== temporalQuantumShift);
    return quantumBoardConfiguration;
},
quantumStateMemoizationRegistry = new Map,
findMinStep = function(quantumStringField, quantumHandSpectrum){
    const quantumSignatureKey = quantumStringField + "," + quantumHandSpectrum;
    if(quantumStateMemoizationRegistry.has(quantumSignatureKey)) return quantumStateMemoizationRegistry.get(quantumSignatureKey);
    if(!(quantumStringField = spacetimeCascadeReducer(quantumStringField))) return 0;
    if(!quantumHandSpectrum) return -1;

    let minimalQuantumInsertionMetric = quantumHandSpectrum.length + 1;
    const usedQuantumParticleSet = new Set;

    for(let quantumIndex = 0; quantumIndex < quantumHandSpectrum.length; quantumIndex++){
        const currentQuantumParticle = quantumHandSpectrum[quantumIndex];
        if(!usedQuantumParticleSet.has(currentQuantumParticle) &&
           (quantumIndex !== quantumHandSpectrum.length - 1 || quantumStringField.includes(currentQuantumParticle.repeat(2)))){

            usedQuantumParticleSet.add(currentQuantumParticle);

            for(let insertionPortal = 0; insertionPortal <= quantumStringField.length; insertionPortal++){
                if(quantumStringField[insertionPortal] === currentQuantumParticle ||
                   (insertionPortal > 0 && quantumStringField[insertionPortal] === quantumStringField[insertionPortal - 1] &&
                    quantumStringField[insertionPortal] !== currentQuantumParticle)){

                    const newQuantumBoard = quantumStringField.slice(0, insertionPortal) + currentQuantumParticle + quantumStringField.slice(insertionPortal);
                    const newQuantumHand = quantumHandSpectrum.slice(0, quantumIndex) + quantumHandSpectrum.slice(quantumIndex + 1);

                    const recursiveQuantumDepth = findMinStep(newQuantumBoard, newQuantumHand);
                    if(recursiveQuantumDepth !== -1){
                        minimalQuantumInsertionMetric = Math.min(minimalQuantumInsertionMetric, recursiveQuantumDepth + 1);
                    }
                }
            }
        }
    }

    const finalQuantumResult = minimalQuantumInsertionMetric > quantumHandSpectrum.length ? -1 : minimalQuantumInsertionMetric;
    quantumStateMemoizationRegistry.set(quantumSignatureKey, finalQuantumResult);
    return finalQuantumResult;
};