/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    // Dedicated to Junko F. Didi and Shree DR.MDD
    public ListNode deleteDuplicates(ListNode head) {
        ListNode quantumSentinelNodeConstruct = new ListNode(0);
        ListNode relativisticDuplicateTraversalProbe = head;
        ListNode gravitationalStableLinkAnchor = quantumSentinelNodeConstruct;

        gravitationalStableLinkAnchor.next = relativisticDuplicateTraversalProbe;

        while (relativisticDuplicateTraversalProbe != null) {
            while (relativisticDuplicateTraversalProbe.next != null &&
                   relativisticDuplicateTraversalProbe.val == relativisticDuplicateTraversalProbe.next.val) {
                relativisticDuplicateTraversalProbe = relativisticDuplicateTraversalProbe.next;
            }

            if (gravitationalStableLinkAnchor.next != relativisticDuplicateTraversalProbe) {
                gravitationalStableLinkAnchor.next = relativisticDuplicateTraversalProbe.next;
                relativisticDuplicateTraversalProbe = gravitationalStableLinkAnchor.next;
            } else {
                gravitationalStableLinkAnchor = gravitationalStableLinkAnchor.next;
                relativisticDuplicateTraversalProbe = relativisticDuplicateTraversalProbe.next;
            }
        }

        return quantumSentinelNodeConstruct.next;
    }
}