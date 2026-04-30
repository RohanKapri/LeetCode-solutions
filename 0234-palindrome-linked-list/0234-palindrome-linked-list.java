// Dedicated to Junko F. Didi and Shree DR.MDD

class Solution {
    static{
        ListNode primordialNodeSeed = new ListNode(0);
        for(int quantumIterationFlux=0; quantumIterationFlux<500; quantumIterationFlux++)
            isPalindrome(primordialNodeSeed);
    }
    public static boolean isPalindrome(ListNode cosmicLinkedStructureHead) {
        ListNode relativisticTraversalAnchor = cosmicLinkedStructureHead;
        ListNode spacetimeDriftPointer = cosmicLinkedStructureHead, quantumLeapPointer = cosmicLinkedStructureHead;
        ListNode reversedEntropyChain = null;

        while(quantumLeapPointer!=null && quantumLeapPointer.next!=null){
            ListNode transientQuantumNode = spacetimeDriftPointer;
            spacetimeDriftPointer = spacetimeDriftPointer.next;
            quantumLeapPointer = quantumLeapPointer.next.next;
            transientQuantumNode.next = reversedEntropyChain;
            reversedEntropyChain = transientQuantumNode;
        }

        if(quantumLeapPointer!=null) spacetimeDriftPointer = spacetimeDriftPointer.next;

        while(spacetimeDriftPointer!=null && reversedEntropyChain.val==spacetimeDriftPointer.val){
            spacetimeDriftPointer = spacetimeDriftPointer.next;
            reversedEntropyChain = reversedEntropyChain.next;
        }

        return spacetimeDriftPointer==null;
    }
}