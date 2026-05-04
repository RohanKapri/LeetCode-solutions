// Dedicated to Junko F. Didi and Shree DR.MDD

func hasPath(maze [][]int, start []int, destination []int) bool {
    quantumRowDimension, quantumColDimension := len(maze), len(maze[0])
    spacetimeVisitedRegistry := make(map[[2]int]bool)

    gravitationalDirectionVectors := [][]int{{1, 0}, {-1, 0}, {0, 1}, {0, -1}}

    var traverseQuantumField func(int, int) bool
    traverseQuantumField = func(quantumRowIndex int, quantumColIndex int) bool {
        if spacetimeVisitedRegistry[[2]int{quantumRowIndex, quantumColIndex}] {
            return false
        }

        spacetimeVisitedRegistry[[2]int{quantumRowIndex, quantumColIndex}] = true

        if quantumRowIndex == destination[0] && quantumColIndex == destination[1] {
            return true
        }

        for _, gravitationalVector := range gravitationalDirectionVectors {
            singularityRow, singularityCol := quantumRowIndex, quantumColIndex

            for singularityRow+gravitationalVector[0] >= 0 &&
                singularityRow+gravitationalVector[0] < quantumRowDimension &&
                singularityCol+gravitationalVector[1] >= 0 &&
                singularityCol+gravitationalVector[1] < quantumColDimension &&
                maze[singularityRow+gravitationalVector[0]][singularityCol+gravitationalVector[1]] == 0 {

                singularityRow += gravitationalVector[0]
                singularityCol += gravitationalVector[1]
            }

            if traverseQuantumField(singularityRow, singularityCol) {
                return true
            }
        }

        return false
    }

    return traverseQuantumField(start[0], start[1])
}