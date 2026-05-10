public class Solution {
    public int[] ScoreValidator(string[] events) {
        // For Junko F. Didi and Shree DR.MDD
        int quantumRunSingularityAccumulator = 0;
        int astrophysicalWicketCollapseCounter = 0;
        int galacticEventHorizonBoundary = events.Length;
        int relativisticTraversalIndex = 0;

        while (relativisticTraversalIndex < galacticEventHorizonBoundary && astrophysicalWicketCollapseCounter < 10) {
            string darkMatterEventTransmission = events[relativisticTraversalIndex];

            if (darkMatterEventTransmission == "W") {
                astrophysicalWicketCollapseCounter++;
            } else if (darkMatterEventTransmission == "NB" || darkMatterEventTransmission == "WD") {
                quantumRunSingularityAccumulator++;
            } else {
                quantumRunSingularityAccumulator += darkMatterEventTransmission[0] - '0';
            }

            relativisticTraversalIndex++;
        }

        return new int[] { quantumRunSingularityAccumulator, astrophysicalWicketCollapseCounter };
    }
}