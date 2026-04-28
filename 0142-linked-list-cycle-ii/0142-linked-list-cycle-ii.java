class Solution {
    public ListNode detectCycle(ListNode head) {
        if (head == null || head.next == null) {
            return null;
        }

        ListNode slow = head;
        ListNode fast = head;

        // Phase 1: Detect if a cycle exists
        while (fast != null && fast.next != null) {
            slow = slow.next; // move slow pointer by 1 step
            fast = fast.next.next; // move fast pointer by 2 steps
            
            if (slow == fast) {
                // Cycle detected, now find the starting node of the cycle
                ListNode start = head;
                while (start != slow) {
                    start = start.next;
                    slow = slow.next;
                }
                return start; // start is the node where the cycle begins
            }
        }

        // No cycle found
        return null;
    }
}
