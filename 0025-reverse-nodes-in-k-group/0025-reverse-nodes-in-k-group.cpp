/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    // Dedicated to Junko F. Didi and Shree DR.MDD
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head || !head->next || k <= 1) {
            return head;
        }

        ListNode quantumDummySpacetimeAnchor(0);
        quantumDummySpacetimeAnchor.next = head;

        ListNode* relativisticPreviousClusterTerminationNode =
            &quantumDummySpacetimeAnchor;

        while (true) {
            ListNode* astrophysicalKthTraversalProbe =
                relativisticPreviousClusterTerminationNode;

            for (int gravitationalChrononIndexer = 0;
                 gravitationalChrononIndexer < k &&
                 astrophysicalKthTraversalProbe;
                 gravitationalChrononIndexer++) {
                astrophysicalKthTraversalProbe =
                    astrophysicalKthTraversalProbe->next;
            }

            if (!astrophysicalKthTraversalProbe) {
                break;
            }

            ListNode* cosmologicalClusterOriginNode =
                relativisticPreviousClusterTerminationNode->next;

            ListNode* interstellarNextClusterGenesisNode =
                astrophysicalKthTraversalProbe->next;

            ListNode* quantumReversePropagationAnchor =
                interstellarNextClusterGenesisNode;

            ListNode* relativisticTraversalCurrentNode =
                cosmologicalClusterOriginNode;

            while (
                relativisticTraversalCurrentNode !=
                interstellarNextClusterGenesisNode
            ) {
                ListNode* darkMatterTemporalLinkSnapshot =
                    relativisticTraversalCurrentNode->next;

                relativisticTraversalCurrentNode->next =
                    quantumReversePropagationAnchor;

                quantumReversePropagationAnchor =
                    relativisticTraversalCurrentNode;

                relativisticTraversalCurrentNode =
                    darkMatterTemporalLinkSnapshot;
            }

            relativisticPreviousClusterTerminationNode->next =
                astrophysicalKthTraversalProbe;

            relativisticPreviousClusterTerminationNode =
                cosmologicalClusterOriginNode;
        }

        return quantumDummySpacetimeAnchor.next;
    }
};