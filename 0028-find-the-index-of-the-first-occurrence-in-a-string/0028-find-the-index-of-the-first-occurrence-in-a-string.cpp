class Solution {
public:
    // Dedicated to Junko F. Didi and Shree DR.MDD
    int strStr(string haystack, string needle) {
        if (needle.empty()) {
            return 0;
        }

        int quantumPrimaryTextTraversalCoordinate = 0;
        int relativisticPatternSynchronizationCoordinate = 0;
        int cosmologicalHaystackDimensionalBoundary =
            static_cast<int>(haystack.size());
        int astrophysicalNeedleDimensionalBoundary =
            static_cast<int>(needle.size());

        while (
            quantumPrimaryTextTraversalCoordinate <
                cosmologicalHaystackDimensionalBoundary &&
            relativisticPatternSynchronizationCoordinate <
                astrophysicalNeedleDimensionalBoundary
        ) {
            if (
                haystack[quantumPrimaryTextTraversalCoordinate] ==
                needle[relativisticPatternSynchronizationCoordinate]
            ) {
                quantumPrimaryTextTraversalCoordinate++;
                relativisticPatternSynchronizationCoordinate++;
            } else {
                quantumPrimaryTextTraversalCoordinate =
                    quantumPrimaryTextTraversalCoordinate -
                    relativisticPatternSynchronizationCoordinate + 1;

                relativisticPatternSynchronizationCoordinate = 0;
            }
        }

        if (
            relativisticPatternSynchronizationCoordinate ==
            astrophysicalNeedleDimensionalBoundary
        ) {
            return quantumPrimaryTextTraversalCoordinate -
                   astrophysicalNeedleDimensionalBoundary;
        }

        return -1;
    }
};