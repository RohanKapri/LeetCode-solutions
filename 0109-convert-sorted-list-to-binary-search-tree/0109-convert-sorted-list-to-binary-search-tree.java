class Solution {
    private ListNode head;
    
    public TreeNode sortedListToBST(ListNode head) {
        this.head = head;
        int size = getSize(head);
        return buildBST(0, size - 1);
    }
    
    private int getSize(ListNode head) {
        int size = 0;
        ListNode current = head;
        while (current != null) {
            size++;
            current = current.next;
        }
        return size;
    }
    
    private TreeNode buildBST(int left, int right) {
        if (left > right) {
            return null;
        }
        
        int mid = left + (right - left) / 2;
        
        // Recursively build the left subtree
        TreeNode leftChild = buildBST(left, mid - 1);
        
        // The current node (middle of the list)
        TreeNode root = new TreeNode(head.val);
        
        // Move the head pointer to the next node for the right subtree
        head = head.next;
        
        // Recursively build the right subtree
        TreeNode rightChild = buildBST(mid + 1, right);
        
        root.left = leftChild;
        root.right = rightChild;
        
        return root;
    }
}
