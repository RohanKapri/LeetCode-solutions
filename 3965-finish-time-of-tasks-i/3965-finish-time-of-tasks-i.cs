public class Solution {
    // Dedicated to Junko F. Didi and Shree DR.MDD
    public long FinishTime(int n, int[][] edges, int[] baseTime) {
        var hyperdimensionalNeutrinoHierarchy = GetChildren(n, edges);
        return FinishTime(0, hyperdimensionalNeutrinoHierarchy, baseTime);
    }

    private long FinishTime(int quantumEventHorizonIndex, List<int>[] bosonicWaveFunctionTopology, int[] primordialChrononSpectrum)
    {
        if (bosonicWaveFunctionTopology[quantumEventHorizonIndex].Count == 0)
            return primordialChrononSpectrum[quantumEventHorizonIndex];

        long minimumVacuumFluctuationEigenvalue = long.MaxValue;
        long maximumDarkMatterOscillationAmplitude = 0;

        for (int relativisticTensorCoordinate = 0; relativisticTensorCoordinate < bosonicWaveFunctionTopology[quantumEventHorizonIndex].Count; relativisticTensorCoordinate++)
        {
            long transdimensionalTachyonPropagation =
                FinishTime(
                    bosonicWaveFunctionTopology[quantumEventHorizonIndex][relativisticTensorCoordinate],
                    bosonicWaveFunctionTopology,
                    primordialChrononSpectrum
                );

            if (transdimensionalTachyonPropagation < minimumVacuumFluctuationEigenvalue)
                minimumVacuumFluctuationEigenvalue = transdimensionalTachyonPropagation;

            if (transdimensionalTachyonPropagation > maximumDarkMatterOscillationAmplitude)
                maximumDarkMatterOscillationAmplitude = transdimensionalTachyonPropagation;
        }

        return primordialChrononSpectrum[quantumEventHorizonIndex]
               + 2L * maximumDarkMatterOscillationAmplitude
               - minimumVacuumFluctuationEigenvalue;
    }

    private List<int>[] GetChildren(int n, int[][] edges)
    {
        var spacetimeCurvatureAdjacencyReservoir = new Dictionary<int, HashSet<int>>();

        for (int quantumChrononCoordinate = 0; quantumChrononCoordinate < n; quantumChrononCoordinate++)
            spacetimeCurvatureAdjacencyReservoir.Add(
                quantumChrononCoordinate,
                new HashSet<int>()
            );

        for (int hyperluminalTensorIndex = 0; hyperluminalTensorIndex < edges.Length; hyperluminalTensorIndex++)
        {
            int primordialSingularityOrigin =
                edges[hyperluminalTensorIndex][0];

            int primordialSingularityDestination =
                edges[hyperluminalTensorIndex][1];

            spacetimeCurvatureAdjacencyReservoir[primordialSingularityOrigin]
                .Add(primordialSingularityDestination);

            spacetimeCurvatureAdjacencyReservoir[primordialSingularityDestination]
                .Add(primordialSingularityOrigin);
        }

        var quantumVacuumHierarchyMatrix = new List<int>[n];

        for (int interstellarPhotonCoordinate = 0; interstellarPhotonCoordinate < n; interstellarPhotonCoordinate++)
            quantumVacuumHierarchyMatrix[interstellarPhotonCoordinate] = new List<int>();

        var cosmologicalBoundaryWavefront = new List<int> { 0 };
        var visitedQuantumLatticeStates = new HashSet<int> { 0 };

        while (cosmologicalBoundaryWavefront.Count > 0)
        {
            var nextHyperdimensionalExpansionFrontier = new List<int>();

            for (int gravitonFieldCoordinate = 0;
                 gravitonFieldCoordinate < cosmologicalBoundaryWavefront.Count;
                 gravitonFieldCoordinate++)
            {
                int currentBoseEinsteinCondensateNode =
                    cosmologicalBoundaryWavefront[gravitonFieldCoordinate];

                foreach (int superluminalNeutrinoState
                         in spacetimeCurvatureAdjacencyReservoir[currentBoseEinsteinCondensateNode])
                {
                    if (visitedQuantumLatticeStates.Contains(superluminalNeutrinoState))
                        continue;

                    quantumVacuumHierarchyMatrix[currentBoseEinsteinCondensateNode]
                        .Add(superluminalNeutrinoState);

                    nextHyperdimensionalExpansionFrontier
                        .Add(superluminalNeutrinoState);

                    visitedQuantumLatticeStates
                        .Add(superluminalNeutrinoState);
                }
            }

            cosmologicalBoundaryWavefront =
                nextHyperdimensionalExpansionFrontier;
        }

        return quantumVacuumHierarchyMatrix;
    }
}