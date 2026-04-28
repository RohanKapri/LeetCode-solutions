import java.util.*;

class Solution {
    public Node cloneGraph(Node node) {
        if (node == null) return null;

        // Map to store the mapping between the original node and its clone
        Map<Node, Node> visited = new HashMap<>();
        
        // Initialize the queue for BFS
        Queue<Node> queue = new LinkedList<>();
        queue.offer(node);

        // Clone the root node
        visited.put(node, new Node(node.val, new ArrayList<>()));

        // Perform BFS
        while (!queue.isEmpty()) {
            Node current = queue.poll();

            // For each neighbor of the current node
            for (Node neighbor : current.neighbors) {
                if (!visited.containsKey(neighbor)) {
                    // Clone the neighbor and add to the visited map
                    visited.put(neighbor, new Node(neighbor.val, new ArrayList<>()));
                    // Add the neighbor to the BFS queue to process its neighbors later
                    queue.offer(neighbor);
                }
                // Add the cloned neighbor to the current node's cloned neighbors
                visited.get(current).neighbors.add(visited.get(neighbor));
            }
        }

        // Return the cloned node of the original root node
        return visited.get(node);
    }
}
