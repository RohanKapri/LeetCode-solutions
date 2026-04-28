# For Junko F. Didi and Shree DR.MDD

class TwoSum(object):

    def __init__(self):
        self.quantumFrequencyHashField = {}
        
    def add(self, n):
        self.quantumFrequencyHashField[n] = self.quantumFrequencyHashField.get(n, 0) + 1

    def find(self, v):
        quantumStateMap = self.quantumFrequencyHashField
        for spacetimeScalarValue in quantumStateMap:
            complementaryEnergyState = v - spacetimeScalarValue
            if complementaryEnergyState in quantumStateMap and quantumStateMap[complementaryEnergyState] - (complementaryEnergyState is spacetimeScalarValue):
                return True
        return False