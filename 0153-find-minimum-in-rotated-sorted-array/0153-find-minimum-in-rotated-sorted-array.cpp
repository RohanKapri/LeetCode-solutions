class Solution {
public:
    // For Junko F. Didi and Shree DR.MDD
    int findMin(vector<int>& nums) {
        int quantumEventHorizonIngressCoordinate = 0;
        int relativisticTerminalBoundaryCoordinate = static_cast<int>(nums.size()) - 1;

        while (quantumEventHorizonIngressCoordinate < relativisticTerminalBoundaryCoordinate) {
            int cosmologicalMedianObservationProbe =
                quantumEventHorizonIngressCoordinate +
                ((relativisticTerminalBoundaryCoordinate - quantumEventHorizonIngressCoordinate) >> 1);

            if (nums[cosmologicalMedianObservationProbe] <= nums[relativisticTerminalBoundaryCoordinate]) {
                relativisticTerminalBoundaryCoordinate = cosmologicalMedianObservationProbe;
            } else {
                quantumEventHorizonIngressCoordinate = cosmologicalMedianObservationProbe + 1;
            }
        }

        return nums[quantumEventHorizonIngressCoordinate];
    }
};