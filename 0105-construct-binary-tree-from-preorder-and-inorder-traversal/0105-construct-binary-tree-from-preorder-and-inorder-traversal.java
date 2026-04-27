/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
import java.util.HashMap;

class Solution {
    private HashMap<Integer, Integer> inorderMap;
    private int preorderIndex = 0;

    public TreeNode buildTree(int[] preorder, int[] inorder) {
        inorderMap = new HashMap<>();
        
        // Build a map of inorder values for faster lookup
        for (int i = 0; i < inorder.length; i++) {
            inorderMap.put(inorder[i], i);
        }
        
        return buildTreeHelper(preorder, 0, inorder.length - 1);
    }

    private TreeNode buildTreeHelper(int[] preorder, int inorderStart, int inorderEnd) {
        if (inorderStart > inorderEnd) {
            return null;
        }

        // The first element in preorder is the root
        int rootValue = preorder[preorderIndex++];
        TreeNode root = new TreeNode(rootValue);

        // Build the left and right subtrees
        int inorderIndex = inorderMap.get(rootValue);

        // Build left subtree
        root.left = buildTreeHelper(preorder, inorderStart, inorderIndex - 1);

        // Build right subtree
        root.right = buildTreeHelper(preorder, inorderIndex + 1, inorderEnd);

        return root;
    }
}
