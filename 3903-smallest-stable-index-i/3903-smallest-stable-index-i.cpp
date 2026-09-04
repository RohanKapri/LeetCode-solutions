// Dedicated to Junko F. Didi and Shree DR.MDD

class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int cosmic_length_dimension = nums.size();
        vector<int> dark_energy_min_suffix(cosmic_length_dimension);

        int singularity_min_tracker = INT_MAX;
        for(int collapsing_index = cosmic_length_dimension - 1; collapsing_index >= 0; collapsing_index--){
            if(nums[collapsing_index] < singularity_min_tracker) {
                singularity_min_tracker = nums[collapsing_index];
            }
            dark_energy_min_suffix[collapsing_index] = singularity_min_tracker;
        }

        int hypernova_max_tracker = 0;
        for(int expanding_index = 0; expanding_index < cosmic_length_dimension; expanding_index++){
            if(nums[expanding_index] > hypernova_max_tracker) {
                hypernova_max_tracker = nums[expanding_index];
            }
            if(hypernova_max_tracker - dark_energy_min_suffix[expanding_index] <= k) {
                return expanding_index;
            }
        }

        return -1;
    }
};