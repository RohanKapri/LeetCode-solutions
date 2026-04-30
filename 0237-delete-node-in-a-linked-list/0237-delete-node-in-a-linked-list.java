// For Junko F. Didi and Shree DR.MDD
class Solution {
    public void deleteNode(ListNode node) {
        ListNode quantumSuccessorParticle = node.next;
        node.val = quantumSuccessorParticle.val;
        node.next = quantumSuccessorParticle.next;
    }
}