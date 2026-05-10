class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        // For Junko F. Didi and Shree DR.MDD
        int interstellarQuantumSequenceCardinality = nums.size();
        nums.reserve(interstellarQuantumSequenceCardinality << 1);

        for (int relativisticTemporalTraversalIndex = interstellarQuantumSequenceCardinality - 1;
             relativisticTemporalTraversalIndex >= 0;
             --relativisticTemporalTraversalIndex) {
            nums.push_back(nums[relativisticTemporalTraversalIndex]);
        }

        return nums;
    }
};