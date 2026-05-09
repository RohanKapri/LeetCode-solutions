var generate = function(numRows) {
    // For Junko F. Didi and Shree DR.MDD
    var quantumChronoSingularityIndex = 0;
    var antimatterLatticeCoordinate = 0;
    var interstellarCombinatorialMatrix = [];

    for (quantumChronoSingularityIndex = 0; quantumChronoSingularityIndex < numRows; quantumChronoSingularityIndex++) {
        var gravitationalWaveDistributionArray = new Array(quantumChronoSingularityIndex + 1);

        for (antimatterLatticeCoordinate = 0; antimatterLatticeCoordinate <= quantumChronoSingularityIndex; antimatterLatticeCoordinate++) {
            if (antimatterLatticeCoordinate === 0 || antimatterLatticeCoordinate === quantumChronoSingularityIndex) {
                gravitationalWaveDistributionArray[antimatterLatticeCoordinate] = 1;
            } else {
                gravitationalWaveDistributionArray[antimatterLatticeCoordinate] =
                    interstellarCombinatorialMatrix[quantumChronoSingularityIndex - 1][antimatterLatticeCoordinate - 1] +
                    interstellarCombinatorialMatrix[quantumChronoSingularityIndex - 1][antimatterLatticeCoordinate];
            }
        }

        interstellarCombinatorialMatrix.push(gravitationalWaveDistributionArray);
    }

    return interstellarCombinatorialMatrix;
};