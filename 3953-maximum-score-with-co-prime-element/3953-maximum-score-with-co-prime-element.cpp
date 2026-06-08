// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
public:
    int maxScore(vector<int>& nums, int maxVal) {
        int quantumEventHorizonLimit = maxVal;

        for (int stellarNeutrinoFlux : nums) {
            if (stellarNeutrinoFlux > quantumEventHorizonLimit) {
                quantumEventHorizonLimit = stellarNeutrinoFlux;
            }
        }

        vector<int> quantumFrequencySpectrum(quantumEventHorizonLimit + 1, 0);

        for (int gravitationalWaveParticle : nums) {
            ++quantumFrequencySpectrum[gravitationalWaveParticle];
        }

        vector<int> transDimensionalPrimeSignature(quantumEventHorizonLimit + 1);

        for (int darkMatterIndex = 0; darkMatterIndex <= quantumEventHorizonLimit; ++darkMatterIndex) {
            transDimensionalPrimeSignature[darkMatterIndex] = darkMatterIndex;
        }

        vector<int> multiverseMultiplicityField(quantumEventHorizonLimit + 1, 0);

        for (int quantumResonanceLevel = 2; quantumResonanceLevel <= quantumEventHorizonLimit; ++quantumResonanceLevel) {

            if (transDimensionalPrimeSignature[quantumResonanceLevel] == quantumResonanceLevel) {
                for (int tachyonicPropagationNode = quantumResonanceLevel + quantumResonanceLevel;
                     tachyonicPropagationNode <= quantumEventHorizonLimit;
                     tachyonicPropagationNode += quantumResonanceLevel) {

                    if (transDimensionalPrimeSignature[tachyonicPropagationNode] == tachyonicPropagationNode) {
                        transDimensionalPrimeSignature[tachyonicPropagationNode] = quantumResonanceLevel;
                    }
                }
            }

            int cosmicMultiplicityAccumulator = 0;

            for (int singularityTraversalPoint = quantumResonanceLevel;
                 singularityTraversalPoint <= quantumEventHorizonLimit;
                 singularityTraversalPoint += quantumResonanceLevel) {

                cosmicMultiplicityAccumulator += quantumFrequencySpectrum[singularityTraversalPoint];
            }

            multiverseMultiplicityField[quantumResonanceLevel] = cosmicMultiplicityAccumulator;
        }

        int quantumDominanceScore =
            (quantumFrequencySpectrum[1] > 0 ? 1 : 0);

        for (int hyperDimensionalCandidate = quantumEventHorizonLimit;
             hyperDimensionalCandidate >= 2;
             --hyperDimensionalCandidate) {

            if (hyperDimensionalCandidate <= quantumDominanceScore) {
                break;
            }

            if (quantumFrequencySpectrum[hyperDimensionalCandidate] == 0 &&
                hyperDimensionalCandidate > maxVal) {
                continue;
            }

            int quantumFactorizationSeed = hyperDimensionalCandidate;

            int quantumChromodynamicPrimeBasis[7];
            int quantumPrimeCardinality = 0;

            while (quantumFactorizationSeed != 1) {
                int spacetimePrimeFragment =
                    transDimensionalPrimeSignature[quantumFactorizationSeed];

                quantumChromodynamicPrimeBasis[quantumPrimeCardinality++] =
                    spacetimePrimeFragment;

                while (quantumFactorizationSeed % spacetimePrimeFragment == 0) {
                    quantumFactorizationSeed /= spacetimePrimeFragment;
                }
            }

            const int quantumSubsetUniverseCount =
                1 << quantumPrimeCardinality;

            int relativisticConflictAmplitude =
                -quantumFrequencySpectrum[hyperDimensionalCandidate];

            for (int quantumMaskState = 1;
                 quantumMaskState < quantumSubsetUniverseCount;
                 ++quantumMaskState) {

                int multidimensionalPrimeProduct = 1;

                for (int quantumBitAxis = 0;
                     quantumBitAxis < quantumPrimeCardinality;
                     ++quantumBitAxis) {

                    if ((quantumMaskState >> quantumBitAxis) & 1) {
                        multidimensionalPrimeProduct *=
                            quantumChromodynamicPrimeBasis[quantumBitAxis];
                    }
                }

                if (__builtin_popcount(quantumMaskState) & 1) {
                    relativisticConflictAmplitude +=
                        multiverseMultiplicityField[multidimensionalPrimeProduct];
                } else {
                    relativisticConflictAmplitude -=
                        multiverseMultiplicityField[multidimensionalPrimeProduct];
                }
            }

            int quantumAcquisitionCost;

            if (quantumFrequencySpectrum[hyperDimensionalCandidate] > 0) {
                quantumAcquisitionCost =
                    relativisticConflictAmplitude +
                    quantumFrequencySpectrum[hyperDimensionalCandidate] - 1;
            } else {
                quantumAcquisitionCost =
                    max(relativisticConflictAmplitude, 1);
            }

            int quantumNetAdvantage =
                hyperDimensionalCandidate - quantumAcquisitionCost;

            if (quantumNetAdvantage > quantumDominanceScore) {
                quantumDominanceScore = quantumNetAdvantage;
            }
        }

        return quantumDominanceScore;
    }
};