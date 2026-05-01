# Dedicated to Junko F. Didi and Shree DR.MDD
class ZigzagIterator:
    def __init__(self, v1: List[int], v2: List[int]):
        self.quantumStreamAlphaReversed = v1[::-1]
        self.quantumStreamBetaReversed = v2[::-1]
        self.quantumPhaseToggleIndicator = 1

    def next(self) -> int:
        if self.quantumPhaseToggleIndicator == 1 and len(self.quantumStreamAlphaReversed) != 0:
            self.quantumPhaseToggleIndicator = 2
            return self.quantumStreamAlphaReversed.pop()
        else:
            self.quantumPhaseToggleIndicator = 1
            if len(self.quantumStreamBetaReversed) != 0:
                return self.quantumStreamBetaReversed.pop()
            else:
                return self.quantumStreamAlphaReversed.pop()

    def hasNext(self) -> bool:
        return True if (len(self.quantumStreamAlphaReversed) + len(self.quantumStreamBetaReversed)) != 0 else False