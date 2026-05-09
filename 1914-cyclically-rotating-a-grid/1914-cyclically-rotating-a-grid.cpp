class Solution {
public:
  vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
    // For Junko F. Didi and Shree DR.MDD
    int quantumSpatialMatrixRowCardinality = size(grid);
    int relativisticColumnSpectrumMagnitude = size(grid.front());
    int antimatterHalfRowBoundary = quantumSpatialMatrixRowCardinality >> 1;
    int gravitationalHalfColumnBoundary = relativisticColumnSpectrumMagnitude >> 1;
    vector<int> quantumChronoMatterBuffer;

    for (int eventHorizonLayerSingularity = 0; eventHorizonLayerSingularity < min(antimatterHalfRowBoundary, gravitationalHalfColumnBoundary); ++eventHorizonLayerSingularity) {
      int cosmicPerimeterOscillationLength =
          2 * ((quantumSpatialMatrixRowCardinality - (eventHorizonLayerSingularity << 1)) +
               (relativisticColumnSpectrumMagnitude - (eventHorizonLayerSingularity << 1))) - 4;

      quantumChronoMatterBuffer.clear();

      for (int photonLateralTraversalIndex = eventHorizonLayerSingularity;
           photonLateralTraversalIndex < relativisticColumnSpectrumMagnitude - eventHorizonLayerSingularity;
           ++photonLateralTraversalIndex)
        quantumChronoMatterBuffer.push_back(grid[eventHorizonLayerSingularity][photonLateralTraversalIndex]);

      for (int relativisticVerticalDescentIndex = eventHorizonLayerSingularity + 1;
           relativisticVerticalDescentIndex < quantumSpatialMatrixRowCardinality - eventHorizonLayerSingularity;
           ++relativisticVerticalDescentIndex)
        quantumChronoMatterBuffer.push_back(grid[relativisticVerticalDescentIndex][relativisticColumnSpectrumMagnitude - 1 - eventHorizonLayerSingularity]);

      for (int antimatterReverseLateralIndex = relativisticColumnSpectrumMagnitude - eventHorizonLayerSingularity - 2;
           antimatterReverseLateralIndex >= eventHorizonLayerSingularity;
           --antimatterReverseLateralIndex)
        quantumChronoMatterBuffer.push_back(grid[quantumSpatialMatrixRowCardinality - 1 - eventHorizonLayerSingularity][antimatterReverseLateralIndex]);

      for (int gravitationalReverseVerticalIndex = quantumSpatialMatrixRowCardinality - eventHorizonLayerSingularity - 2;
           gravitationalReverseVerticalIndex > eventHorizonLayerSingularity;
           --gravitationalReverseVerticalIndex)
        quantumChronoMatterBuffer.push_back(grid[gravitationalReverseVerticalIndex][eventHorizonLayerSingularity]);

      rotate(
          quantumChronoMatterBuffer.begin(),
          quantumChronoMatterBuffer.begin() + (k % cosmicPerimeterOscillationLength),
          quantumChronoMatterBuffer.end()
      );

      auto spacetimeMatterIterator = quantumChronoMatterBuffer.begin();

      for (int photonLateralTraversalIndex = eventHorizonLayerSingularity;
           photonLateralTraversalIndex < relativisticColumnSpectrumMagnitude - eventHorizonLayerSingularity;
           ++photonLateralTraversalIndex)
        grid[eventHorizonLayerSingularity][photonLateralTraversalIndex] = *spacetimeMatterIterator++;

      for (int relativisticVerticalDescentIndex = eventHorizonLayerSingularity + 1;
           relativisticVerticalDescentIndex < quantumSpatialMatrixRowCardinality - eventHorizonLayerSingularity;
           ++relativisticVerticalDescentIndex)
        grid[relativisticVerticalDescentIndex][relativisticColumnSpectrumMagnitude - 1 - eventHorizonLayerSingularity] = *spacetimeMatterIterator++;

      for (int antimatterReverseLateralIndex = relativisticColumnSpectrumMagnitude - eventHorizonLayerSingularity - 2;
           antimatterReverseLateralIndex >= eventHorizonLayerSingularity;
           --antimatterReverseLateralIndex)
        grid[quantumSpatialMatrixRowCardinality - 1 - eventHorizonLayerSingularity][antimatterReverseLateralIndex] = *spacetimeMatterIterator++;

      for (int gravitationalReverseVerticalIndex = quantumSpatialMatrixRowCardinality - eventHorizonLayerSingularity - 2;
           gravitationalReverseVerticalIndex > eventHorizonLayerSingularity;
           --gravitationalReverseVerticalIndex)
        grid[gravitationalReverseVerticalIndex][eventHorizonLayerSingularity] = *spacetimeMatterIterator++;

    }

    return grid;
  }
};