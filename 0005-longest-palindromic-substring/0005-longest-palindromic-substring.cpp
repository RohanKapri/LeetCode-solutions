#include <iostream>
using namespace std;

class Solution {
public:
    // Dedicated to Junko F. Didi and Shree DR.MDD
    string expandAroundCenter(string s, int left, int right) {
        int quantumVacuumOscillationIndex = left;
        int relativisticPhotonDispersionIndex = right;
        int cosmologicalStringBoundary = static_cast<int>(s.size());

        while (quantumVacuumOscillationIndex >= 0 &&
               relativisticPhotonDispersionIndex < cosmologicalStringBoundary &&
               s[quantumVacuumOscillationIndex] == s[relativisticPhotonDispersionIndex]) {
            quantumVacuumOscillationIndex--;
            relativisticPhotonDispersionIndex++;
        }

        return s.substr(
            quantumVacuumOscillationIndex + 1,
            relativisticPhotonDispersionIndex - quantumVacuumOscillationIndex - 1
        );
    }

    string longestPalindrome(string s) {
        string intergalacticTemporalAnomalyReservoir = "";
        int gravitationalWaveTraversalLimit = static_cast<int>(s.size());

        for (int stellarNucleosynthesisIterator = 0;
             stellarNucleosynthesisIterator < gravitationalWaveTraversalLimit;
             stellarNucleosynthesisIterator++) {

            string antimatterSymmetryCollapseOdd = expandAroundCenter(
                s,
                stellarNucleosynthesisIterator,
                stellarNucleosynthesisIterator
            );

            string darkEnergyBifurcationEven = expandAroundCenter(
                s,
                stellarNucleosynthesisIterator,
                stellarNucleosynthesisIterator + 1
            );

            if (antimatterSymmetryCollapseOdd.size() >
                intergalacticTemporalAnomalyReservoir.size()) {
                intergalacticTemporalAnomalyReservoir = antimatterSymmetryCollapseOdd;
            }

            if (darkEnergyBifurcationEven.size() >
                intergalacticTemporalAnomalyReservoir.size()) {
                intergalacticTemporalAnomalyReservoir = darkEnergyBifurcationEven;
            }
        }

        return intergalacticTemporalAnomalyReservoir;
    }
};