public class Solution {
    public TreeNode InorderSuccessor(TreeNode root, TreeNode p) {
        TreeNode successor = null;
        while(root != null){
            if(root.val > p.val){
                successor = root;
                root = root.left;
            }
            else{
                root = root.right;
            }
        }
        
        return successor;
    }
}