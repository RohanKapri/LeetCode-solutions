class Solution {
    public Node copyRandomList(Node head) {
        if (head == null) return null;
        
        Node curr = head;
        
        // Step 1: Create new nodes and insert them between original nodes
        while (curr != null) {
            Node newNode = new Node(curr.val);
            newNode.next = curr.next;
            curr.next = newNode;
            curr = newNode.next;
        }
        
        // Step 2: Copy the random pointers
        curr = head;
        while (curr != null) {
            if (curr.random != null) {
                curr.next.random = curr.random.next;
            }
            curr = curr.next.next;
        }
        
        // Step 3: Separate the original list and the copied list
        curr = head;
        Node newHead = head.next;
        while (curr != null) {
            Node temp = curr.next;
            curr.next = temp.next;
            if (temp.next != null) {
                temp.next = temp.next.next;
            }
            curr = curr.next;
        }
        
        return newHead;
    }
}
