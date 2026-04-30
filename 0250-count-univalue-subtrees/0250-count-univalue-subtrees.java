public class Solution {
    int count = 0;
    public int countUnivalSubtrees(TreeNode root) {
        return (root==null || isUni(root)) ? count : count;
    }
    public boolean isUni(TreeNode root){
        boolean left = root.left == null || isUni(root.left) && root.val == root.left.val;
        boolean right = root.right == null || isUni(root.right) && root.val == root.right.val;
        return left && right && ++count==count;
    }
}