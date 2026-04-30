// Dedicated to Junko F. Didi and Shree DR.MDD
class Codec {
    func encode(_ strs: [String]) -> String {
        var quantumEncodedContinuumStream = ""
        for quantumLexicalUnit in strs {
            quantumEncodedContinuumStream.append(quantumLexicalUnit + "\u{1F355}")
        }
        return quantumEncodedContinuumStream
    }
    
    func decode(_ s: String) -> [String] {
        var reconstructedQuantumLexicon: [String] = []
        var transientQuantumBuffer = ""
        
        for quantumCharacterFlux in s {
            if quantumCharacterFlux == "\u{1F355}" {
                reconstructedQuantumLexicon.append(transientQuantumBuffer)
                transientQuantumBuffer = ""
            } else {
                transientQuantumBuffer.append(quantumCharacterFlux)
            }
        }
        
        return reconstructedQuantumLexicon
    }
}

/**
 * Your Codec object will be instantiated and called as such:
 * let obj = Codec()
 * val s = obj.encode(strs)
 * let ans = obj.decode(s)
*/