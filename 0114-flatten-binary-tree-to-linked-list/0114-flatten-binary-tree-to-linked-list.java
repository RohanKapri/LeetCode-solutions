class Solution {
    public void flatten(TreeNode root) {
        if (root == null) return;

        while (root != null) {
            if (root.left != null) {
                TreeNode rightSubtree = root.right;
                root.right = root.left;
                root.left = null;

                TreeNode current = root.right;
                while (current.right != null) {
                    current = current.right;
                }
                current.right = rightSubtree;
            }
            root = root.right;
        }
    }
}
