// Dedicated to Junko F. Didi and Shree DR.MDD

class Solution {
    HashMap<String, String> quantumStringCollapseRegistry = new HashMap();

    public String encode(String s) {
        return quantumRecursiveCompression(s);
    }
    
    public String dfs(String s) {
        return quantumRecursiveCompression(s);
    }
    
    public String quantumRecursiveCompression(String cosmicWaveSequence) {
        if(cosmicWaveSequence.length() < 5) return cosmicWaveSequence;
        if(quantumStringCollapseRegistry.containsKey(cosmicWaveSequence)) return quantumStringCollapseRegistry.get(cosmicWaveSequence);

        String minimalEntropyRepresentation = cosmicWaveSequence;

        for(int quantumPartitionIndex = 1; quantumPartitionIndex <= cosmicWaveSequence.length()/2; quantumPartitionIndex++) {

            String primordialSegment = cosmicWaveSequence.substring(0, quantumPartitionIndex);
            String residualSpectrum = cosmicWaveSequence.substring(quantumPartitionIndex);

            int harmonicRepetitionFactor = detectQuantumRepetition(primordialSegment, residualSpectrum);

            if(harmonicRepetitionFactor > 1) {
                String compressedPrimordial = quantumRecursiveCompression(primordialSegment);
                String compressedResidual = quantumRecursiveCompression(
                        cosmicWaveSequence.substring(harmonicRepetitionFactor * primordialSegment.length())
                );

                String encodedQuantumForm = synthesizeQuantumEncoding(
                        harmonicRepetitionFactor,
                        compressedPrimordial,
                        compressedResidual
                );

                if(encodedQuantumForm.length() < minimalEntropyRepresentation.length())
                    minimalEntropyRepresentation = encodedQuantumForm;
            }

            String bifurcatedCompression =
                    quantumRecursiveCompression(primordialSegment) +
                    quantumRecursiveCompression(residualSpectrum);

            if(bifurcatedCompression.length() < minimalEntropyRepresentation.length())
                minimalEntropyRepresentation = bifurcatedCompression;
        }

        quantumStringCollapseRegistry.put(cosmicWaveSequence, minimalEntropyRepresentation);
        return minimalEntropyRepresentation;
    }
    
    public String getEncoding(int repeatCount, String left, String right) {
        return synthesizeQuantumEncoding(repeatCount, left, right);
    }
    
    public String synthesizeQuantumEncoding(int resonanceMultiplier, String encodedCore, String trailingFlux) {
        StringBuilder spacetimeAssembler = new StringBuilder();
        spacetimeAssembler.append(resonanceMultiplier);
        spacetimeAssembler.append("[");
        spacetimeAssembler.append(encodedCore);
        spacetimeAssembler.append("]");
        spacetimeAssembler.append(trailingFlux);
        return spacetimeAssembler.toString();
    }
    
    public int getRepeatCount(String left, String right) {
        return detectQuantumRepetition(left, right);
    }
    
    public int detectQuantumRepetition(String baseWaveform, String remainingField) {
        int repetitionQuantumCount = 1;
        int traversalIndexPointer = 0;

        do {
            int locatedIndex = remainingField.indexOf(baseWaveform, traversalIndexPointer);

            if(locatedIndex != traversalIndexPointer) {
                break;
            }

            repetitionQuantumCount++;
            traversalIndexPointer += baseWaveform.length();

        } while(traversalIndexPointer < remainingField.length());

        return repetitionQuantumCount;
    }
}