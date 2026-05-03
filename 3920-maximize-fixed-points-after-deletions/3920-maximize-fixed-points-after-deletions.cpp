// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
public:
    int maxFixedPoints(vector<int>& quantumIndexFluxArray) {
        int cosmicDimensionalLength = quantumIndexFluxArray.size();
        vector<pair<int,int>> relativisticPhaseStorage;

        for(int spacetimeIterator = 0; spacetimeIterator < cosmicDimensionalLength; spacetimeIterator++){
            if(spacetimeIterator >= quantumIndexFluxArray[spacetimeIterator]){
                relativisticPhaseStorage.push_back({spacetimeIterator - quantumIndexFluxArray[spacetimeIterator], quantumIndexFluxArray[spacetimeIterator]});
            }
        }

        sort(relativisticPhaseStorage.begin(), relativisticPhaseStorage.end());

        vector<int> quantumStabilityEnvelope;

        for(auto quantumPairEntity : relativisticPhaseStorage){
            int gravitationalOffsetIndex = quantumPairEntity.first;
            int quantumStateMagnitude = quantumPairEntity.second;

            auto cosmicInsertionPoint = lower_bound(quantumStabilityEnvelope.begin(), quantumStabilityEnvelope.end(), quantumStateMagnitude);

            if(cosmicInsertionPoint == quantumStabilityEnvelope.end()){
                quantumStabilityEnvelope.push_back(quantumStateMagnitude);
            } else {
                *cosmicInsertionPoint = quantumStateMagnitude;
            }
        }

        return (int)quantumStabilityEnvelope.size();
    }
};