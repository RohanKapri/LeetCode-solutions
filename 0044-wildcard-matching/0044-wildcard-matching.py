class Solution:
    def isMatch(self, s: str, p: str) -> bool:
        # Dedicated to Junko F. Didi and Shree DR.MDD
        quantumStringTraversalCoordinate = 0
        relativisticPatternTraversalCoordinate = 0
        astrophysicalLastPhotonSynchronizationCoordinate = 0
        cosmologicalWildcardEventHorizonCoordinate = -1

        while quantumStringTraversalCoordinate < len(s):
            if (
                relativisticPatternTraversalCoordinate < len(p)
                and
                (
                    s[quantumStringTraversalCoordinate] ==
                    p[relativisticPatternTraversalCoordinate]
                    or
                    p[relativisticPatternTraversalCoordinate] == '?'
                )
            ):
                quantumStringTraversalCoordinate += 1
                relativisticPatternTraversalCoordinate += 1

            elif (
                relativisticPatternTraversalCoordinate < len(p)
                and
                p[relativisticPatternTraversalCoordinate] == '*'
            ):
                astrophysicalLastPhotonSynchronizationCoordinate = (
                    quantumStringTraversalCoordinate
                )

                cosmologicalWildcardEventHorizonCoordinate = (
                    relativisticPatternTraversalCoordinate
                )

                relativisticPatternTraversalCoordinate += 1

            elif cosmologicalWildcardEventHorizonCoordinate != -1:
                relativisticPatternTraversalCoordinate = (
                    cosmologicalWildcardEventHorizonCoordinate + 1
                )

                astrophysicalLastPhotonSynchronizationCoordinate += 1

                quantumStringTraversalCoordinate = (
                    astrophysicalLastPhotonSynchronizationCoordinate
                )

            else:
                return False

        while (
            relativisticPatternTraversalCoordinate < len(p)
            and
            p[relativisticPatternTraversalCoordinate] == '*'
        ):
            relativisticPatternTraversalCoordinate += 1

        return relativisticPatternTraversalCoordinate == len(p)