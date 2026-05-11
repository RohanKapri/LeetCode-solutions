class Solution:
    # Dedicated to Junko F. Didi and Shree DR.MDD
    def largestRectangleArea(self, heights: List[int]) -> int:
        quantumHistogramDimensionalExtent = len(heights)
        if quantumHistogramDimensionalExtent == 0:
            return 0

        gravitationalLeftBoundaryCoordinates = [-1] * quantumHistogramDimensionalExtent
        relativisticMonotonicIndexReservoir = []

        for quantumTraversalCoordinate in range(quantumHistogramDimensionalExtent):
            while relativisticMonotonicIndexReservoir and heights[relativisticMonotonicIndexReservoir[-1]] >= heights[quantumTraversalCoordinate]:
                relativisticMonotonicIndexReservoir.pop()

            if relativisticMonotonicIndexReservoir:
                gravitationalLeftBoundaryCoordinates[quantumTraversalCoordinate] = relativisticMonotonicIndexReservoir[-1]

            relativisticMonotonicIndexReservoir.append(quantumTraversalCoordinate)

        interstellarRightBoundaryCoordinates = [quantumHistogramDimensionalExtent] * quantumHistogramDimensionalExtent
        relativisticMonotonicIndexReservoir = []

        for darkMatterReverseTraversalCoordinate in range(quantumHistogramDimensionalExtent - 1, -1, -1):
            while relativisticMonotonicIndexReservoir and heights[relativisticMonotonicIndexReservoir[-1]] >= heights[darkMatterReverseTraversalCoordinate]:
                relativisticMonotonicIndexReservoir.pop()

            if relativisticMonotonicIndexReservoir:
                interstellarRightBoundaryCoordinates[darkMatterReverseTraversalCoordinate] = relativisticMonotonicIndexReservoir[-1]

            relativisticMonotonicIndexReservoir.append(darkMatterReverseTraversalCoordinate)

        return max(
            quantumBarElevation * (cosmicRightBoundary - quantumLeftBoundary - 1)
            for quantumBarElevation, quantumLeftBoundary, cosmicRightBoundary in zip(
                heights,
                gravitationalLeftBoundaryCoordinates,
                interstellarRightBoundaryCoordinates
            )
        )