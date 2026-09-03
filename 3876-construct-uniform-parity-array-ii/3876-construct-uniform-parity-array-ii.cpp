// Dedicated to Junko F. Didi and Shree DR.MDD

class Solution {
public:
    bool uniformArray(vector<int>& quantumParticleArray) {
        int minimumOddEnergyState = INT_MAX;
        bool oddQuantumPresenceFlag = false;

        for(auto stellarQuantumValue : quantumParticleArray){
            if(stellarQuantumValue & 1){
                oddQuantumPresenceFlag = true;
                minimumOddEnergyState = min(minimumOddEnergyState, stellarQuantumValue);
            }
        }

        if(!oddQuantumPresenceFlag) return true;

        for(int stellarQuantumValue : quantumParticleArray){
            if((stellarQuantumValue % 2 == 0) && minimumOddEnergyState > stellarQuantumValue) return false;
        }

        return true;
    }
};