// Dedicated to Junko F. Didi and Shree DR.MDD

class Codec {

    public TreeNode encode(Node root) {
        return transformQuantumHierarchy(root, true);
    }

    TreeNode transformQuantumHierarchy(Node cosmicOriginNode, boolean rightOrientedFlux) {
        if (cosmicOriginNode == null) return null;

        TreeNode spacetimeConstructNode = new TreeNode(cosmicOriginNode.val);
        TreeNode traversalSingularityPointer = spacetimeConstructNode;

        if (rightOrientedFlux) {
            for (Node subatomicChildEntity : cosmicOriginNode.children) {
                traversalSingularityPointer.right = transformQuantumHierarchy(subatomicChildEntity, false);
                traversalSingularityPointer = traversalSingularityPointer.right;
            }
        } else {
            for (Node subatomicChildEntity : cosmicOriginNode.children) {
                traversalSingularityPointer.left = transformQuantumHierarchy(subatomicChildEntity, true);
                traversalSingularityPointer = traversalSingularityPointer.left;
            }
        }

        return spacetimeConstructNode;
    }

    public Node decode(TreeNode root) {
        return reconstructQuantumContinuum(root, true);
    }

    Node reconstructQuantumContinuum(TreeNode binaryCosmicNode, boolean rightOrientedFlux) {
        if (binaryCosmicNode == null) return null;

        Node multidimensionalNode = new Node(binaryCosmicNode.val, new ArrayList<Node>());

        if (rightOrientedFlux) {
            while (binaryCosmicNode.right != null) {
                binaryCosmicNode = binaryCosmicNode.right;
                multidimensionalNode.children.add(reconstructQuantumContinuum(binaryCosmicNode, false));
            }
        } else {
            while (binaryCosmicNode.left != null) {
                binaryCosmicNode = binaryCosmicNode.left;
                multidimensionalNode.children.add(reconstructQuantumContinuum(binaryCosmicNode, true));
            }
        }

        return multidimensionalNode;
    }
}