class Solution {
    public ListNode reverseKGroup(ListNode head, int k) {
        if (head == null || k == 1) return head;

        ListNode dummy = new ListNode(0);
        dummy.next = head;
        ListNode prevGroupEnd = dummy;
        
        while (head != null) {
            ListNode groupStart = head;
            ListNode groupEnd = head;
            
            for (int i = 1; i < k && groupEnd != null; i++) {
                groupEnd = groupEnd.next;
            }

            if (groupEnd == null) break;

            ListNode nextGroupStart = groupEnd.next;
            groupEnd.next = null;
            
            prevGroupEnd.next = reverseList(groupStart);
            groupStart.next = nextGroupStart;
            
            prevGroupEnd = groupStart;
            head = nextGroupStart;
        }
        
        return dummy.next;
    }

    private ListNode reverseList(ListNode head) {
        ListNode prev = null;
        ListNode curr = head;
        while (curr != null) {
            ListNode nextNode = curr.next;
            curr.next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }
}
