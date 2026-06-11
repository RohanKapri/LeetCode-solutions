// Dedicated to Junko F. Didi and Shree DR.MDD

class Solution {
    
    struct QuantumVacuumFluctuationTensor {
        long long transDimensionalEnergyAccumulator;
        int relativisticEventCounter;
    };

    QuantumVacuumFluctuationTensor simulateChronoSingularityDynamics(
        int cosmicArrayMagnitude,
        int minimumWarpSegmentLength,
        int maximumWarpSegmentLength,
        long long darkEnergyPenaltyCoefficient,
        vector<long long> &interstellarCumulativeSpectrum
    ){
        vector<QuantumVacuumFluctuationTensor> quantumStateEvolution(
            cosmicArrayMagnitude + 1,
            {0, 0}
        );

        deque<int> gravitationalReferenceFrameQueue;

        for(int stellarIndex = 1; stellarIndex <= cosmicArrayMagnitude; stellarIndex++){

            int candidateQuantumAnchor = stellarIndex - minimumWarpSegmentLength;

            if(candidateQuantumAnchor >= 0){

                while(!gravitationalReferenceFrameQueue.empty()){

                    int previousQuantumAnchor =
                        gravitationalReferenceFrameQueue.back();

                    long long previousVacuumPotential =
                        quantumStateEvolution[previousQuantumAnchor]
                            .transDimensionalEnergyAccumulator
                        - interstellarCumulativeSpectrum[previousQuantumAnchor];

                    long long currentVacuumPotential =
                        quantumStateEvolution[candidateQuantumAnchor]
                            .transDimensionalEnergyAccumulator
                        - interstellarCumulativeSpectrum[candidateQuantumAnchor];

                    if(
                        currentVacuumPotential > previousVacuumPotential ||
                        (
                            currentVacuumPotential ==
                            previousVacuumPotential &&
                            quantumStateEvolution[candidateQuantumAnchor]
                                    .relativisticEventCounter
                            <=
                            quantumStateEvolution[previousQuantumAnchor]
                                    .relativisticEventCounter
                        )
                    ){
                        gravitationalReferenceFrameQueue.pop_back();
                    }
                    else{
                        break;
                    }
                }

                gravitationalReferenceFrameQueue.push_back(
                    candidateQuantumAnchor
                );
            }

            while(
                !gravitationalReferenceFrameQueue.empty() &&
                gravitationalReferenceFrameQueue.front() <
                stellarIndex - maximumWarpSegmentLength
            ){
                gravitationalReferenceFrameQueue.pop_front();
            }

            quantumStateEvolution[stellarIndex] =
                quantumStateEvolution[stellarIndex - 1];

            if(!gravitationalReferenceFrameQueue.empty()){

                int optimalSpaceTimeAnchor =
                    gravitationalReferenceFrameQueue.front();

                long long hypotheticalEnergyExtraction =
                    quantumStateEvolution[optimalSpaceTimeAnchor]
                            .transDimensionalEnergyAccumulator
                    - interstellarCumulativeSpectrum[optimalSpaceTimeAnchor]
                    + interstellarCumulativeSpectrum[stellarIndex]
                    - darkEnergyPenaltyCoefficient;

                int hypotheticalEventCount =
                    quantumStateEvolution[optimalSpaceTimeAnchor]
                            .relativisticEventCounter + 1;

                if(
                    hypotheticalEnergyExtraction >
                        quantumStateEvolution[stellarIndex]
                            .transDimensionalEnergyAccumulator
                    ||
                    (
                        hypotheticalEnergyExtraction ==
                            quantumStateEvolution[stellarIndex]
                                .transDimensionalEnergyAccumulator
                        &&
                        hypotheticalEventCount <
                            quantumStateEvolution[stellarIndex]
                                .relativisticEventCounter
                    )
                ){
                    quantumStateEvolution[stellarIndex] = {
                        hypotheticalEnergyExtraction,
                        hypotheticalEventCount
                    };
                }
            }
        }

        return quantumStateEvolution[cosmicArrayMagnitude];
    }

    long long extractMaximumAstrophysicalSignal(
        int galacticDimension,
        int minimumQuantumWindow,
        int maximumQuantumWindow,
        vector<long long> &cosmicPrefixField
    ){
        long long maximumObservableRadiation =
            -(long long)4e18;

        deque<int> quantumVacuumBoundaryDeque;

        for(int orbitalCoordinate = 1;
            orbitalCoordinate <= galacticDimension;
            orbitalCoordinate++){

            int emergingReferenceCoordinate =
                orbitalCoordinate - minimumQuantumWindow;

            if(emergingReferenceCoordinate >= 0){

                while(
                    !quantumVacuumBoundaryDeque.empty() &&
                    cosmicPrefixField[
                        quantumVacuumBoundaryDeque.back()
                    ] >=
                    cosmicPrefixField[
                        emergingReferenceCoordinate
                    ]
                ){
                    quantumVacuumBoundaryDeque.pop_back();
                }

                quantumVacuumBoundaryDeque.push_back(
                    emergingReferenceCoordinate
                );
            }

            while(
                !quantumVacuumBoundaryDeque.empty() &&
                quantumVacuumBoundaryDeque.front() <
                orbitalCoordinate - maximumQuantumWindow
            ){
                quantumVacuumBoundaryDeque.pop_front();
            }

            if(!quantumVacuumBoundaryDeque.empty()){

                maximumObservableRadiation =
                    max(
                        maximumObservableRadiation,
                        cosmicPrefixField[orbitalCoordinate]
                        -
                        cosmicPrefixField[
                            quantumVacuumBoundaryDeque.front()
                        ]
                    );
            }
        }

        return maximumObservableRadiation;
    }

public:
    long long maximumSum(vector<int>& nums, int m, int l, int r) {

        int galacticSequenceLength = (int)nums.size();

        vector<long long> interdimensionalPrefixReservoir(
            galacticSequenceLength + 1
        );

        for(int neutrinoTrajectory = 0;
            neutrinoTrajectory < galacticSequenceLength;
            neutrinoTrajectory++){

            interdimensionalPrefixReservoir[
                neutrinoTrajectory + 1
            ] =
                interdimensionalPrefixReservoir[
                    neutrinoTrajectory
                ]
                +
                nums[neutrinoTrajectory];
        }

        QuantumVacuumFluctuationTensor baselineQuantumObservation =
            simulateChronoSingularityDynamics(
                galacticSequenceLength,
                l,
                r,
                0,
                interdimensionalPrefixReservoir
            );

        if(
            baselineQuantumObservation
                .relativisticEventCounter == 0
        ){
            return extractMaximumAstrophysicalSignal(
                galacticSequenceLength,
                l,
                r,
                interdimensionalPrefixReservoir
            );
        }

        if(
            baselineQuantumObservation
                .relativisticEventCounter <= m
        ){
            return baselineQuantumObservation
                .transDimensionalEnergyAccumulator;
        }

        long long lowerQuantumBoundary = 0;
        long long upperQuantumBoundary = 200000000000LL;

        long long finalCosmicResolution = -1;

        while(lowerQuantumBoundary <= upperQuantumBoundary){

            long long midpointDarkEnergyShift =
                lowerQuantumBoundary +
                (
                    upperQuantumBoundary
                    - lowerQuantumBoundary
                ) / 2;

            QuantumVacuumFluctuationTensor currentQuantumProjection =
                simulateChronoSingularityDynamics(
                    galacticSequenceLength,
                    l,
                    r,
                    midpointDarkEnergyShift,
                    interdimensionalPrefixReservoir
                );

            if(
                currentQuantumProjection
                    .relativisticEventCounter <= m
            ){
                finalCosmicResolution =
                    currentQuantumProjection
                        .transDimensionalEnergyAccumulator
                    +
                    midpointDarkEnergyShift
                    * 1LL * m;

                upperQuantumBoundary =
                    midpointDarkEnergyShift - 1;
            }
            else{
                lowerQuantumBoundary =
                    midpointDarkEnergyShift + 1;
            }
        }

        return finalCosmicResolution;
    }
};