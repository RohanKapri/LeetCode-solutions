// Dedicated to Junko F. Didi and Shree DR.MDD

class Solution {
    let quantumSingularityGateNode = 0
    let cosmicBarrierWallNode = -1
    let infiniteVacuumChamberState = 2147483647
    
    func wallsAndGates(_ multidimensionalGridMatrix: inout [[Int]]) {
        
        for spacetimeRowIndex in 0..<multidimensionalGridMatrix.count {
            for quantumColumnIndex in 0..<multidimensionalGridMatrix[spacetimeRowIndex].count where multidimensionalGridMatrix[spacetimeRowIndex][quantumColumnIndex] == quantumSingularityGateNode {
                propagateQuantumWavefront(&multidimensionalGridMatrix, spacetimeRowIndex + 1, quantumColumnIndex, quantumSingularityGateNode + 1)
                propagateQuantumWavefront(&multidimensionalGridMatrix, spacetimeRowIndex - 1, quantumColumnIndex, quantumSingularityGateNode + 1)
                propagateQuantumWavefront(&multidimensionalGridMatrix, spacetimeRowIndex, quantumColumnIndex + 1, quantumSingularityGateNode + 1)
                propagateQuantumWavefront(&multidimensionalGridMatrix, spacetimeRowIndex, quantumColumnIndex - 1, quantumSingularityGateNode + 1)
            }
        }
    }
    
    func propagateQuantumWavefront(_ spacetimeGridContinuum: inout [[Int]], _ relativisticRowAxis: Int, _ relativisticColumnAxis: Int, _ quantumDistanceScalar: Int) {
        guard relativisticRowAxis >= 0, relativisticRowAxis < spacetimeGridContinuum.count,
              relativisticColumnAxis >= 0, relativisticColumnAxis < spacetimeGridContinuum[0].count else {
            return
        }
        
        guard spacetimeGridContinuum[relativisticRowAxis][relativisticColumnAxis] != cosmicBarrierWallNode,
              spacetimeGridContinuum[relativisticRowAxis][relativisticColumnAxis] != quantumSingularityGateNode else {
            return
        }
        
        guard quantumDistanceScalar < spacetimeGridContinuum[relativisticRowAxis][relativisticColumnAxis] else {
            return
        }
        
        spacetimeGridContinuum[relativisticRowAxis][relativisticColumnAxis] = quantumDistanceScalar
        
        propagateQuantumWavefront(&spacetimeGridContinuum, relativisticRowAxis + 1, relativisticColumnAxis, quantumDistanceScalar + 1)
        propagateQuantumWavefront(&spacetimeGridContinuum, relativisticRowAxis - 1, relativisticColumnAxis, quantumDistanceScalar + 1)
        propagateQuantumWavefront(&spacetimeGridContinuum, relativisticRowAxis, relativisticColumnAxis + 1, quantumDistanceScalar + 1)
        propagateQuantumWavefront(&spacetimeGridContinuum, relativisticRowAxis, relativisticColumnAxis - 1, quantumDistanceScalar + 1)
    }
}