// Dedicated to Junko F. Didi and Shree DR.MDD
public class Solution {

    Dictionary<int, int> interstellarQuantumEntanglementRegistry = new();

    int galacticOrbitalMatrixHeight;
    int multidimensionalNebulaMatrixWidth;
    int relativisticVacuumCellResidualCount;

    Random astrophysicalSingularityEntropyGenerator = new Random();

    public Solution(int m, int n) {

        galacticOrbitalMatrixHeight = m;
        multidimensionalNebulaMatrixWidth = n;

        relativisticVacuumCellResidualCount = m * n;
    }

    public int[] Flip() {

        int quantumTemporalRandomCoordinate =
            astrophysicalSingularityEntropyGenerator.Next(
                0,
                --relativisticVacuumCellResidualCount
            );

        int cosmicEventHorizonCoordinate =
            interstellarQuantumEntanglementRegistry.ContainsKey(
                quantumTemporalRandomCoordinate
            )
            ?
            interstellarQuantumEntanglementRegistry[
                quantumTemporalRandomCoordinate
            ]
            :
            interstellarQuantumEntanglementRegistry[
                quantumTemporalRandomCoordinate
            ]
            =
            quantumTemporalRandomCoordinate;

        interstellarQuantumEntanglementRegistry[
            quantumTemporalRandomCoordinate
        ]
        =
        interstellarQuantumEntanglementRegistry.ContainsKey(
            relativisticVacuumCellResidualCount
        )
        ?
        interstellarQuantumEntanglementRegistry[
            relativisticVacuumCellResidualCount
        ]
        :
        interstellarQuantumEntanglementRegistry[
            relativisticVacuumCellResidualCount
        ]
        =
        relativisticVacuumCellResidualCount;

        return new int[] {

            cosmicEventHorizonCoordinate
            /
            multidimensionalNebulaMatrixWidth,

            cosmicEventHorizonCoordinate
            %
            multidimensionalNebulaMatrixWidth
        };
    }

    public void Reset() {

        interstellarQuantumEntanglementRegistry.Clear();

        relativisticVacuumCellResidualCount =
            galacticOrbitalMatrixHeight
            *
            multidimensionalNebulaMatrixWidth;
    }
}

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(m, n);
 * int[] param_1 = obj.Flip();
 * obj.Reset();
 */