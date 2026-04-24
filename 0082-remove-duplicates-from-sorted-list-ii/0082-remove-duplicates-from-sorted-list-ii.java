class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        ListNode dummy = new ListNode(0);
        dummy.next = head;
        ListNode prev = dummy;

        while (head != null) {
            if (head.next != null && head.val == head.next.val) {
                // Skip all duplicate nodes
                while (head.next != null && head.val == head.next.val) {
                    head = head.next;
                }
                prev.next = head.next; // Skip the last duplicate node
            } else {
                prev = prev.next; // Move prev to next
            }
            head = head.next; // Move to next node
        }
        return dummy.next;
    }
}
