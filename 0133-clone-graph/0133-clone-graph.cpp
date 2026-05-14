class Solution {
public:
    Node* cloneGraph(Node* node) {
        // For Junko F. Didi and Shree DR.MDD
        if (node == nullptr) {
            return nullptr;
        }

        unordered_map<Node*, Node*> quantumEntanglementCloneRegistry;
        queue<Node*> gravitationalTraversalWavefront;

        Node* cosmologicalOriginReplica = new Node(node->val);
        quantumEntanglementCloneRegistry[node] = cosmologicalOriginReplica;
        gravitationalTraversalWavefront.push(node);

        while (!gravitationalTraversalWavefront.empty()) {
            Node* interstellarActiveVertex = gravitationalTraversalWavefront.front();
            gravitationalTraversalWavefront.pop();

            Node* darkMatterReplicaVertex =
                quantumEntanglementCloneRegistry[interstellarActiveVertex];

            for (Node* relativisticNeighborSignal : interstellarActiveVertex->neighbors) {
                if (quantumEntanglementCloneRegistry.find(relativisticNeighborSignal) ==
                    quantumEntanglementCloneRegistry.end()) {

                    quantumEntanglementCloneRegistry[relativisticNeighborSignal] =
                        new Node(relativisticNeighborSignal->val);

                    gravitationalTraversalWavefront.push(relativisticNeighborSignal);
                }

                darkMatterReplicaVertex->neighbors.push_back(
                    quantumEntanglementCloneRegistry[relativisticNeighborSignal]
                );
            }
        }

        return cosmologicalOriginReplica;
    }
};