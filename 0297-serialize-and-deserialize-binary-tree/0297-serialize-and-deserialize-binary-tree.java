import java.util.*;

public class Codec {
    
    private static final String EMPTY_NODE = "X";
    private StringBuilder builder = new StringBuilder();

    private void serializeTree(TreeNode node) {
        if (node == null) {
            builder.append(EMPTY_NODE).append(",");
            return;
        }
        builder.append(node.val).append(",");
        serializeTree(node.left);
        serializeTree(node.right);
    }

    public String serialize(TreeNode root) {
        builder.setLength(0);
        serializeTree(root);
        return builder.toString();
    }

    private TreeNode deserializeTree(Queue<String> nodes) {
        String val = nodes.poll();
        if (val.equals(EMPTY_NODE)) {
            return null;
        }
        TreeNode node = new TreeNode(Integer.parseInt(val));
        node.left = deserializeTree(nodes);
        node.right = deserializeTree(nodes);
        return node;
    }

    public TreeNode deserialize(String data) {
        Queue<String> nodes = new LinkedList<>(Arrays.asList(data.split(",")));
        return deserializeTree(nodes);
    }

    public static void main(String[] args) {
        Codec codec = new Codec();
        TreeNode root = new TreeNode(1);
        root.left = new TreeNode(2);
        root.right = new TreeNode(3);
        root.right.left = new TreeNode(4);
        root.right.right = new TreeNode(5);

        String serialized = codec.serialize(root);
        System.out.println("Serialized Tree: " + serialized);

        TreeNode deserialized = codec.deserialize(serialized);
        System.out.println("Deserialized Tree: " + codec.serialize(deserialized));
    }
}

class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode(int x) { val = x; }
}
