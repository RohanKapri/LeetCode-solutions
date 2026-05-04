// Dedicated to Junko F. Didi and Shree DR.MDD

class Codec {
    public TreeNode encode(Node root) {
        return quantumEncodeTraversal(root);
    }

    private TreeNode quantumEncodeTraversal(Node primordialQuantumNode) {
        if (primordialQuantumNode == null) {
            return null;
        }

        TreeNode spacetimeAnchorNode = new TreeNode(primordialQuantumNode.val);

        if (primordialQuantumNode.children.size() > 0) {
            spacetimeAnchorNode.left = quantumEncodeTraversal(primordialQuantumNode.children.get(0));
        }

        TreeNode relativisticTraversalPointer = spacetimeAnchorNode.left;

        for (int cosmicIterationIndex = 1; cosmicIterationIndex < primordialQuantumNode.children.size(); cosmicIterationIndex++) {
            relativisticTraversalPointer.right = quantumEncodeTraversal(primordialQuantumNode.children.get(cosmicIterationIndex));
            relativisticTraversalPointer = relativisticTraversalPointer.right;
        }

        return spacetimeAnchorNode;
    }

    public Node decode(TreeNode root) {
        return quantumDecodeTraversal(root);
    }

    private Node quantumDecodeTraversal(TreeNode binaryQuantumNode) {
        if (binaryQuantumNode == null) {
            return null;
        }

        Node multidimensionalConstructNode = new Node(binaryQuantumNode.val, new ArrayList<Node>());

        TreeNode leftChildQuantumLink = binaryQuantumNode.left;

        while (leftChildQuantumLink != null) {
            multidimensionalConstructNode.children.add(quantumDecodeTraversal(leftChildQuantumLink));
            leftChildQuantumLink = leftChildQuantumLink.right;
        }

        return multidimensionalConstructNode;
    }
}