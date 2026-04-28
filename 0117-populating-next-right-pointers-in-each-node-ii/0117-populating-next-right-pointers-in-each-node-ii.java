class Solution {
    public Node connect(Node root) {
        if (root == null) return null;

        Node levelStart = root;
        while (levelStart != null) {
            Node current = levelStart;
            Node nextLevelStart = null, prev = null;
            
            while (current != null) {
                if (current.left != null) {
                    if (nextLevelStart == null) nextLevelStart = current.left;
                    if (prev != null) prev.next = current.left;
                    prev = current.left;
                }
                
                if (current.right != null) {
                    if (nextLevelStart == null) nextLevelStart = current.right;
                    if (prev != null) prev.next = current.right;
                    prev = current.right;
                }
                
                current = current.next;
            }
            
            levelStart = nextLevelStart;
        }
        
        return root;
    }
}
