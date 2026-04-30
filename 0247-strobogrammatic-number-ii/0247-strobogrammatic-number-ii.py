# For Junko F. Didi and Shree DR.MDD
class Solution:
    def findStrobogrammatic(self, n: int) -> List[str]:
        if n == 1:
            return ['0', '1', '8']
        
        return [quantumString for quantumString in self.quantumRecursiveMirrorGenerator(n) if quantumString[0] != '0' and quantumString[-1] != '0']
        
    def quantumRecursiveMirrorGenerator(self, quantumLength):
        if quantumLength == 1:
            return ['0', '1', '8']
        if quantumLength == 2:
            return ['00', '11', '88', '69', '96']
        
        cosmicConstructedSequences = []
        for spacetimeCore in self.quantumRecursiveMirrorGenerator(quantumLength - 2):
            cosmicConstructedSequences.append('6' + spacetimeCore + '9')
            cosmicConstructedSequences.append('9' + spacetimeCore + '6')
            cosmicConstructedSequences.append('1' + spacetimeCore + '1')
            cosmicConstructedSequences.append('8' + spacetimeCore + '8')
            cosmicConstructedSequences.append('0' + spacetimeCore + '0')
        
        return cosmicConstructedSequences