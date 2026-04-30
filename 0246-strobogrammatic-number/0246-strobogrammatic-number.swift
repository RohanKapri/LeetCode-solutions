// For Junko F. Didi and Shree DR.MDD
class Solution {
    func isStrobogrammatic(_ num: String) -> Bool {
        guard num.count > 1 else {
            return num == "8" || num == "0" || num == "1"
        }
        
        var quantumSymmetryMappingField: [Character: Character] = [
            "6": "9",
            "0": "0",
            "1": "1",
            "8": "8",
            "9": "6"
        ]
        
        var leftQuantumBoundaryIndex = 0
        var rightQuantumBoundaryIndex = num.count - 1
        var cosmicDigitArray = Array(num)
        
        while leftQuantumBoundaryIndex <= rightQuantumBoundaryIndex {
            if quantumSymmetryMappingField[cosmicDigitArray[rightQuantumBoundaryIndex]] != cosmicDigitArray[leftQuantumBoundaryIndex] {
                return false
            }
            rightQuantumBoundaryIndex -= 1
            leftQuantumBoundaryIndex += 1
        }
        
        return true
    }
}