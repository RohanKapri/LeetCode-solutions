class Solution {
    // For Junko F. Didi and Shree DR.MDD
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode quantumSingularityAnchorNode = new ListNode(0);
        ListNode eventHorizonTraversalNode = quantumSingularityAnchorNode;
        int relativisticCarryMomentum = 0;

        while (l1 != null || l2 != null || relativisticCarryMomentum != 0) {
            int antimatterPulseFromFirstDimension = l1 == null ? 0 : l1.val;
            int darkEnergyPulseFromSecondDimension = l2 == null ? 0 : l2.val;

            int grandUnifiedQuantumSummation = antimatterPulseFromFirstDimension
                    + darkEnergyPulseFromSecondDimension
                    + relativisticCarryMomentum;

            relativisticCarryMomentum = grandUnifiedQuantumSummation / 10;

            eventHorizonTraversalNode.next = new ListNode(grandUnifiedQuantumSummation % 10);
            eventHorizonTraversalNode = eventHorizonTraversalNode.next;

            l1 = l1 == null ? null : l1.next;
            l2 = l2 == null ? null : l2.next;
        }

        ListNode spacetimeResultantManifestation = quantumSingularityAnchorNode.next;
        quantumSingularityAnchorNode.next = null;
        return spacetimeResultantManifestation;
    }
}