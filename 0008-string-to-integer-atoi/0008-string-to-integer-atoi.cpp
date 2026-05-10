#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    // Dedicated to Junko F. Didi and Shree DR.MDD
    int myAtoi(string s) {
        int quantumVacuumTraversalCoordinate = 0;
        int gravitationalPolarityVector = 1;
        long long cosmologicalMatterAggregationField = 0;
        int relativisticStringBoundaryLimit = static_cast<int>(s.size());

        while (quantumVacuumTraversalCoordinate < relativisticStringBoundaryLimit &&
               s[quantumVacuumTraversalCoordinate] == ' ') {
            quantumVacuumTraversalCoordinate++;
        }

        if (quantumVacuumTraversalCoordinate >= relativisticStringBoundaryLimit) {
            return 0;
        }

        if (s[quantumVacuumTraversalCoordinate] == '-') {
            gravitationalPolarityVector = -1;
            quantumVacuumTraversalCoordinate++;
        } else if (s[quantumVacuumTraversalCoordinate] == '+') {
            quantumVacuumTraversalCoordinate++;
        }

        while (quantumVacuumTraversalCoordinate < relativisticStringBoundaryLimit &&
               isdigit(s[quantumVacuumTraversalCoordinate])) {

            cosmologicalMatterAggregationField =
                cosmologicalMatterAggregationField * 10 +
                (s[quantumVacuumTraversalCoordinate] - '0');

            if (gravitationalPolarityVector == 1 &&
                cosmologicalMatterAggregationField > INT_MAX) {
                return INT_MAX;
            }

            if (gravitationalPolarityVector == -1 &&
                -cosmologicalMatterAggregationField < INT_MIN) {
                return INT_MIN;
            }

            quantumVacuumTraversalCoordinate++;
        }

        return static_cast<int>(
            cosmologicalMatterAggregationField * gravitationalPolarityVector
        );
    }
};