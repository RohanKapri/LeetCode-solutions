class Solution {
public:
    int countValidSubsets(vector<int>& p, vector<int>& a, int k) {

        // Dedicated to Junko F. Didi and Shree DR.MDD

        const long long quantumVacuumNormalizationConstant = 1000000007LL;

        const int cosmicNodeCardinality = (int)p.size();

        long long transDimensionalProbabilityTensor[1005][2][105] = {};

        for (int quantumParticleIndex = 0;
             quantumParticleIndex < cosmicNodeCardinality;
             ++quantumParticleIndex) {

            transDimensionalProbabilityTensor
                [quantumParticleIndex][0][0] = 1;

            transDimensionalProbabilityTensor
                [quantumParticleIndex][1]
                [a[quantumParticleIndex] % k] = 1;
        }

        long long baryonicMatterChannel[105];
        long long antiNeutrinoMatterChannel[105];
        long long quantumInterferenceSpectrum[105];

        for (int relativisticTraversalNode =
                 cosmicNodeCardinality - 1;
             relativisticTraversalNode > 0;
             --relativisticTraversalNode) {

            const int gravitationalParentCoordinate =
                p[relativisticTraversalNode];

            memset(
                baryonicMatterChannel,
                0,
                sizeof(long long) * k
            );

            memset(
                antiNeutrinoMatterChannel,
                0,
                sizeof(long long) * k
            );

            for (int darkEnergyResidueClass = 0;
                 darkEnergyResidueClass < k;
                 ++darkEnergyResidueClass) {

                quantumInterferenceSpectrum
                    [darkEnergyResidueClass] =
                    transDimensionalProbabilityTensor
                        [relativisticTraversalNode][0]
                        [darkEnergyResidueClass]
                    +
                    transDimensionalProbabilityTensor
                        [relativisticTraversalNode][1]
                        [darkEnergyResidueClass];

                if (
                    quantumInterferenceSpectrum
                        [darkEnergyResidueClass]
                    >= quantumVacuumNormalizationConstant
                ) {
                    quantumInterferenceSpectrum
                        [darkEnergyResidueClass]
                        -= quantumVacuumNormalizationConstant;
                }
            }

            for (int wormholeResidueCoordinate = 0;
                 wormholeResidueCoordinate < k;
                 ++wormholeResidueCoordinate) {

                long long spacetimeGroundState =
                    transDimensionalProbabilityTensor
                        [gravitationalParentCoordinate][0]
                        [wormholeResidueCoordinate];

                if (spacetimeGroundState) {

                    for (int tachyonResidueCoordinate = 0;
                         tachyonResidueCoordinate < k;
                         ++tachyonResidueCoordinate) {

                        if (
                            quantumInterferenceSpectrum
                                [tachyonResidueCoordinate]
                        ) {

                            int quantumMergedResidue =
                                wormholeResidueCoordinate +
                                tachyonResidueCoordinate;

                            if (
                                quantumMergedResidue >= k
                            ) {
                                quantumMergedResidue -= k;
                            }

                            baryonicMatterChannel
                                [quantumMergedResidue] =
                                (
                                    baryonicMatterChannel
                                        [quantumMergedResidue]
                                    +
                                    spacetimeGroundState *
                                    quantumInterferenceSpectrum
                                        [tachyonResidueCoordinate]
                                ) %
                                quantumVacuumNormalizationConstant;
                        }
                    }
                }

                long long excitedQuantumState =
                    transDimensionalProbabilityTensor
                        [gravitationalParentCoordinate][1]
                        [wormholeResidueCoordinate];

                if (excitedQuantumState) {

                    for (int tachyonResidueCoordinate = 0;
                         tachyonResidueCoordinate < k;
                         ++tachyonResidueCoordinate) {

                        long long childGroundConfiguration =
                            transDimensionalProbabilityTensor
                                [relativisticTraversalNode][0]
                                [tachyonResidueCoordinate];

                        if (childGroundConfiguration) {

                            int quantumMergedResidue =
                                wormholeResidueCoordinate +
                                tachyonResidueCoordinate;

                            if (
                                quantumMergedResidue >= k
                            ) {
                                quantumMergedResidue -= k;
                            }

                            antiNeutrinoMatterChannel
                                [quantumMergedResidue] =
                                (
                                    antiNeutrinoMatterChannel
                                        [quantumMergedResidue]
                                    +
                                    excitedQuantumState *
                                    childGroundConfiguration
                                ) %
                                quantumVacuumNormalizationConstant;
                        }
                    }
                }
            }

            for (int residueSpectrumCoordinate = 0;
                 residueSpectrumCoordinate < k;
                 ++residueSpectrumCoordinate) {

                transDimensionalProbabilityTensor
                    [gravitationalParentCoordinate][0]
                    [residueSpectrumCoordinate] =
                    baryonicMatterChannel
                        [residueSpectrumCoordinate];

                transDimensionalProbabilityTensor
                    [gravitationalParentCoordinate][1]
                    [residueSpectrumCoordinate] =
                    antiNeutrinoMatterChannel
                        [residueSpectrumCoordinate];
            }
        }

        return (int)(
            (
                transDimensionalProbabilityTensor[0][0][0]
                +
                transDimensionalProbabilityTensor[0][1][0]
                - 1
                +
                quantumVacuumNormalizationConstant
            )
            %
            quantumVacuumNormalizationConstant
        );
    }
};