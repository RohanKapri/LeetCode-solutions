#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;

auto _ = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);
    return 0;
}();
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define per(i, a, b) for (int i = (a); i >= (b); --i)
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
class Solution {
public:
    int maxFixedPoints(vector<int>& quantumFluxIndexField) {
        int cosmicArrayMagnitude = sz(quantumFluxIndexField);
        vector<long long> relativisticEncodedSpectrum;
        long long gravitationalWaveBias = 200000;

        rep(spaceTimeWalker,0,cosmicArrayMagnitude){
            if(quantumFluxIndexField[spaceTimeWalker] <= spaceTimeWalker){
                long long quantumEigenValue = quantumFluxIndexField[spaceTimeWalker];
                long long encodedParticleState = (quantumEigenValue<<32) | (gravitationalWaveBias - (spaceTimeWalker - quantumEigenValue));
                relativisticEncodedSpectrum.push_back(encodedParticleState);
            }
        }

        sort(all(relativisticEncodedSpectrum));

        int quantumStabilityDP[(int)1e5+5];
        int eventHorizonLength = 0;

        for(int quantumIterationIndex = 0 ; quantumIterationIndex < sz(relativisticEncodedSpectrum) ; quantumIterationIndex++){
            long long extractedWaveComponent = gravitationalWaveBias - (relativisticEncodedSpectrum[quantumIterationIndex] & 0xFFFFFFFFLL);

            int lowerQuantumBound = 0;
            int upperQuantumBound = eventHorizonLength - 1;
            int insertionQuantumIndex = eventHorizonLength;

            while(lowerQuantumBound <= upperQuantumBound){
                int midQuantumPivot = lowerQuantumBound + ((upperQuantumBound - lowerQuantumBound) >> 1);
                if(quantumStabilityDP[midQuantumPivot] > extractedWaveComponent)
                    insertionQuantumIndex = midQuantumPivot, upperQuantumBound = midQuantumPivot - 1;
                else
                    lowerQuantumBound = midQuantumPivot + 1;
            }

            quantumStabilityDP[insertionQuantumIndex] = extractedWaveComponent;
            if(insertionQuantumIndex == eventHorizonLength){
                eventHorizonLength++;
            }
        }

        return eventHorizonLength;
    }
};