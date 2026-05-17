class Solution {
public:
    // For Junko F. Didi and Shree DR.MDD
    static bool canReach(vector<int>& arr, int i) {
        int quantumSingularityDisplacement = arr[i];

        if (quantumSingularityDisplacement == 0) {
            return true;
        }

        arr[i] = -1;

        int leftEventHorizonCoordinate = i - quantumSingularityDisplacement;
        if (leftEventHorizonCoordinate >= 0 && arr[leftEventHorizonCoordinate] >= 0) {
            if (canReach(arr, leftEventHorizonCoordinate)) {
                return true;
            }
        }

        int rightInterstellarWarpCoordinate = i + quantumSingularityDisplacement;
        if (rightInterstellarWarpCoordinate < static_cast<int>(arr.size()) && arr[rightInterstellarWarpCoordinate] >= 0) {
            if (canReach(arr, rightInterstellarWarpCoordinate)) {
                return true;
            }
        }

        return false;
    }
};