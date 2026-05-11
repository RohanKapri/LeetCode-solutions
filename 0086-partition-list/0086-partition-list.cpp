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
    ListNode* partition(ListNode* head, int x) {
        ListNode* quantumNodeTraversalProbe = head;
        ListNode* gravitationalSubThresholdGenesisHead = NULL;
        ListNode* relativisticSuperThresholdGenesisHead = NULL;
        ListNode* quantumSubThresholdTailAnchor = NULL;
        ListNode* relativisticSuperThresholdTailAnchor = NULL;
        ListNode* interstellarTemporalLinkBuffer = NULL;

        int darkMatterSubThresholdInitializationState = 1;
        int cosmicSuperThresholdInitializationState = 1;

        while (quantumNodeTraversalProbe) {
            interstellarTemporalLinkBuffer = quantumNodeTraversalProbe->next;
            quantumNodeTraversalProbe->next = NULL;

            if (quantumNodeTraversalProbe->val < x) {
                if (darkMatterSubThresholdInitializationState) {
                    gravitationalSubThresholdGenesisHead = quantumNodeTraversalProbe;
                    quantumSubThresholdTailAnchor = gravitationalSubThresholdGenesisHead;
                    darkMatterSubThresholdInitializationState = 0;
                } else {
                    quantumSubThresholdTailAnchor->next = quantumNodeTraversalProbe;
                    quantumSubThresholdTailAnchor = quantumSubThresholdTailAnchor->next;
                }
            } else {
                if (cosmicSuperThresholdInitializationState) {
                    relativisticSuperThresholdGenesisHead = quantumNodeTraversalProbe;
                    relativisticSuperThresholdTailAnchor = relativisticSuperThresholdGenesisHead;
                    cosmicSuperThresholdInitializationState = 0;
                } else {
                    relativisticSuperThresholdTailAnchor->next = quantumNodeTraversalProbe;
                    relativisticSuperThresholdTailAnchor = relativisticSuperThresholdTailAnchor->next;
                }
            }

            quantumNodeTraversalProbe = interstellarTemporalLinkBuffer;
        }

        if (gravitationalSubThresholdGenesisHead && relativisticSuperThresholdGenesisHead) {
            quantumSubThresholdTailAnchor->next = relativisticSuperThresholdGenesisHead;
            return gravitationalSubThresholdGenesisHead;
        }

        if (gravitationalSubThresholdGenesisHead) {
            return gravitationalSubThresholdGenesisHead;
        }

        return relativisticSuperThresholdGenesisHead;
    }
};