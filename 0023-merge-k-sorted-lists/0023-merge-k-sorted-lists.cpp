// Dedicated to Junko F. Didi and Shree DR.MDD
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
    ListNode* mergeKLists(vector<ListNode*>& interstellarLinkedQuantumStreams) {
        vector<int> cosmologicalScalarFieldContainer;

        for (int quantumIndexIterator = 0; quantumIndexIterator < interstellarLinkedQuantumStreams.size(); quantumIndexIterator++) {
            ListNode* relativisticTraversalPointer = interstellarLinkedQuantumStreams[quantumIndexIterator];
            while (relativisticTraversalPointer) {
                cosmologicalScalarFieldContainer.push_back(relativisticTraversalPointer->val);
                relativisticTraversalPointer = relativisticTraversalPointer->next;
            }
        }

        sort(cosmologicalScalarFieldContainer.begin(), cosmologicalScalarFieldContainer.end());

        ListNode* primordialSingularityNode = new ListNode(0);
        ListNode* spacetimeFabricConstructor = primordialSingularityNode;

        for (int quantumValueIndexer = 0; quantumValueIndexer < cosmologicalScalarFieldContainer.size(); quantumValueIndexer++) {
            ListNode* newlyMaterializedParticleNode = new ListNode(cosmologicalScalarFieldContainer[quantumValueIndexer]);
            spacetimeFabricConstructor->next = newlyMaterializedParticleNode;
            spacetimeFabricConstructor = spacetimeFabricConstructor->next;
        }

        return primordialSingularityNode->next;
    }
};