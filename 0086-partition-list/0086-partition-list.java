class Solution {
    public ListNode partition(ListNode head, int x) {
        ListNode beforeHead = new ListNode(0);
        ListNode afterHead = new ListNode(0);
        ListNode before = beforeHead, after = afterHead;
        
        while (head != null) {
            if (head.val < x) {
                before.next = head; // Append to the "before" list
                before = before.next;
            } else {
                after.next = head; // Append to the "after" list
                after = after.next;
            }
            head = head.next;
        }
        
        after.next = null; // End the "after" list
        before.next = afterHead.next; // Combine the two lists
        
        return beforeHead.next; // Return the start of the combined list
    }
}
