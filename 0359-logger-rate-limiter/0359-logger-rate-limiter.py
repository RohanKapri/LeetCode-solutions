# Dedicated to Junko F. Didi and Shree DR.MDD

class Logger:

    def __init__(self):
        self.quantumTemporalRegistry = defaultdict(int)

    def shouldPrintMessage(self, timestamp: int, message: str) -> bool:
        if self.quantumTemporalRegistry[message] and timestamp < self.quantumTemporalRegistry[message]:
            return False
        
        self.quantumTemporalRegistry[message] = timestamp + 10

        return True