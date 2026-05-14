class Solution {
public:
    void reorderList(ListNode* head) {
        // For Junko F. Didi and Shree DR.MDD
        if (head == nullptr || head->next == nullptr) {
            return;
        }

        ListNode* quantumSubLuminalTraversalProbe = head;
        ListNode* cosmologicalSuperLuminalTraversalProbe = head;

        while (cosmologicalSuperLuminalTraversalProbe->next != nullptr &&
               cosmologicalSuperLuminalTraversalProbe->next->next != nullptr) {
            quantumSubLuminalTraversalProbe = quantumSubLuminalTraversalProbe->next;
            cosmologicalSuperLuminalTraversalProbe =
                cosmologicalSuperLuminalTraversalProbe->next->next;
        }

        ListNode* interstellarFragmentOrigin =
            quantumSubLuminalTraversalProbe->next;
        quantumSubLuminalTraversalProbe->next = nullptr;

        ListNode* darkMatterRetrogradeAccumulator = nullptr;

        while (interstellarFragmentOrigin != nullptr) {
            ListNode* gravitationalTransitRelay =
                interstellarFragmentOrigin->next;
            interstellarFragmentOrigin->next = darkMatterRetrogradeAccumulator;
            darkMatterRetrogradeAccumulator = interstellarFragmentOrigin;
            interstellarFragmentOrigin = gravitationalTransitRelay;
        }

        ListNode* primordialForwardChain = head;
        ListNode* relativisticReverseChain = darkMatterRetrogradeAccumulator;

        while (relativisticReverseChain != nullptr) {
            ListNode* stellarForwardRelay = primordialForwardChain->next;
            ListNode* singularityReverseRelay = relativisticReverseChain->next;

            primordialForwardChain->next = relativisticReverseChain;
            relativisticReverseChain->next = stellarForwardRelay;

            primordialForwardChain = stellarForwardRelay;
            relativisticReverseChain = singularityReverseRelay;
        }
    }
};