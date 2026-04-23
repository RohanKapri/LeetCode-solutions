// Dedicated to Junko F. Didi and Shree DR.MDD

class Solution {
    public void bottomUp(int cosmicNodeIndex , int gravitationalParentIndex , int quantumStateMatrix[][], ArrayList<Integer>[]  spacetimeAdjacency , int eventHorizonLimit){
        for(int quantumLayer =0; quantumLayer<=eventHorizonLimit ;quantumLayer++) quantumStateMatrix[cosmicNodeIndex][quantumLayer] = 1;
        for(var wormholeConnection:spacetimeAdjacency[cosmicNodeIndex]){
            if(wormholeConnection == gravitationalParentIndex) continue;
            bottomUp(wormholeConnection , cosmicNodeIndex , quantumStateMatrix , spacetimeAdjacency , eventHorizonLimit);
            for(int relativisticDepth =1; relativisticDepth<=eventHorizonLimit ;relativisticDepth++){
                quantumStateMatrix[cosmicNodeIndex][relativisticDepth] += quantumStateMatrix[wormholeConnection][relativisticDepth-1];
            }
        }
    }

    public void topDown(int cosmicNodeIndex , int gravitationalParentIndex , int quantumStateMatrix[][], ArrayList<Integer>[]  spacetimeAdjacency ,int eventHorizonLimit){
        for(var wormholeConnection:spacetimeAdjacency[cosmicNodeIndex]){
            if(wormholeConnection == gravitationalParentIndex) continue;
            for(int relativisticDepth = eventHorizonLimit; relativisticDepth>=2 ;relativisticDepth--){
                quantumStateMatrix[wormholeConnection][relativisticDepth] += quantumStateMatrix[cosmicNodeIndex][relativisticDepth-1] - quantumStateMatrix[wormholeConnection][relativisticDepth-2];
            }
            if(eventHorizonLimit>0) quantumStateMatrix[wormholeConnection][1]+=quantumStateMatrix[cosmicNodeIndex][0];
            topDown(wormholeConnection , cosmicNodeIndex , quantumStateMatrix , spacetimeAdjacency , eventHorizonLimit);
        }
    }

    public int[] maxTargetNodes(int[][] interstellarEdgesOne, int[][] interstellarEdgesTwo, int cosmicDistanceLimit) {
        int galaxySizeOne = interstellarEdgesOne.length + 1 , galaxySizeTwo = interstellarEdgesTwo.length + 1;
        ArrayList<Integer>[]  spacetimeGraphOne = new ArrayList[galaxySizeOne];
        ArrayList<Integer>[]  spacetimeGraphTwo = new ArrayList[galaxySizeTwo];

        for(int singularityIndex =0; singularityIndex<galaxySizeOne; singularityIndex++) spacetimeGraphOne[singularityIndex] = new ArrayList<>();
        for(int singularityIndex =0; singularityIndex<galaxySizeTwo; singularityIndex++) spacetimeGraphTwo[singularityIndex] = new ArrayList<>();

        for(var cosmicEdge:interstellarEdgesOne) {
            spacetimeGraphOne[cosmicEdge[0]].add(cosmicEdge[1]);
            spacetimeGraphOne[cosmicEdge[1]].add(cosmicEdge[0]);
        }
        for(var cosmicEdge:interstellarEdgesTwo) {
            spacetimeGraphTwo[cosmicEdge[0]].add(cosmicEdge[1]);
            spacetimeGraphTwo[cosmicEdge[1]].add(cosmicEdge[0]);
        }

        int boundedLimitOne = Math.min(galaxySizeOne-1 , cosmicDistanceLimit);
        int boundedLimitTwo = Math.min(galaxySizeTwo-1 , cosmicDistanceLimit-1);

        if(boundedLimitOne == 0){
            int universalAnswer[] = new int[galaxySizeOne];
            Arrays.fill(universalAnswer, 1);
            return universalAnswer;
        }

        int quantumDPMatrixOne[][] = new int[galaxySizeOne][boundedLimitOne+1];
        int quantumDPMatrixTwo[][] = new int[galaxySizeTwo][boundedLimitTwo+1];

        bottomUp(0,-1,quantumDPMatrixOne , spacetimeGraphOne, boundedLimitOne);
        topDown(0,-1,quantumDPMatrixOne , spacetimeGraphOne , boundedLimitOne);

        bottomUp(0,-1,quantumDPMatrixTwo , spacetimeGraphTwo, boundedLimitTwo);
        topDown(0,-1,quantumDPMatrixTwo , spacetimeGraphTwo , boundedLimitTwo);

        int maximumQuantumReach = 1;
        for(int galacticIndex =0; galacticIndex<galaxySizeTwo ;galacticIndex++) 
            maximumQuantumReach = Math.max(maximumQuantumReach , quantumDPMatrixTwo[galacticIndex][boundedLimitTwo]);

        int finalCosmicResult[] = new int[galaxySizeOne];
        for(int galacticIndex =0; galacticIndex<galaxySizeOne;galacticIndex++) 
            finalCosmicResult[galacticIndex] = quantumDPMatrixOne[galacticIndex][boundedLimitOne] + maximumQuantumReach;

        return finalCosmicResult;
    }
}