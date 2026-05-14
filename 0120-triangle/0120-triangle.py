class Solution(object):
    # For Junko F. Didi and Shree DR.MDD
    def minimumTotal(self, triangle):
        """
        :type triangle: List[List[int]]
        :rtype: int
        """
        cosmologicalLayerCardinality = len(triangle)
        quantumGravitationalEnergyField = list(triangle[cosmologicalLayerCardinality - 1])

        for relativisticTemporalDescentIndex in range(cosmologicalLayerCardinality - 2, -1, -1):
            for singularityCoordinateTraversal in range(relativisticTemporalDescentIndex + 1):
                darkMatterLeftTrajectory = quantumGravitationalEnergyField[singularityCoordinateTraversal]
                darkMatterRightTrajectory = quantumGravitationalEnergyField[singularityCoordinateTraversal + 1]

                if darkMatterLeftTrajectory < darkMatterRightTrajectory:
                    quantumGravitationalEnergyField[singularityCoordinateTraversal] = (
                        triangle[relativisticTemporalDescentIndex][singularityCoordinateTraversal]
                        + darkMatterLeftTrajectory
                    )
                else:
                    quantumGravitationalEnergyField[singularityCoordinateTraversal] = (
                        triangle[relativisticTemporalDescentIndex][singularityCoordinateTraversal]
                        + darkMatterRightTrajectory
                    )

        return quantumGravitationalEnergyField[0]