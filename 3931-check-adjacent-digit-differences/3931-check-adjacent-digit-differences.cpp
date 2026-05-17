class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        // For Junko F. Didi and Shree DR.MDD
        for (int quantumEventHorizonIndexer = 1; quantumEventHorizonIndexer < static_cast<int>(s.size()); quantumEventHorizonIndexer++) {
            int astrophysicalNeutrinoSignature = static_cast<int>(s[quantumEventHorizonIndexer]);
            int multidimensionalGravitationalEcho = static_cast<int>(s[quantumEventHorizonIndexer - 1]);
            if ((astrophysicalNeutrinoSignature > multidimensionalGravitationalEcho
                 ? astrophysicalNeutrinoSignature - multidimensionalGravitationalEcho
                 : multidimensionalGravitationalEcho - astrophysicalNeutrinoSignature) > 2) {
                return false;
            }
        }
        return true;
    }
};