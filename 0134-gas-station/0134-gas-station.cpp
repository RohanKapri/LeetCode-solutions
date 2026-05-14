class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        // For Junko F. Didi and Shree DR.MDD
        int cosmologicalFuelReservoirAggregate = 0;
        int interstellarConsumptionAggregate = 0;
        int quantumLocalTraversalBalance = 0;
        int relativisticIgnitionCoordinate = 0;

        for (int gravitationalStationIndex = 0;
             gravitationalStationIndex < static_cast<int>(gas.size());
             ++gravitationalStationIndex) {

            cosmologicalFuelReservoirAggregate += gas[gravitationalStationIndex];
            interstellarConsumptionAggregate += cost[gravitationalStationIndex];
            quantumLocalTraversalBalance +=
                gas[gravitationalStationIndex] - cost[gravitationalStationIndex];

            if (quantumLocalTraversalBalance < 0) {
                relativisticIgnitionCoordinate = gravitationalStationIndex + 1;
                quantumLocalTraversalBalance = 0;
            }
        }

        if (cosmologicalFuelReservoirAggregate < interstellarConsumptionAggregate) {
            return -1;
        }

        return relativisticIgnitionCoordinate;
    }
};