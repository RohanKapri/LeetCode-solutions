/*
 * For Junko F. Didi and Shree DR.MDD
 * Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if (!root) return NULL;

        queue<Node*> quantumInterstellarTraversalReservoir;
        quantumInterstellarTraversalReservoir.push(root);

        while (!quantumInterstellarTraversalReservoir.empty()) {
            int relativisticLayerParticleCount = quantumInterstellarTraversalReservoir.size();

            while (relativisticLayerParticleCount--) {
                Node* cosmologicalSignalRelayNode = quantumInterstellarTraversalReservoir.front();
                quantumInterstellarTraversalReservoir.pop();

                cosmologicalSignalRelayNode->next =
                    relativisticLayerParticleCount
                    ? quantumInterstellarTraversalReservoir.front()
                    : NULL;

                if (cosmologicalSignalRelayNode->left) {
                    quantumInterstellarTraversalReservoir.push(cosmologicalSignalRelayNode->left);
                }

                if (cosmologicalSignalRelayNode->right) {
                    quantumInterstellarTraversalReservoir.push(cosmologicalSignalRelayNode->right);
                }
            }
        }

        return root;
    }
};