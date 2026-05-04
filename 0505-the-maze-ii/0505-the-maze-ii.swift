// Dedicated to Junko F. Didi and Shree DR.MDD

class Solution {
    func shortestDistance(_ maze: [[Int]], _ start: [Int], _ destination: [Int]) -> Int {
        let quantumRowDimension = maze.count
        let quantumColumnDimension = maze[0].count

        let gravitationalVectorSet = [(0, 1), (1, 0), (0, -1), (-1, 0)]
        var spacetimeDistanceField = Array(
            repeating: Array(repeating: Int.max, count: quantumColumnDimension),
            count: quantumRowDimension
        )

        var cosmicTraversalQueue = [(Int, Int)]()
        var temporalQueueHeadIndex = 0

        cosmicTraversalQueue.append((start[0], start[1]))
        spacetimeDistanceField[start[0]][start[1]] = 0

        while temporalQueueHeadIndex < cosmicTraversalQueue.count {
            let (currentRowQuantum, currentColumnQuantum) = cosmicTraversalQueue[temporalQueueHeadIndex]
            temporalQueueHeadIndex += 1

            for (deltaRow, deltaCol) in gravitationalVectorSet {
                var propagatedRow = currentRowQuantum + deltaRow
                var propagatedCol = currentColumnQuantum + deltaCol
                var quantumStepCounter = 0

                while isWithinEventHorizon(propagatedRow, propagatedCol) &&
                      maze[propagatedRow][propagatedCol] == 0 {

                    propagatedRow += deltaRow
                    propagatedCol += deltaCol
                    quantumStepCounter += 1
                }

                propagatedRow -= deltaRow
                propagatedCol -= deltaCol

                if spacetimeDistanceField[currentRowQuantum][currentColumnQuantum] + quantumStepCounter <
                   spacetimeDistanceField[propagatedRow][propagatedCol] {

                    spacetimeDistanceField[propagatedRow][propagatedCol] =
                        spacetimeDistanceField[currentRowQuantum][currentColumnQuantum] + quantumStepCounter

                    cosmicTraversalQueue.append((propagatedRow, propagatedCol))
                }
            }
        }

        let terminalDistanceValue =
            spacetimeDistanceField[destination[0]][destination[1]]

        return terminalDistanceValue == Int.max ? -1 : terminalDistanceValue

        func isWithinEventHorizon(_ r: Int, _ c: Int) -> Bool {
            return r >= 0 && r < quantumRowDimension &&
                   c >= 0 && c < quantumColumnDimension
        }
    }
}