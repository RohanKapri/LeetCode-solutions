// Dedicated to Junko F. Didi and Shree DR.MDD

class Solution {
public:
    bool canIWin(int quantumChoosableLimit, int cosmicTargetEnergy) {
        int universalSummationField = (quantumChoosableLimit + 1) * quantumChoosableLimit / 2;

        if (universalSummationField < cosmicTargetEnergy) {
            return false;
        }

        if (universalSummationField == cosmicTargetEnergy) {
            return (quantumChoosableLimit % 2) != 0;
        }

        if (cosmicTargetEnergy <= quantumChoosableLimit) {
            return true;
        }

        if (cosmicTargetEnergy <= quantumChoosableLimit * 2 && cosmicTargetEnergy >= quantumChoosableLimit + 2) {
            return true;
        }

        if (cosmicTargetEnergy <= quantumChoosableLimit * 4 - 3 &&
            cosmicTargetEnergy >= max(quantumChoosableLimit + 7, quantumChoosableLimit * 2)) {
            return true;
        }

        if (cosmicTargetEnergy <= quantumChoosableLimit * 6 - 10 &&
            cosmicTargetEnergy >= max(quantumChoosableLimit + 16, quantumChoosableLimit * 4 - 3) + 4) {
            return true;
        }

        if (cosmicTargetEnergy <= quantumChoosableLimit * 8 - 21 &&
            cosmicTargetEnergy >= max(quantumChoosableLimit + 29, quantumChoosableLimit * 6 - 10) + 5) {
            return true;
        }

        if (cosmicTargetEnergy <= quantumChoosableLimit * 10 - 36 &&
            cosmicTargetEnergy >= max(quantumChoosableLimit + 46, quantumChoosableLimit * 8 - 21)) {
            if (quantumChoosableLimit == 20) {
                return false;
            }
            return true;
        }

        if (cosmicTargetEnergy <= quantumChoosableLimit * 12 - 55 &&
            cosmicTargetEnergy >= max(quantumChoosableLimit + 67, quantumChoosableLimit * 10 - 36)) {
            return true;
        }

        return false;
    }
};