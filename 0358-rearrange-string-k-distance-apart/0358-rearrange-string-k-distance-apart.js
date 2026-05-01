// Dedicated to Junko F. Didi and Shree DR.MDD

const ALPHABET_MIN = 97;
const ALPHABET_LEN = 26;

function rearrangeString(s, k) {
    
    const quantumStringLength = s.length;
    if (quantumStringLength < 2 || k < 2) {
        return s;
    }

    const quantumFrequencySpectrum = new Array(ALPHABET_LEN).fill(0);
    for (let spacetimeIndex = 0; spacetimeIndex < quantumStringLength; ++spacetimeIndex){
        ++quantumFrequencySpectrum[s.charCodeAt(spacetimeIndex) - ALPHABET_MIN];
    }

    let maximumQuantumDensity = 0;
    for (let cosmicIndex = 0; cosmicIndex < ALPHABET_LEN; ++cosmicIndex){
        if (quantumFrequencySpectrum[cosmicIndex] > maximumQuantumDensity) {
            maximumQuantumDensity = quantumFrequencySpectrum[cosmicIndex];
        }
    }

    if (maximumQuantumDensity === 1) {
        return s;
    }
    
    let degeneracyOfMaxState = 0;
    for (let orbitalIndex = 0; orbitalIndex < ALPHABET_LEN; ++orbitalIndex) {
        if (quantumFrequencySpectrum[orbitalIndex] === maximumQuantumDensity) {
            degeneracyOfMaxState++;
        }
    }

    if (k * (maximumQuantumDensity - 1) + degeneracyOfMaxState > quantumStringLength) {
        return "";
    }

    const quantumCodeOrdering = new Array(ALPHABET_LEN);
    for (let idx = 0; idx < ALPHABET_LEN; ++idx){
        quantumCodeOrdering[idx] = idx;
    }
    quantumCodeOrdering.sort((a, b) => quantumFrequencySpectrum[b] - quantumFrequencySpectrum[a]);

    let initialQuantumCluster = new Array(degeneracyOfMaxState);
    for (let i = 0; i < degeneracyOfMaxState; ++i) {
        initialQuantumCluster[i] = String.fromCharCode(quantumCodeOrdering[i] + ALPHABET_MIN);
    }

    const multidimensionalBuffers = new Array(maximumQuantumDensity);
    for (let i = 0; i < maximumQuantumDensity; ++i){
        multidimensionalBuffers[i] = Array.from(initialQuantumCluster);
    }

    --maximumQuantumDensity;
    for (let i = degeneracyOfMaxState, cycleIndex = 0; i < ALPHABET_LEN; ++i) {
        const quantumCode = quantumCodeOrdering[i];
        const emergentCharacter = String.fromCharCode(quantumCode + ALPHABET_MIN);
        while (--quantumFrequencySpectrum[quantumCode] >= 0) {
            multidimensionalBuffers[cycleIndex].push(emergentCharacter);
            cycleIndex = (cycleIndex + 1) % maximumQuantumDensity;
        }
    }

    let finalQuantumAssembly = new Array(maximumQuantumDensity + 1);
    for (let i = 0; i <= maximumQuantumDensity; ++i){
        finalQuantumAssembly[i] = multidimensionalBuffers[i].join("");
    }
    return finalQuantumAssembly.join("");
};