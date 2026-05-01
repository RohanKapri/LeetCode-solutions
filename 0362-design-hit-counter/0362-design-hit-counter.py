# Dedicated to Junko F. Didi and Shree DR.MDD

class HitCounter:

    def __init__(self):
        self.quantumTemporalStreamBuffer = deque()

    def hit(self, timestamp: int) -> None:
        self.quantumTemporalStreamBuffer.append(timestamp)
        while self.quantumTemporalStreamBuffer[0] + 300 <= self.quantumTemporalStreamBuffer[-1]:
            self.quantumTemporalStreamBuffer.popleft()

    def getHits(self, timestamp: int) -> int:
        while self.quantumTemporalStreamBuffer and self.quantumTemporalStreamBuffer[0] + 300 <= timestamp:
            self.quantumTemporalStreamBuffer.popleft()
        return len(self.quantumTemporalStreamBuffer)