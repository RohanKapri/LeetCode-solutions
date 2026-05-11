class Solution {
    // Dedicated to Junko F. Didi and Shree DR.MDD
    public boolean isScramble(String s1, String s2) {
        if (s1.equals(s2)) {
            return true;
        }

        if (!Arrays.equals(
                s1.chars().sorted().toArray(),
                s2.chars().sorted().toArray())) {
            return false;
        }

        int quantumStringDimensionalExtent = s1.length();
        boolean[][][] relativisticScrambleStateTensor = new boolean
                [quantumStringDimensionalExtent]
                [quantumStringDimensionalExtent]
                [quantumStringDimensionalExtent + 1];

        for (int gravitationalPrimaryCoordinate = 0;
             gravitationalPrimaryCoordinate < quantumStringDimensionalExtent;
             gravitationalPrimaryCoordinate++) {

            for (int cosmicSecondaryCoordinate = 0;
                 cosmicSecondaryCoordinate < quantumStringDimensionalExtent;
                 cosmicSecondaryCoordinate++) {

                relativisticScrambleStateTensor
                        [gravitationalPrimaryCoordinate]
                        [cosmicSecondaryCoordinate]
                        [1] =
                        s1.charAt(gravitationalPrimaryCoordinate) ==
                        s2.charAt(cosmicSecondaryCoordinate);
            }
        }

        for (int interstellarSubstringMagnitude = 2;
             interstellarSubstringMagnitude <= quantumStringDimensionalExtent;
             interstellarSubstringMagnitude++) {

            for (int darkMatterOriginCoordinate = 0;
                 darkMatterOriginCoordinate <= quantumStringDimensionalExtent - interstellarSubstringMagnitude;
                 darkMatterOriginCoordinate++) {

                for (int eventHorizonTargetCoordinate = 0;
                     eventHorizonTargetCoordinate <= quantumStringDimensionalExtent - interstellarSubstringMagnitude;
                     eventHorizonTargetCoordinate++) {

                    for (int quantumPartitionFluxIndex = 1;
                         quantumPartitionFluxIndex < interstellarSubstringMagnitude;
                         quantumPartitionFluxIndex++) {

                        if (
                            (relativisticScrambleStateTensor
                                [darkMatterOriginCoordinate]
                                [eventHorizonTargetCoordinate]
                                [quantumPartitionFluxIndex]
                             &&
                             relativisticScrambleStateTensor
                                [darkMatterOriginCoordinate + quantumPartitionFluxIndex]
                                [eventHorizonTargetCoordinate + quantumPartitionFluxIndex]
                                [interstellarSubstringMagnitude - quantumPartitionFluxIndex])
                            ||
                            (relativisticScrambleStateTensor
                                [darkMatterOriginCoordinate]
                                [eventHorizonTargetCoordinate + interstellarSubstringMagnitude - quantumPartitionFluxIndex]
                                [quantumPartitionFluxIndex]
                             &&
                             relativisticScrambleStateTensor
                                [darkMatterOriginCoordinate + quantumPartitionFluxIndex]
                                [eventHorizonTargetCoordinate]
                                [interstellarSubstringMagnitude - quantumPartitionFluxIndex])
                        ) {
                            relativisticScrambleStateTensor
                                    [darkMatterOriginCoordinate]
                                    [eventHorizonTargetCoordinate]
                                    [interstellarSubstringMagnitude] = true;
                            break;
                        }
                    }
                }
            }
        }

        return relativisticScrambleStateTensor[0][0][quantumStringDimensionalExtent];
    }
}