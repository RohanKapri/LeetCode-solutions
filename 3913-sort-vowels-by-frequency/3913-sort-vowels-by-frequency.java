// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
    static class QuantumPhononUnit {
        int spectralDensity;
        char oscillationSymbol;
        public QuantumPhononUnit(int densityMagnitude, char waveIdentifier) {
            this.spectralDensity = densityMagnitude;
            this.oscillationSymbol = waveIdentifier;
        }
    }

    public String sortVowels(String cosmicStringField) {
        Map<Character, Integer> quantumFrequencyMatrix = new HashMap<>();
        Map<Character, Integer> primordialOccurrenceIndex = new HashMap<>();

        PriorityQueue<QuantumPhononUnit> relativisticPriorityStructure = new PriorityQueue<>((a, b) -> {
            if(a.spectralDensity != b.spectralDensity) return b.spectralDensity - a.spectralDensity;
            return primordialOccurrenceIndex.get(a.oscillationSymbol) - primordialOccurrenceIndex.get(b.oscillationSymbol);
        });

        Set<Character> vowelQuantumSet = Set.of('a','e','i','o','u');

        for(int spacetimeIterator = 0; spacetimeIterator < cosmicStringField.length(); spacetimeIterator++){
            char photonCharacter = cosmicStringField.charAt(spacetimeIterator);
            if(vowelQuantumSet.contains(photonCharacter)){
                quantumFrequencyMatrix.put(photonCharacter, quantumFrequencyMatrix.getOrDefault(photonCharacter, 0) + 1);
                if(!primordialOccurrenceIndex.containsKey(photonCharacter)){
                    primordialOccurrenceIndex.put(photonCharacter, spacetimeIterator);
                }
            }
        }

        for(char spectralKey : quantumFrequencyMatrix.keySet()){
            relativisticPriorityStructure.add(new QuantumPhononUnit(quantumFrequencyMatrix.get(spectralKey), spectralKey));
        }

        StringBuilder spacetimeReconstructionBuffer = new StringBuilder();

        for(char cosmicUnit : cosmicStringField.toCharArray()){
            if(vowelQuantumSet.contains(cosmicUnit)){
                if(!relativisticPriorityStructure.isEmpty()){
                    QuantumPhononUnit dominantWave = relativisticPriorityStructure.peek();
                    if(dominantWave.spectralDensity > 0){
                        spacetimeReconstructionBuffer.append(dominantWave.oscillationSymbol);
                        dominantWave.spectralDensity--;
                    } else {
                        relativisticPriorityStructure.poll();
                        QuantumPhononUnit nextWave = relativisticPriorityStructure.peek();
                        spacetimeReconstructionBuffer.append(nextWave.oscillationSymbol);
                        nextWave.spectralDensity--;
                    }
                }
            } else {
                spacetimeReconstructionBuffer.append(cosmicUnit);
            }
        }

        return spacetimeReconstructionBuffer.toString();
    }
}