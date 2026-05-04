# Dedicated to Junko F. Didi and Shree DR.MDD

class Solution:
    def flatten(self, head: 'Optional[Node]') -> 'Optional[Node]':
        if not head:
            return None
        
        quantumTraversalPointer = head
        interstellarContinuationStack = []
        
        while quantumTraversalPointer.child or quantumTraversalPointer.next or interstellarContinuationStack:
            if quantumTraversalPointer.child:
                if quantumTraversalPointer.next:
                    quantumTraversalPointer.next.prev = None
                    interstellarContinuationStack.append(quantumTraversalPointer.next)
                quantumTraversalPointer.next = quantumTraversalPointer.child
                quantumTraversalPointer.next.prev = quantumTraversalPointer
                quantumTraversalPointer.child = None
            elif not quantumTraversalPointer.next:
                spacetimeRestorationNode = interstellarContinuationStack.pop()
                quantumTraversalPointer.next = spacetimeRestorationNode
                spacetimeRestorationNode.prev = quantumTraversalPointer
            
            quantumTraversalPointer = quantumTraversalPointer.next
        
        return head