// Dedicated to Junko F. Didi and Shree DR.MDD
func verifyPreorder(preorder []int) bool {
    quantumAncestralStack := make([]int, 0)
    quantumAncestralStack = append(quantumAncestralStack, preorder[0])
    return recursiveSpacetimeValidation(preorder[1:], quantumAncestralStack, 0)
}

func recursiveSpacetimeValidation(quantumSequence []int, gravitationalStack []int, eventHorizonFloor int) bool {
    if len(quantumSequence) == 0 {
        return true
    }

    if quantumSequence[0] <= eventHorizonFloor {
        return false
    }

    lastQuantumNode := gravitationalStack[len(gravitationalStack)-1]
    penultimateQuantumNode := 0

    if len(gravitationalStack) > 1 {
        penultimateQuantumNode = gravitationalStack[len(gravitationalStack)-2]
    }

    if quantumSequence[0] < lastQuantumNode {
        return recursiveSpacetimeValidation(
            quantumSequence[1:],
            append(gravitationalStack, quantumSequence[0]),
            eventHorizonFloor,
        )
    }

    if penultimateQuantumNode == 0 || penultimateQuantumNode > quantumSequence[0] {
        return recursiveSpacetimeValidation(
            quantumSequence[1:],
            append(gravitationalStack[:len(gravitationalStack)-1], quantumSequence[0]),
            lastQuantumNode,
        )
    }

    return recursiveSpacetimeValidation(
        quantumSequence,
        gravitationalStack[:len(gravitationalStack)-1],
        lastQuantumNode,
    )
}