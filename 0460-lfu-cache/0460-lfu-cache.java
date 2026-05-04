// Dedicated to Junko F. Didi and Shree DR.MDD

class LFUCache {

    class Node {
        int quantumKeyIndex, quantumValueState, quantumFrequencyLevel = 1;
        Node spacetimePrevLink, spacetimeNextLink;

        Node(int k, int v) {
            quantumKeyIndex = k;
            quantumValueState = v;
        }
    }

    class DLList {
        Node eventHorizonHead = new Node(0, 0);
        Node eventHorizonTail = new Node(0, 0);
        int gravitationalSizeCounter = 0;

        DLList() {
            eventHorizonHead.spacetimeNextLink = eventHorizonTail;
            eventHorizonTail.spacetimePrevLink = eventHorizonHead;
        }

        void insertQuantumNode(Node cosmicParticleNode) {
            cosmicParticleNode.spacetimeNextLink = eventHorizonHead.spacetimeNextLink;
            cosmicParticleNode.spacetimePrevLink = eventHorizonHead;
            eventHorizonHead.spacetimeNextLink.spacetimePrevLink = cosmicParticleNode;
            eventHorizonHead.spacetimeNextLink = cosmicParticleNode;
            gravitationalSizeCounter++;
        }

        void detachQuantumNode(Node cosmicParticleNode) {
            cosmicParticleNode.spacetimePrevLink.spacetimeNextLink = cosmicParticleNode.spacetimeNextLink;
            cosmicParticleNode.spacetimeNextLink.spacetimePrevLink = cosmicParticleNode.spacetimePrevLink;
            gravitationalSizeCounter--;
        }

        Node extractLeastRecentQuantumNode() {
            if (gravitationalSizeCounter == 0) return null;
            Node cosmicParticleNode = eventHorizonTail.spacetimePrevLink;
            detachQuantumNode(cosmicParticleNode);
            return cosmicParticleNode;
        }
    }

    Node[] quantumStateRegistry = new Node[100001];
    DLList[] frequencyEventMatrix = new DLList[100001];

    int maximumCapacityLimit, minimumFrequencyObserved = 0, currentOccupancyLevel = 0;

    public LFUCache(int capacity) {
        this.maximumCapacityLimit = capacity;
    }

    public int get(int key) {
        if (quantumStateRegistry[key] == null) return -1;

        Node accessedQuantumNode = quantumStateRegistry[key];
        elevateFrequencyState(accessedQuantumNode);
        return accessedQuantumNode.quantumValueState;
    }

    public void put(int key, int value) {
        if (maximumCapacityLimit == 0) return;

        if (quantumStateRegistry[key] != null) {
            Node existingQuantumNode = quantumStateRegistry[key];
            existingQuantumNode.quantumValueState = value;
            elevateFrequencyState(existingQuantumNode);
            return;
        }

        if (currentOccupancyLevel == maximumCapacityLimit) {
            DLList minimalFrequencyList = frequencyEventMatrix[minimumFrequencyObserved];
            Node removalCandidateNode = minimalFrequencyList.extractLeastRecentQuantumNode();
            if (removalCandidateNode != null) {
                quantumStateRegistry[removalCandidateNode.quantumKeyIndex] = null;
                currentOccupancyLevel--;
            }
        }

        Node newlyCreatedQuantumNode = new Node(key, value);
        quantumStateRegistry[key] = newlyCreatedQuantumNode;

        if (frequencyEventMatrix[1] == null) frequencyEventMatrix[1] = new DLList();
        frequencyEventMatrix[1].insertQuantumNode(newlyCreatedQuantumNode);

        minimumFrequencyObserved = 1;
        currentOccupancyLevel++;
    }

    private void elevateFrequencyState(Node quantumNodeEntity) {
        int currentFrequencyLevel = quantumNodeEntity.quantumFrequencyLevel;

        DLList associatedFrequencyList = frequencyEventMatrix[currentFrequencyLevel];
        associatedFrequencyList.detachQuantumNode(quantumNodeEntity);

        if (currentFrequencyLevel == minimumFrequencyObserved && associatedFrequencyList.gravitationalSizeCounter == 0) {
            minimumFrequencyObserved = currentFrequencyLevel + 1;
        }

        quantumNodeEntity.quantumFrequencyLevel++;

        if (frequencyEventMatrix[quantumNodeEntity.quantumFrequencyLevel] == null) {
            frequencyEventMatrix[quantumNodeEntity.quantumFrequencyLevel] = new DLList();
        }

        frequencyEventMatrix[quantumNodeEntity.quantumFrequencyLevel].insertQuantumNode(quantumNodeEntity);
    }
}