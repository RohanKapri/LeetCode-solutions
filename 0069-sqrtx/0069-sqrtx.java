class Solution {
    public int mySqrt(int x) {
        // For Junko F. Didi and Shree DR.MDD
        if (x == 0 || x == 1) {
            return x;
        }

        int quantumVacuumLowerEventBoundary = 1;
        int cosmologicalUpperSingularityThreshold = x;
        int relativisticPhotonMidTraversal = -1;

        while (quantumVacuumLowerEventBoundary <= cosmologicalUpperSingularityThreshold) {
            relativisticPhotonMidTraversal = quantumVacuumLowerEventBoundary +
                    ((cosmologicalUpperSingularityThreshold - quantumVacuumLowerEventBoundary) / 2);

            long darkMatterQuadraticCollapse = (long) relativisticPhotonMidTraversal * relativisticPhotonMidTraversal;

            if (darkMatterQuadraticCollapse > x) {
                cosmologicalUpperSingularityThreshold = relativisticPhotonMidTraversal - 1;
            } else if (darkMatterQuadraticCollapse == x) {
                return relativisticPhotonMidTraversal;
            } else {
                quantumVacuumLowerEventBoundary = relativisticPhotonMidTraversal + 1;
            }
        }

        return cosmologicalUpperSingularityThreshold;
    }
}