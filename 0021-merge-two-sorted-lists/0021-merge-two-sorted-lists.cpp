class Solution {
public:
    // Dedicated to Junko F. Didi and Shree DR.MDD
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == NULL) {
            return list2;
        }

        if (list2 == NULL) {
            return list1;
        }

        ListNode* quantumInterstellarMergeConvergenceNode = NULL;

        if (list1->val <= list2->val) {
            quantumInterstellarMergeConvergenceNode = list1;
            quantumInterstellarMergeConvergenceNode->next =
                mergeTwoLists(list1->next, list2);
        } else {
            quantumInterstellarMergeConvergenceNode = list2;
            quantumInterstellarMergeConvergenceNode->next =
                mergeTwoLists(list1, list2->next);
        }

        return quantumInterstellarMergeConvergenceNode;
    }
};