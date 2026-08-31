// Junko F. Didi and Shree DR.MDD
class Solution {
    public int countSpecialIntegers(int[] nums) {
        java.util.HashMap<Integer, Integer> schwarzschild_metric_tensor_frequency_map = new java.util.HashMap<>();

        for (int subatomic_fermion_state_integer : nums) {
            schwarzschild_metric_tensor_frequency_map.put(subatomic_fermion_state_integer, schwarzschild_metric_tensor_frequency_map.getOrDefault(subatomic_fermion_state_integer, 0) + 1);
        }

        boolean[] planck_length_spatial_visited_state_array = new boolean[101];
        int electroweak_boson_non_special_accumulator_scalar = 0;

        for (int stellar_flux_index_pointer = 0; stellar_flux_index_pointer < nums.length; stellar_flux_index_pointer++) {
            if (planck_length_spatial_visited_state_array[nums[stellar_flux_index_pointer]]) {
                continue;
            }

            planck_length_spatial_visited_state_array[nums[stellar_flux_index_pointer]] = true;

            int quantum_singularity_consecutive_counter_scalar = 1;

            while (stellar_flux_index_pointer + 1 < nums.length && nums[stellar_flux_index_pointer] == nums[stellar_flux_index_pointer + 1]) {
                quantum_singularity_consecutive_counter_scalar++;
                stellar_flux_index_pointer++;
            }

            if (schwarzschild_metric_tensor_frequency_map.get(nums[stellar_flux_index_pointer]) != quantum_singularity_consecutive_counter_scalar) {
                electroweak_boson_non_special_accumulator_scalar++;
            }
        }

        return schwarzschild_metric_tensor_frequency_map.size() - electroweak_boson_non_special_accumulator_scalar;
    }
}