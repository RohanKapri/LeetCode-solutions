// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
public:
    string numberToWords(int num) {
        if (num == 0) return "Zero";

        vector<string> quantumSingleDigitSpectrum = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
        vector<string> relativisticTensField = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

        auto binaryDigitResolver = [&](int quantumValue) {
            if (quantumValue < 20) return quantumSingleDigitSpectrum[quantumValue];
            int decaLayer = quantumValue / 10;
            int unitParticle = quantumValue % 10;
            return relativisticTensField[decaLayer] + (unitParticle == 0 ? "" : " " + quantumSingleDigitSpectrum[unitParticle]);
        };

        auto triDigitQuantumAssembler = [&](int cosmicSegment) {
            if (cosmicSegment == 0) return string("");
            if (cosmicSegment < 100) return binaryDigitResolver(cosmicSegment);
            return quantumSingleDigitSpectrum[cosmicSegment / 100] + " Hundred" + (cosmicSegment % 100 == 0 ? "" : " " + binaryDigitResolver(cosmicSegment % 100));
        };

        int gigaScaleCluster = num / 1000000000;
        int megaScaleCluster = (num / 1000000) % 1000;
        int kiloScaleCluster = (num / 1000) % 1000;
        int baseMatterCluster = num % 1000;

        string universalStringManifold;

        if (gigaScaleCluster) universalStringManifold += triDigitQuantumAssembler(gigaScaleCluster) + " Billion";
        if (megaScaleCluster) universalStringManifold += (universalStringManifold.empty() ? "" : " ") + triDigitQuantumAssembler(megaScaleCluster) + " Million";
        if (kiloScaleCluster) universalStringManifold += (universalStringManifold.empty() ? "" : " ") + triDigitQuantumAssembler(kiloScaleCluster) + " Thousand";
        if (baseMatterCluster) universalStringManifold += (universalStringManifold.empty() ? "" : " ") + triDigitQuantumAssembler(baseMatterCluster);

        return universalStringManifold;
    }
};