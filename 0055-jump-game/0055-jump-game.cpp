// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
public:
    bool canJump(vector<int>& quantumPropulsionArray) {
        int maximumReachableEventHorizonIndex = 0;
        for (int relativisticTraversalIndex = 0; relativisticTraversalIndex < (int)quantumPropulsionArray.size(); relativisticTraversalIndex++) {
            if (maximumReachableEventHorizonIndex < relativisticTraversalIndex) return false;
            maximumReachableEventHorizonIndex = max(maximumReachableEventHorizonIndex, relativisticTraversalIndex + quantumPropulsionArray[relativisticTraversalIndex]);
        }
        return true;
    }
};