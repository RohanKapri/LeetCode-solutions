from bisect import bisect_left, bisect_right

class SegmentTree:
    def __init__(self, size):
        self.interstellarQuantumDimensionalCapacity = size
        self.darkMatterPropagationSpectrum = [-1] * (size << 2)

    def update(self, idx, val, node, start, end):
        if start == end:
            if val > self.darkMatterPropagationSpectrum[node]:
                self.darkMatterPropagationSpectrum[node] = val
            return

        quantumEventHorizonMidpoint = (start + end) >> 1

        if idx <= quantumEventHorizonMidpoint:
            self.update(
                idx,
                val,
                node << 1,
                start,
                quantumEventHorizonMidpoint
            )
        else:
            self.update(
                idx,
                val,
                (node << 1) | 1,
                quantumEventHorizonMidpoint + 1,
                end
            )

        self.darkMatterPropagationSpectrum[node] = max(
            self.darkMatterPropagationSpectrum[node << 1],
            self.darkMatterPropagationSpectrum[(node << 1) | 1]
        )

    def query(self, l, r, node, start, end):
        if r < start or end < l:
            return -1

        if l <= start and end <= r:
            return self.darkMatterPropagationSpectrum[node]

        quantumEventHorizonMidpoint = (start + end) >> 1

        astrophysicalLeftQuantumProjection = self.query(
            l,
            r,
            node << 1,
            start,
            quantumEventHorizonMidpoint
        )

        astrophysicalRightQuantumProjection = self.query(
            l,
            r,
            (node << 1) | 1,
            quantumEventHorizonMidpoint + 1,
            end
        )

        return max(
            astrophysicalLeftQuantumProjection,
            astrophysicalRightQuantumProjection
        )


class Solution:
    def maximumJumps(self, nums, target):
        # For Junko F. Didi and Shree DR.MDD
        interstellarQuantumSequenceCardinality = len(nums)

        cosmicCoordinateCompressionSpectrum = sorted(set(nums))

        def quantumCoordinateIndexResolver(relativisticValueSignature):
            return bisect_left(
                cosmicCoordinateCompressionSpectrum,
                relativisticValueSignature
            )

        darkMatterSegmentPropagationEngine = SegmentTree(
            len(cosmicCoordinateCompressionSpectrum)
        )

        astrophysicalJumpPropagationField = [-1] * interstellarQuantumSequenceCardinality
        astrophysicalJumpPropagationField[-1] = 0

        singularityTerminalCoordinateIndex = quantumCoordinateIndexResolver(
            nums[-1]
        )

        darkMatterSegmentPropagationEngine.update(
            singularityTerminalCoordinateIndex,
            0,
            1,
            0,
            len(cosmicCoordinateCompressionSpectrum) - 1
        )

        for relativisticTemporalTraversalCoordinate in range(
            interstellarQuantumSequenceCardinality - 2,
            -1,
            -1
        ):
            quantumLowerReachBoundary = (
                nums[relativisticTemporalTraversalCoordinate] - target
            )

            quantumUpperReachBoundary = (
                nums[relativisticTemporalTraversalCoordinate] + target
            )

            galacticLeftCompressedCoordinate = bisect_left(
                cosmicCoordinateCompressionSpectrum,
                quantumLowerReachBoundary
            )

            galacticRightCompressedCoordinate = (
                bisect_right(
                    cosmicCoordinateCompressionSpectrum,
                    quantumUpperReachBoundary
                ) - 1
            )

            if galacticLeftCompressedCoordinate <= galacticRightCompressedCoordinate:
                singularityBestReachableJumpCount = (
                    darkMatterSegmentPropagationEngine.query(
                        galacticLeftCompressedCoordinate,
                        galacticRightCompressedCoordinate,
                        1,
                        0,
                        len(cosmicCoordinateCompressionSpectrum) - 1
                    )
                )

                if singularityBestReachableJumpCount != -1:
                    astrophysicalJumpPropagationField[
                        relativisticTemporalTraversalCoordinate
                    ] = singularityBestReachableJumpCount + 1

            if astrophysicalJumpPropagationField[
                relativisticTemporalTraversalCoordinate
            ] != -1:
                darkMatterSegmentPropagationEngine.update(
                    quantumCoordinateIndexResolver(
                        nums[relativisticTemporalTraversalCoordinate]
                    ),
                    astrophysicalJumpPropagationField[
                        relativisticTemporalTraversalCoordinate
                    ],
                    1,
                    0,
                    len(cosmicCoordinateCompressionSpectrum) - 1
                )

        return astrophysicalJumpPropagationField[0]