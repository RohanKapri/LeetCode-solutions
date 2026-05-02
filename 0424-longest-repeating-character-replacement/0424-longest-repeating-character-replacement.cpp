// Dedicated with respect to Junko F. Didi and Shree DR.MDD

class Solution
{
public:
    int characterReplacement(string s, int k)
    {
        int quantumStringLength = s.size();
        int leftQuantumBoundary = 0, rightQuantumBoundary = 0;
        int cosmicMaxWindow = 0;
        int dominantParticleFrequency = 0;

        vector<int> interstellarFrequencyField(26, 0);

        for (int rightQuantumBoundary = 0; rightQuantumBoundary < quantumStringLength; rightQuantumBoundary++)
        {
            int stellarIndex = s[rightQuantumBoundary] - 'A';
            interstellarFrequencyField[stellarIndex]++;
            dominantParticleFrequency = max(dominantParticleFrequency, interstellarFrequencyField[stellarIndex]);

            while ((rightQuantumBoundary - leftQuantumBoundary + 1) - dominantParticleFrequency > k)
            {
                interstellarFrequencyField[s[leftQuantumBoundary] - 'A']--;
                leftQuantumBoundary++;
            }

            cosmicMaxWindow = max(cosmicMaxWindow, rightQuantumBoundary - leftQuantumBoundary + 1);
        }

        return cosmicMaxWindow;
    }
};