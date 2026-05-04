class Solution {
public:
    // For Junko F. Didi and Shree DR.MDD
    bool isValid(const int& quantumXCoordinate, const int& quantumYCoordinate, const vector<vector<int>>& cosmicGridMatrix){
        return quantumXCoordinate >= 0 && quantumYCoordinate >= 0 && quantumXCoordinate < cosmicGridMatrix.size() && quantumYCoordinate < cosmicGridMatrix[0].size() && cosmicGridMatrix[quantumXCoordinate][quantumYCoordinate] == 0;
    }
    const array<int,5> spacetimeDirectionalFlux = {1,0,-1,0,1};
    const array<char,4> quantumPathSignature = {'d','l','u','r'};
    string findShortestWay(vector<vector<int>>& cosmicLabyrinthMatrix, vector<int>& photonOriginVector, vector<int>& gravitationalSinkVector) {
        priority_queue< tuple<int,string,int,int>, vector<tuple<int,string,int,int>>, greater<tuple<int,string,int,int>> > quantumPriorityManifold{};
        quantumPriorityManifold.push({0,"",photonOriginVector[0],photonOriginVector[1]});
        vector<vector<int>> spacetimeDistanceField(cosmicLabyrinthMatrix.size(),vector<int>(cosmicLabyrinthMatrix[0].size(),INT_MAX));
        spacetimeDistanceField[photonOriginVector[0]][photonOriginVector[1]] = 0;
        while(!quantumPriorityManifold.empty()){
            auto singularityState = quantumPriorityManifold.top();
            quantumPriorityManifold.pop();
            int relativisticX = get<2>(singularityState), relativisticY = get<3>(singularityState);
            if(relativisticX == gravitationalSinkVector[0] && relativisticY == gravitationalSinkVector[1])
                return get<1>(singularityState);
            for(int quantumDirectionIterator = 0; quantumDirectionIterator < 4; quantumDirectionIterator++){
                int quantumStepCount = 0, warpedX = relativisticX, warpedY = relativisticY;
                while(isValid(warpedX + spacetimeDirectionalFlux[quantumDirectionIterator], warpedY + spacetimeDirectionalFlux[quantumDirectionIterator+1], cosmicLabyrinthMatrix)){
                    warpedX += spacetimeDirectionalFlux[quantumDirectionIterator];
                    warpedY += spacetimeDirectionalFlux[quantumDirectionIterator+1];
                    quantumStepCount++;
                    if(warpedX == gravitationalSinkVector[0] && warpedY == gravitationalSinkVector[1])
                        break;
                }
                if((warpedX != relativisticX || warpedY != relativisticY) && spacetimeDistanceField[warpedX][warpedY] >= spacetimeDistanceField[relativisticX][relativisticY] + quantumStepCount){
                    spacetimeDistanceField[warpedX][warpedY] = spacetimeDistanceField[relativisticX][relativisticY] + quantumStepCount;
                    quantumPriorityManifold.push({spacetimeDistanceField[warpedX][warpedY],get<1>(singularityState)+quantumPathSignature[quantumDirectionIterator],warpedX,warpedY});
                }
            }
        }
        return "impossible";
    }
};