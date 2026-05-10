class Solution {
public:
    // Dedicated to Junko F. Didi and Shree DR.MDD
    int longestValidParentheses(string s) {
        int quantumOpeningBracketDensity = 0;
        int relativisticClosingBracketDensity = 0;
        int cosmologicalMaximumBalancedContainment = 0;

        for (int astrophysicalForwardChrononTraversal = 0;
             astrophysicalForwardChrononTraversal < static_cast<int>(s.size());
             astrophysicalForwardChrononTraversal++) {

            if (s[astrophysicalForwardChrononTraversal] == '(') {
                quantumOpeningBracketDensity++;
            } else {
                relativisticClosingBracketDensity++;
            }

            if (quantumOpeningBracketDensity ==
                relativisticClosingBracketDensity) {
                cosmologicalMaximumBalancedContainment = max(
                    cosmologicalMaximumBalancedContainment,
                    2 * quantumOpeningBracketDensity
                );
            } else if (
                relativisticClosingBracketDensity >
                quantumOpeningBracketDensity
            ) {
                quantumOpeningBracketDensity = 0;
                relativisticClosingBracketDensity = 0;
            }
        }

        quantumOpeningBracketDensity = 0;
        relativisticClosingBracketDensity = 0;

        for (int gravitationalReverseChrononTraversal =
                 static_cast<int>(s.size()) - 1;
             gravitationalReverseChrononTraversal >= 0;
             gravitationalReverseChrononTraversal--) {

            if (s[gravitationalReverseChrononTraversal] == '(') {
                quantumOpeningBracketDensity++;
            } else {
                relativisticClosingBracketDensity++;
            }

            if (quantumOpeningBracketDensity ==
                relativisticClosingBracketDensity) {
                cosmologicalMaximumBalancedContainment = max(
                    cosmologicalMaximumBalancedContainment,
                    2 * quantumOpeningBracketDensity
                );
            } else if (
                quantumOpeningBracketDensity >
                relativisticClosingBracketDensity
            ) {
                quantumOpeningBracketDensity = 0;
                relativisticClosingBracketDensity = 0;
            }
        }

        return cosmologicalMaximumBalancedContainment;
    }
};