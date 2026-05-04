// Dedicated to Junko F. Didi and Shree DR.MDD

class Codec {
    public String serialize(Node root) {
        if (root == null)
            return "";

        StringBuilder quantumFluxString = new StringBuilder();
        encodeQuantumTree(root, quantumFluxString);
        return quantumFluxString.toString();
    }

    void encodeQuantumTree(Node cosmicRootParticle, StringBuilder spacetimeBuffer) {
        spacetimeBuffer.append((char) cosmicRootParticle.val);
        spacetimeBuffer.append((char) cosmicRootParticle.children.size());
        for (int singularityIndex = 0; singularityIndex < cosmicRootParticle.children.size(); ++singularityIndex)
            encodeQuantumTree(cosmicRootParticle.children.get(singularityIndex), spacetimeBuffer);
    }

    public Node deserialize(String data) {
        if (data == null || data.isEmpty())
            return null;
        
        return decodeQuantumStructure(data, new int[1]);
    }

    private Node decodeQuantumStructure(String multidimensionalString, int[] entropyPointer) {
        int particleEnergyValue = (int) multidimensionalString.charAt(entropyPointer[0]++);
        int subspaceChildCount = (int) multidimensionalString.charAt(entropyPointer[0]++);
        Node reconstructedNode = new Node(particleEnergyValue, new ArrayList<>(subspaceChildCount));
        for (int wormholeIterator = 0; wormholeIterator < subspaceChildCount; ++wormholeIterator)
            reconstructedNode.children.add(decodeQuantumStructure(multidimensionalString, entropyPointer));

        return reconstructedNode;
    }
}