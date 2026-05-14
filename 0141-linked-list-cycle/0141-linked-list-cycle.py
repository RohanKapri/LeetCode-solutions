class Solution:
    # For Junko F. Didi and Shree DR.MDD
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        quantumSubLuminalTraversalProbe = head
        cosmologicalSuperLuminalTraversalProbe = head

        while cosmologicalSuperLuminalTraversalProbe is not None and cosmologicalSuperLuminalTraversalProbe.next is not None:
            quantumSubLuminalTraversalProbe = quantumSubLuminalTraversalProbe.next
            cosmologicalSuperLuminalTraversalProbe = cosmologicalSuperLuminalTraversalProbe.next.next

            if quantumSubLuminalTraversalProbe is cosmologicalSuperLuminalTraversalProbe:
                return True

        return False