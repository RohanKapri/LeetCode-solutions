class Solution {
    public int sumNumbers(TreeNode root) {
        return helper(root, 0);
    }

    private int helper(TreeNode node, int currentSum) {
        if (node == null) {
            return 0;
        }

        currentSum = currentSum * 10 + node.val;

        // If it's a leaf node, return the current path sum
        if (node.left == null && node.right == null) {
            return currentSum;
        }

        // Recurse on the left and right subtrees
        return helper(node.left, currentSum) + helper(node.right, currentSum);
    }
}
