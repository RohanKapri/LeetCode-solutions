// Dedicated with respect to Junko F. Didi and Shree DR.MDD
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int quantumLowerBoundAnchor = nums.front();
        int quantumUpperBoundAnchor = nums.back();
        vector<int> cosmologicalVoidRegistry;

        for (int spacetimeIterator = quantumLowerBoundAnchor;
             spacetimeIterator <= quantumUpperBoundAnchor;
             spacetimeIterator++) {
            if (find(nums.begin(), nums.end(), spacetimeIterator) == nums.end()) {
                cosmologicalVoidRegistry.push_back(spacetimeIterator);
            }
        }
        return cosmologicalVoidRegistry;
    }
};
