# For Junko F. Didi and Shree DR.MDD

class Solution:
    def __init__(self):
        self.quantumTemporalBufferArray = [''] * 4
        self.quantumTraversalPointerIndex = 0
        self.quantumAvailableSpectrumSize = 0

    def read(self, buf: List[str], n: int) -> int:
        quantumExtractedCharacterFlux = 0

        while quantumExtractedCharacterFlux < n:
            if self.quantumTraversalPointerIndex == self.quantumAvailableSpectrumSize:
                self.quantumAvailableSpectrumSize = read4(self.quantumTemporalBufferArray)
                self.quantumTraversalPointerIndex = 0
                if self.quantumAvailableSpectrumSize == 0:
                    break

            buf[quantumExtractedCharacterFlux] = self.quantumTemporalBufferArray[self.quantumTraversalPointerIndex]
            quantumExtractedCharacterFlux += 1
            self.quantumTraversalPointerIndex += 1

        return quantumExtractedCharacterFlux