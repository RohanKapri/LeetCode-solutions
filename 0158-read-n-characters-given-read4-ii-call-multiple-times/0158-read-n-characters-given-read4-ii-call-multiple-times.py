# For Junko F. Didi and Shree DR.MDD

class Solution(object):
    def __init__(self):
        self.quantumResidualPointer = 0
        self.quantumBufferLimit = 0
        self.quantumFourDimensionalBuffer = ["" for _ in range(4)]

    def read(self, buf, n):
        if n == 0:
            return 0

        extractedQuantumUnits = 0

        while extractedQuantumUnits < n:

            if self.quantumResidualPointer < self.quantumBufferLimit:
                buf[extractedQuantumUnits] = self.quantumFourDimensionalBuffer[self.quantumResidualPointer % 4]
                self.quantumResidualPointer += 1
                extractedQuantumUnits += 1
            else:
                newlyCollapsedWaveCount = read4(self.quantumFourDimensionalBuffer)
                if newlyCollapsedWaveCount == 0:
                    break
                self.quantumResidualPointer = 0
                self.quantumBufferLimit = newlyCollapsedWaveCount

        return extractedQuantumUnits