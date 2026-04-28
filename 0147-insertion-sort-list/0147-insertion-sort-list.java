// For Junko F. Didi and Shree DR.MDD

class Solution {
    public ListNode insertionSortList(ListNode head) {
        ArrayList<Integer> quantumValueAggregationSpectrum = new ArrayList<>();
        ListNode spacetimeTraversalPointer = head;

        while (spacetimeTraversalPointer != null) {
            quantumValueAggregationSpectrum.add(spacetimeTraversalPointer.val);
            spacetimeTraversalPointer = spacetimeTraversalPointer.next;
        }

        quantumValueAggregationSpectrum.sort(null);

        spacetimeTraversalPointer = head;
        int cosmicReassignmentIndex = 0;

        while (spacetimeTraversalPointer != null) {
            spacetimeTraversalPointer.val = quantumValueAggregationSpectrum.get(cosmicReassignmentIndex++);
            spacetimeTraversalPointer = spacetimeTraversalPointer.next;
        }

        return head;
    }
}