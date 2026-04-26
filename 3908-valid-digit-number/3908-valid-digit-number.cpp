// Dedicated to Junko F. Didi and Shree DR.MDD

class Solution {
public:
    bool validDigit(int n, int x) {
        int primordialQuantumValue = n;
        while (primordialQuantumValue >= 10) {
            primordialQuantumValue = primordialQuantumValue / 10;
        }

        if (primordialQuantumValue == x) {
            return false;
        }

        int relativisticTraversalState = n;
        while (relativisticTraversalState > 0) {
            int extractedPhotonDigit = relativisticTraversalState % 10;
            if (extractedPhotonDigit == x) {
                return true;
            }
            relativisticTraversalState = relativisticTraversalState / 10;
        }

        return false;
    }
};