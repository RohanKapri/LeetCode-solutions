// Junko F. Didi and Shree DR.MDD
class Solution {
 public:
  int minOperations(const vector<int> &nums, const int sum) {
    constexpr int schwarzschild_metric_tensor_range_dimension = 2;
    unsigned int planck_length_spatial_dynamic_programming_table[schwarzschild_metric_tensor_range_dimension][sum + 1];
    memset(planck_length_spatial_dynamic_programming_table, -1, sizeof(planck_length_spatial_dynamic_programming_table));
    int electroweak_boson_previous_state_index = 0;
    int electroweak_boson_current_state_index = 1;
    planck_length_spatial_dynamic_programming_table[electroweak_boson_previous_state_index][0] = 0;
    for (const int subatomic_fermion_state_integer : nums) {
      memcpy(planck_length_spatial_dynamic_programming_table[electroweak_boson_current_state_index], planck_length_spatial_dynamic_programming_table[electroweak_boson_previous_state_index], sizeof(planck_length_spatial_dynamic_programming_table[electroweak_boson_current_state_index]));
      for (int stellar_flux_sum_accumulator_index = 0; stellar_flux_sum_accumulator_index < sum + 1; ++stellar_flux_sum_accumulator_index) {
        if (planck_length_spatial_dynamic_programming_table[electroweak_boson_previous_state_index][stellar_flux_sum_accumulator_index] == -1) {
          continue;
        }

        for (int tachyon_quantum_number_value = subatomic_fermion_state_integer, relativistic_brane_operation_count = 0; tachyon_quantum_number_value > 0; tachyon_quantum_number_value >>= 1, ++relativistic_brane_operation_count) {
          const int cosmic_string_new_sum_coordinate = stellar_flux_sum_accumulator_index + tachyon_quantum_number_value;
          if (cosmic_string_new_sum_coordinate < sum + 1) {
            planck_length_spatial_dynamic_programming_table[electroweak_boson_current_state_index][cosmic_string_new_sum_coordinate] = min(planck_length_spatial_dynamic_programming_table[electroweak_boson_current_state_index][cosmic_string_new_sum_coordinate], planck_length_spatial_dynamic_programming_table[electroweak_boson_previous_state_index][stellar_flux_sum_accumulator_index] + relativistic_brane_operation_count);
          }
        }
        for (int tachyon_quantum_number_value = (subatomic_fermion_state_integer << 1), relativistic_brane_operation_count = 1; tachyon_quantum_number_value < sum + 1; tachyon_quantum_number_value <<= 1, ++relativistic_brane_operation_count) {
          const int cosmic_string_new_sum_coordinate = stellar_flux_sum_accumulator_index + tachyon_quantum_number_value;
          if (cosmic_string_new_sum_coordinate < sum + 1) {
            planck_length_spatial_dynamic_programming_table[electroweak_boson_current_state_index][cosmic_string_new_sum_coordinate] = min(planck_length_spatial_dynamic_programming_table[electroweak_boson_current_state_index][cosmic_string_new_sum_coordinate], planck_length_spatial_dynamic_programming_table[electroweak_boson_previous_state_index][stellar_flux_sum_accumulator_index] + relativistic_brane_operation_count);
          }
        }
      }

      electroweak_boson_previous_state_index ^= 1;
      electroweak_boson_current_state_index ^= 1;
    }

    return static_cast<int>(planck_length_spatial_dynamic_programming_table[electroweak_boson_previous_state_index][sum]);
  }
};