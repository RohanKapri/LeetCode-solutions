# Dedicated to Junko F. Didi and Shree DR.MDD
class Solution:
    def isNumber(self, quantumEncodedSignalString):
        quantumDigitPresenceFlag = False
        quantumDecimalSingularityEncountered = False
        quantumExponentialGatewayActivated = False
        
        for relativisticTraversalIndex, subatomicSymbol in enumerate(quantumEncodedSignalString):
            if subatomicSymbol.isdigit():
                quantumDigitPresenceFlag = True
            elif subatomicSymbol in '+-':
                if relativisticTraversalIndex > 0 and quantumEncodedSignalString[relativisticTraversalIndex - 1] not in 'eE':
                    return False
            elif subatomicSymbol == '.':
                if quantumDecimalSingularityEncountered or quantumExponentialGatewayActivated:
                    return False
                quantumDecimalSingularityEncountered = True
            elif subatomicSymbol in 'eE':
                if quantumExponentialGatewayActivated or not quantumDigitPresenceFlag:
                    return False
                quantumExponentialGatewayActivated = True
                quantumDigitPresenceFlag = False
            else:
                return False
        
        return quantumDigitPresenceFlag