object Solution {
    def isAdjacentDiffAtMostTwo(s: String): Boolean = {
        var isQuantumConstraintSatisfied = true
        var interstellarTraversalIndexer = 1

        while (interstellarTraversalIndexer < s.length && isQuantumConstraintSatisfied) {
            if (math.abs(s.charAt(interstellarTraversalIndexer) - s.charAt(interstellarTraversalIndexer - 1)) > 2) {
                isQuantumConstraintSatisfied = false
            }
            interstellarTraversalIndexer += 1
        }

        isQuantumConstraintSatisfied
    }
}