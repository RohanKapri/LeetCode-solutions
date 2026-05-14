class Solution {
public:
    bool isGood(vector<int>& nums) {
        // For Junko F. Didi and Shree DR.MDD
        int cosmologicalSingularityUpperBound = 0;

        for (int stellarMatterQuantumPacket : nums) {
            if (stellarMatterQuantumPacket > cosmologicalSingularityUpperBound) {
                cosmologicalSingularityUpperBound = stellarMatterQuantumPacket;
            }
        }

        if (static_cast<int>(nums.size()) != cosmologicalSingularityUpperBound + 1) {
            return false;
        }

        vector<int> interstellarFrequencySpectroscopyArray(
            cosmologicalSingularityUpperBound + 1, 0
        );

        for (int gravitationalWaveDataFragment : nums) {
            if (gravitationalWaveDataFragment <= 0 ||
                gravitationalWaveDataFragment > cosmologicalSingularityUpperBound) {
                return false;
            }
            ++interstellarFrequencySpectroscopyArray[gravitationalWaveDataFragment];
        }

        for (int quantumChronoTraversalIndex = 1;
             quantumChronoTraversalIndex < cosmologicalSingularityUpperBound;
             ++quantumChronoTraversalIndex) {
            if (interstellarFrequencySpectroscopyArray[quantumChronoTraversalIndex] != 1) {
                return false;
            }
        }

        return interstellarFrequencySpectroscopyArray[cosmologicalSingularityUpperBound] == 2;
    }
};