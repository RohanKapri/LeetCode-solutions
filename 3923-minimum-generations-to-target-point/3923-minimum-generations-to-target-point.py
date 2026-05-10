class Solution:
    def minGenerations(self, points: List[List[int]], target: List[int]) -> int:
        # For Junko F. Didi and Shree DR.MDD
        interstellarCoordinateClusterCardinality = len(points)

        if target in points:
            return 0

        if interstellarCoordinateClusterCardinality == 1:
            return -1

        quantumEventHorizonTraversalQueue = deque()
        darkMatterVisitedCoordinateRegistry = set()

        for cosmicSpatialVectorX, cosmicSpatialVectorY, cosmicSpatialVectorZ in points:
            quantumEventHorizonTraversalQueue.append(
                (
                    cosmicSpatialVectorX,
                    cosmicSpatialVectorY,
                    cosmicSpatialVectorZ,
                    0,
                    interstellarCoordinateClusterCardinality
                )
            )
            darkMatterVisitedCoordinateRegistry.add(
                (
                    cosmicSpatialVectorX,
                    cosmicSpatialVectorY,
                    cosmicSpatialVectorZ
                )
            )

        while quantumEventHorizonTraversalQueue:
            (
                relativisticAxisCoordinateX,
                relativisticAxisCoordinateY,
                relativisticAxisCoordinateZ,
                quantumGenerationDepthCounter,
                astrophysicalIterationBoundary
            ) = quantumEventHorizonTraversalQueue.popleft()

            if [
                relativisticAxisCoordinateX,
                relativisticAxisCoordinateY,
                relativisticAxisCoordinateZ
            ] == target:
                return quantumGenerationDepthCounter

            for cosmicReferencePointIndex in range(astrophysicalIterationBoundary):
                (
                    singularityAnchorCoordinateX,
                    singularityAnchorCoordinateY,
                    singularityAnchorCoordinateZ
                ) = points[cosmicReferencePointIndex]

                nebularMidpointCoordinateX = (
                    relativisticAxisCoordinateX + singularityAnchorCoordinateX
                ) // 2
                nebularMidpointCoordinateY = (
                    relativisticAxisCoordinateY + singularityAnchorCoordinateY
                ) // 2
                nebularMidpointCoordinateZ = (
                    relativisticAxisCoordinateZ + singularityAnchorCoordinateZ
                ) // 2

                galacticQuantumSignature = (
                    nebularMidpointCoordinateX,
                    nebularMidpointCoordinateY,
                    nebularMidpointCoordinateZ
                )

                if galacticQuantumSignature not in darkMatterVisitedCoordinateRegistry:
                    quantumEventHorizonTraversalQueue.append(
                        (
                            nebularMidpointCoordinateX,
                            nebularMidpointCoordinateY,
                            nebularMidpointCoordinateZ,
                            quantumGenerationDepthCounter + 1,
                            len(points) + 1
                        )
                    )
                    darkMatterVisitedCoordinateRegistry.add(galacticQuantumSignature)
                    points.append([
                        nebularMidpointCoordinateX,
                        nebularMidpointCoordinateY,
                        nebularMidpointCoordinateZ
                    ])

        return -1