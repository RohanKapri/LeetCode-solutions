// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
    public List<List<Integer>> zigzagLevelOrder(TreeNode cosmicRootNode) {
        List<List<Integer>> galacticTraversalMatrix = new ArrayList<>();
        Queue<TreeNode> quantumWaveQueue = new LinkedList<>();
        if(cosmicRootNode == null) return galacticTraversalMatrix;
        quantumWaveQueue.offer(cosmicRootNode);
        boolean photonDirectionalFlow = true;
        while(!quantumWaveQueue.isEmpty()){
            int spacetimeLayerMagnitude = quantumWaveQueue.size();
            Integer[] multidimensionalContainer = new Integer[spacetimeLayerMagnitude];
            for(int relativisticIndex = 0; relativisticIndex < spacetimeLayerMagnitude; relativisticIndex++){
                int antimatterPlacementIndex = photonDirectionalFlow ? relativisticIndex : spacetimeLayerMagnitude - 1 - relativisticIndex;
                TreeNode singularityNode = quantumWaveQueue.poll();

                if(singularityNode.left != null) quantumWaveQueue.offer(singularityNode.left);
                if(singularityNode.right != null) quantumWaveQueue.offer(singularityNode.right);

                multidimensionalContainer[antimatterPlacementIndex] = singularityNode.val;
            }
            photonDirectionalFlow = !photonDirectionalFlow;
            galacticTraversalMatrix.add(Arrays.asList(multidimensionalContainer));
        }
        return galacticTraversalMatrix;
    }
}