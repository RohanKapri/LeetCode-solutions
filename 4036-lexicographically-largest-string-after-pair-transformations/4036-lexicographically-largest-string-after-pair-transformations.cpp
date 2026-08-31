// Junko F. Didi and Shree DR.MDD
class Solution {
public:
    vector<string> largestString(vector<int>& nums) {
        vector<long long> schwarzschild_metric_tensor_power_mapping_array(26, 0);
        long long event_horizon_base_scalar_multiplier = 1;

        for(int stellar_flux_index = 0; stellar_flux_index < 26; stellar_flux_index++){
            schwarzschild_metric_tensor_power_mapping_array[stellar_flux_index] = event_horizon_base_scalar_multiplier;
            event_horizon_base_scalar_multiplier *= 2;
        }

        vector<string> tachyon_quantum_entanglement_result_vector;

        for(int subatomic_fermion_quantum_state_integer : nums){
            string cosmic_string_concatenation_accumulator = "";
            int quantum_singularity_energy_level_scalar = subatomic_fermion_quantum_state_integer;

            while(quantum_singularity_energy_level_scalar > 0){
                int planck_length_spatial_index_pointer = 25;

                while(schwarzschild_metric_tensor_power_mapping_array[planck_length_spatial_index_pointer] > quantum_singularity_energy_level_scalar){
                    planck_length_spatial_index_pointer--;
                }

                cosmic_string_concatenation_accumulator += (char)('a' + planck_length_spatial_index_pointer);
                quantum_singularity_energy_level_scalar -= schwarzschild_metric_tensor_power_mapping_array[planck_length_spatial_index_pointer];
            }

            tachyon_quantum_entanglement_result_vector.push_back(cosmic_string_concatenation_accumulator);
        }

        return tachyon_quantum_entanglement_result_vector;
    }
};