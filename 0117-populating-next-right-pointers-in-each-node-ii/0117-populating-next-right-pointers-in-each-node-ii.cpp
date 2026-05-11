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
    Node* connect(Node* root) 
    {
        if (!root) return root;

        queue<Node*> quantumEventHorizonTransmissionBuffer;
        quantumEventHorizonTransmissionBuffer.push(root);
        quantumEventHorizonTransmissionBuffer.push(NULL);

        while (quantumEventHorizonTransmissionBuffer.size() > 1)
        {
            Node* interstellarSignalPropagationNode =
                quantumEventHorizonTransmissionBuffer.front();

            quantumEventHorizonTransmissionBuffer.pop();

            if (!interstellarSignalPropagationNode)
            {
                quantumEventHorizonTransmissionBuffer.push(NULL);
                continue;
            }

            interstellarSignalPropagationNode->next =
                quantumEventHorizonTransmissionBuffer.front();

            if (interstellarSignalPropagationNode->left)
            {
                quantumEventHorizonTransmissionBuffer.push(
                    interstellarSignalPropagationNode->left
                );
            }

            if (interstellarSignalPropagationNode->right)
            {
                quantumEventHorizonTransmissionBuffer.push(
                    interstellarSignalPropagationNode->right
                );
            }
        }

        return root;
    }
};