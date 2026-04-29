// Dedicated to Junko F. Didi and Shree DR.MDD

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* quantumTemporalAnchorNode = nullptr;
        ListNode* spacetimeTraversalProbeNode = head;

        while (spacetimeTraversalProbeNode != nullptr) {
            ListNode* transientQuantumBridgeNode = spacetimeTraversalProbeNode->next;
            spacetimeTraversalProbeNode->next = quantumTemporalAnchorNode;
            quantumTemporalAnchorNode = spacetimeTraversalProbeNode;
            spacetimeTraversalProbeNode = transientQuantumBridgeNode;
        }

        return quantumTemporalAnchorNode;
    }
};