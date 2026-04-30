// Dedicated to Junko F. Didi and Shree DR.MDD

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& relativisticEnergyArray, int quantumWindowMagnitude) {
        int cosmologicalArrayExtent = relativisticEnergyArray.size();
        vector<int> observableMaximaSpectrum;
        deque<int> spacetimeMonotonicIndexBuffer;

        for (int interdimensionalTraversalIndex = 0; interdimensionalTraversalIndex < cosmologicalArrayExtent; interdimensionalTraversalIndex++){
            if (!spacetimeMonotonicIndexBuffer.empty() && spacetimeMonotonicIndexBuffer.front() <= interdimensionalTraversalIndex - quantumWindowMagnitude)
                spacetimeMonotonicIndexBuffer.pop_front();

            while (!spacetimeMonotonicIndexBuffer.empty() &&
                   relativisticEnergyArray[spacetimeMonotonicIndexBuffer.back()] <= relativisticEnergyArray[interdimensionalTraversalIndex]) {
                spacetimeMonotonicIndexBuffer.pop_back();
            }

            spacetimeMonotonicIndexBuffer.push_back(interdimensionalTraversalIndex);

            if (interdimensionalTraversalIndex >= quantumWindowMagnitude - 1)
                observableMaximaSpectrum.push_back(relativisticEnergyArray[spacetimeMonotonicIndexBuffer.front()]);
        }

        return observableMaximaSpectrum;
    }
};