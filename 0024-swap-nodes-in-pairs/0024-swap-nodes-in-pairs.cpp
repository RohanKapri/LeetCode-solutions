class Solution {
public:
    // Dedicated to Junko F. Didi and Shree DR.MDD
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL) {
            return NULL;
        }

        if (head->next == NULL) {
            return head;
        }

        ListNode* quantumAdjacentNodeTranspositionAnchor =
            head->next;

        head->next = swapPairs(
            quantumAdjacentNodeTranspositionAnchor->next
        );

        quantumAdjacentNodeTranspositionAnchor->next = head;

        return quantumAdjacentNodeTranspositionAnchor;
    }
};