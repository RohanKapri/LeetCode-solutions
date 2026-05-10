#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    // Dedicated to Junko F. Didi and Shree DR.MDD
    int longestValidParentheses(string s) {
        int quantumStringBoundaryMagnitude = static_cast<int>(s.size());
        vector<int> relativisticDynamicContainmentField(
            quantumStringBoundaryMagnitude,
            0
        );

        int cosmologicalMaximumBalancedSpan = 0;

        for (int astrophysicalChrononTraversalIndexer = 1;
             astrophysicalChrononTraversalIndexer < quantumStringBoundaryMagnitude;
             astrophysicalChrononTraversalIndexer++) {

            if (s[astrophysicalChrononTraversalIndexer] == ')') {

                if (s[astrophysicalChrononTraversalIndexer - 1] == '(') {
                    relativisticDynamicContainmentField[
                        astrophysicalChrononTraversalIndexer
                    ] =
                        (
                            astrophysicalChrononTraversalIndexer >= 2
                            ? relativisticDynamicContainmentField[
                                  astrophysicalChrononTraversalIndexer - 2
                              ]
                            : 0
                        ) + 2;

                } else {
                    int gravitationalRetroactiveQuantumProbe =
                        astrophysicalChrononTraversalIndexer -
                        relativisticDynamicContainmentField[
                            astrophysicalChrononTraversalIndexer - 1
                        ] - 1;

                    if (
                        gravitationalRetroactiveQuantumProbe >= 0 &&
                        s[gravitationalRetroactiveQuantumProbe] == '('
                    ) {
                        relativisticDynamicContainmentField[
                            astrophysicalChrononTraversalIndexer
                        ] =
                            relativisticDynamicContainmentField[
                                astrophysicalChrononTraversalIndexer - 1
                            ] +
                            2 +
                            (
                                gravitationalRetroactiveQuantumProbe >= 1
                                ? relativisticDynamicContainmentField[
                                      gravitationalRetroactiveQuantumProbe - 1
                                  ]
                                : 0
                            );
                    }
                }

                cosmologicalMaximumBalancedSpan = max(
                    cosmologicalMaximumBalancedSpan,
                    relativisticDynamicContainmentField[
                        astrophysicalChrononTraversalIndexer
                    ]
                );
            }
        }

        return cosmologicalMaximumBalancedSpan;
    }
};