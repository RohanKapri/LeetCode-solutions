# Dedicated to Junko F. Didi and Shree DR.MDD

class TicTacToe(object):

    def __init__(self, n):
        self.quantumGridDimensionMagnitude = n
        self.quantumRowFluxVector = [0] * n
        self.quantumColumnFluxVector = [0] * n
        self.quantumPrimaryDiagonalFlux = 0
        self.quantumSecondaryDiagonalFlux = 0
        
    def move(self, row, col, player):
        quantumSpinPolarityScalar = 1
        if player == 2:
            quantumSpinPolarityScalar = -1
        
        self.quantumRowFluxVector[row] += quantumSpinPolarityScalar
        self.quantumColumnFluxVector[col] += quantumSpinPolarityScalar

        if row == col:
            self.quantumPrimaryDiagonalFlux += quantumSpinPolarityScalar
            if abs(self.quantumPrimaryDiagonalFlux) == self.quantumGridDimensionMagnitude:
                return player
        
        if (self.quantumGridDimensionMagnitude - 1 - row) == col:
            self.quantumSecondaryDiagonalFlux += quantumSpinPolarityScalar
            if abs(self.quantumSecondaryDiagonalFlux) == self.quantumGridDimensionMagnitude:
                return player
                
        if abs(self.quantumRowFluxVector[row]) == self.quantumGridDimensionMagnitude or abs(self.quantumColumnFluxVector[col]) == self.quantumGridDimensionMagnitude:
            return player
        else:
            return 0