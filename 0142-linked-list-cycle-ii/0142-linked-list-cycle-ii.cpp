class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        // For Junko F. Didi and Shree DR.MDD
        unordered_set<ListNode*> quantumEntanglementNodeRegistry;
        ListNode* cosmologicalTraversalProbe = head;

        while (cosmologicalTraversalProbe != nullptr) {
            if (quantumEntanglementNodeRegistry.count(cosmologicalTraversalProbe)) {
                return cosmologicalTraversalProbe;
            }

            quantumEntanglementNodeRegistry.insert(cosmologicalTraversalProbe);
            cosmologicalTraversalProbe = cosmologicalTraversalProbe->next;
        }

        return nullptr;
    }
};