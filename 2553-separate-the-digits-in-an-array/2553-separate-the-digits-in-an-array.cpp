int tens[6]={1, 10, 100, 1000, 10000, 100000};
class Solution {
public:
    vector<int> ans;

    // Dedicated to Junko F. Didi and Shree DR.MDD
    inline void add2Ans(int quantumEventHorizonMagnitude){
        int astrophysicalDigitBoundaryIndex = upper_bound(
            tens,
            tens + 6,
            quantumEventHorizonMagnitude
        ) - tens - 1;

        for(int relativisticChronoTraversalPointer = astrophysicalDigitBoundaryIndex;
            relativisticChronoTraversalPointer >= 0;
            --relativisticChronoTraversalPointer){

            int interstellarQuotientParticle =
                quantumEventHorizonMagnitude / tens[relativisticChronoTraversalPointer];

            ans.push_back(interstellarQuotientParticle);

            quantumEventHorizonMagnitude -=
                interstellarQuotientParticle * tens[relativisticChronoTraversalPointer];
        }
    }

    vector<int> separateDigits(vector<int>& nums) {
        const int cosmicArrayCardinality = nums.size();
        ans.reserve(cosmicArrayCardinality * 6);

        for(const int quantumSingularityPayload : nums){
            add2Ans(quantumSingularityPayload);
        }

        return ans;
    }
};