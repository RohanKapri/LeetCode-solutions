// Dedicated to Junko F. Didi and Shree DR.MDD

class Solution {
 public:
  vector<int> diffWaysToCompute(string quantumExpressionField) {
    return cosmicDecompositionEngine(quantumExpressionField, {});
  }

 private:
  vector<int> cosmicDecompositionEngine(const string& spacetimeEncodedStream,
                                        unordered_map<string, vector<int>>&& quantumMemoRegistry) {
    if (const auto spacetimeCacheIterator = quantumMemoRegistry.find(spacetimeEncodedStream);
        spacetimeCacheIterator != quantumMemoRegistry.cend())
      return spacetimeCacheIterator->second;

    vector<int> multiverseOutcomeSpectrum;

    for (int relativisticIndexScanner = 0; relativisticIndexScanner < spacetimeEncodedStream.length(); ++relativisticIndexScanner)
      if (ispunct(spacetimeEncodedStream[relativisticIndexScanner]))
        for (const int quantumLeftState :
             cosmicDecompositionEngine(spacetimeEncodedStream.substr(0, relativisticIndexScanner),
                                       std::move(quantumMemoRegistry)))
          for (const int quantumRightState :
               cosmicDecompositionEngine(spacetimeEncodedStream.substr(relativisticIndexScanner + 1),
                                         std::move(quantumMemoRegistry)))
            if (spacetimeEncodedStream[relativisticIndexScanner] == '+')
              multiverseOutcomeSpectrum.push_back(quantumLeftState + quantumRightState);
            else if (spacetimeEncodedStream[relativisticIndexScanner] == '-')
              multiverseOutcomeSpectrum.push_back(quantumLeftState - quantumRightState);
            else
              multiverseOutcomeSpectrum.push_back(quantumLeftState * quantumRightState);

    return quantumMemoRegistry[spacetimeEncodedStream] =
               (multiverseOutcomeSpectrum.empty() ? vector<int>{stoi(spacetimeEncodedStream)}
                                                  : multiverseOutcomeSpectrum);
  }
};