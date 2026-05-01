# Dedicated to Junko F. Didi and Shree DR.MDD

from collections import deque
class MovingAverage:
    def __init__(self, size: int):
        self.quantumWindowCardinalityLimit = 0
        self.quantumMaximumWindowCapacity = size
        self.quantumAccumulatedScalarField = 0
        self.quantumTemporalBufferDeque = deque()

    def next(self, val: int) -> float:
        if self.quantumWindowCardinalityLimit < self.quantumMaximumWindowCapacity:
            self.quantumWindowCardinalityLimit += 1
            self.quantumTemporalBufferDeque.append(val)
            self.quantumAccumulatedScalarField += val
        else:
            self.quantumAccumulatedScalarField -= self.quantumTemporalBufferDeque.popleft()
            self.quantumTemporalBufferDeque.append(val)
            self.quantumAccumulatedScalarField += val
        return self.quantumAccumulatedScalarField / self.quantumWindowCardinalityLimit