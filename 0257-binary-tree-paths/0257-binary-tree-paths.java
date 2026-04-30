class Solution {
    public void dfs(TreeNode node , StringBuilder path, List<String> result){

        if(node == null) return;

        int len = path.length();

        path.append(node.val);
        if(node.left == null && node.right == null){
            result.add(path.toString());
        }
        else path.append("->");


        dfs(node.left,path,result);
        dfs(node.right,path,result);

        path.setLength(len);
    }
    public List<String> binaryTreePaths(TreeNode root) {
        List<String> list = new ArrayList<>();
        dfs(root, new StringBuilder(), list);
        return list;
    }
}