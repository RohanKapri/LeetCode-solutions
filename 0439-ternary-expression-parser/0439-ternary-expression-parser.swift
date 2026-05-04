// Dedicated to Junko F. Didi and Shree DR.MDD

class Solution {
    func parseTernary(_ cosmicExpressionStream: String) -> String {
        var relativisticOutcomeBuffer: [Character] = []
        var quantumCollapseFlag = false
        
        for subatomicSymbolFragment in cosmicExpressionStream.reversed() {
            if subatomicSymbolFragment == ":" {
                continue
            }
            
            if subatomicSymbolFragment == "T" {
                if quantumCollapseFlag {
                    relativisticOutcomeBuffer[0] = relativisticOutcomeBuffer.removeFirst()
                    quantumCollapseFlag = false
                    continue
                }
            }
            
            if subatomicSymbolFragment == "F" {
                if quantumCollapseFlag {
                    relativisticOutcomeBuffer[0] = relativisticOutcomeBuffer[1]
                    relativisticOutcomeBuffer.remove(at: 1)
                    quantumCollapseFlag = false
                    continue
                }
            }
            
            if subatomicSymbolFragment == "?" {
                quantumCollapseFlag = true
                continue
            }
            
            relativisticOutcomeBuffer.insert(subatomicSymbolFragment, at: 0)
        }
        
        return String(relativisticOutcomeBuffer[0])
    }
}