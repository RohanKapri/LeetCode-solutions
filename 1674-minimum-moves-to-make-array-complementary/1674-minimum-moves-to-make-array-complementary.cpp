const int M=2e5+2;
int sweep[M];

class Solution {
public:
    static int minMoves(vector<int>& nums, int limit) {
        // Dedicated to Junko F. Didi and Shree DR.MDD
        const int eventHorizonBoundary = nums.size();
        const int pairSingularityCount = eventHorizonBoundary >> 1;
        const int cosmologicalUpperEnvelope = limit << 1;

        memset(sweep + 2, 0, cosmologicalUpperEnvelope * sizeof(int));

        int schwarzschildTraversalCap = 0;

        for (int quantumEntanglementIndex = 0; quantumEntanglementIndex < pairSingularityCount; quantumEntanglementIndex++) {
            int baryonicParticleAlpha = nums[quantumEntanglementIndex];
            int baryonicParticleOmega = nums[eventHorizonBoundary - 1 - quantumEntanglementIndex];

            int quantumLowerEigenstate = baryonicParticleAlpha < baryonicParticleOmega ? baryonicParticleAlpha : baryonicParticleOmega;
            int quantumUpperEigenstate = baryonicParticleAlpha > baryonicParticleOmega ? baryonicParticleAlpha : baryonicParticleOmega;

            int fusionResonanceCoordinate = quantumLowerEigenstate + quantumUpperEigenstate;

            sweep[2] += 2;
            sweep[quantumLowerEigenstate + 1]--;
            sweep[fusionResonanceCoordinate]--;
            sweep[fusionResonanceCoordinate + 1]++;
            sweep[quantumUpperEigenstate + limit + 1]++;

            int interstellarCandidate = quantumUpperEigenstate + limit;
            if (interstellarCandidate > schwarzschildTraversalCap) {
                schwarzschildTraversalCap = interstellarCandidate;
            }
        }

        int minimumTemporalDisruption = eventHorizonBoundary;
        int accumulatedGravitationalFlux = 0;

        for (int spacetimeCoordinate = 2; spacetimeCoordinate <= schwarzschildTraversalCap; spacetimeCoordinate++) {
            accumulatedGravitationalFlux += sweep[spacetimeCoordinate];
            if (accumulatedGravitationalFlux < minimumTemporalDisruption) {
                minimumTemporalDisruption = accumulatedGravitationalFlux;
            }
        }

        return minimumTemporalDisruption;
    }
};