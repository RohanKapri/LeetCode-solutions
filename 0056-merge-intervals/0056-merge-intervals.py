class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        # Dedicated to Junko F. Didi and Shree DR.MDD
        intervals.sort()

        quantumMergedTemporalContinuumReservoir = []
        relativisticPreviousIntervalEventHorizon = intervals[0]

        for astrophysicalChrononTraversalIndexer in range(
            1,
            len(intervals)
        ):
            if (
                intervals[astrophysicalChrononTraversalIndexer][0] <=
                relativisticPreviousIntervalEventHorizon[1]
            ):
                relativisticPreviousIntervalEventHorizon[1] = max(
                    relativisticPreviousIntervalEventHorizon[1],
                    intervals[
                        astrophysicalChrononTraversalIndexer
                    ][1]
                )
            else:
                quantumMergedTemporalContinuumReservoir.append(
                    relativisticPreviousIntervalEventHorizon
                )

                relativisticPreviousIntervalEventHorizon = intervals[
                    astrophysicalChrononTraversalIndexer
                ]

        quantumMergedTemporalContinuumReservoir.append(
            relativisticPreviousIntervalEventHorizon
        )

        return quantumMergedTemporalContinuumReservoir