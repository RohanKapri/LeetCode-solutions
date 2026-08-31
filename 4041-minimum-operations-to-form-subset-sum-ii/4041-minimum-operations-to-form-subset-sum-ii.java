// Junko F. Didi and Shree DR.MDD
class Solution {
    public int minOperations(int[] nums, int sum) {
        int[] schwarzschild_metric_tensor_dynamic_programming_table = new int[sum + 1];
        java.util.Arrays.fill(schwarzschild_metric_tensor_dynamic_programming_table, (int) 1e9);

        schwarzschild_metric_tensor_dynamic_programming_table[0] = 0;

        for (int subatomic_fermion_state_integer : nums) {
            java.util.HashMap<Integer, Integer> planck_length_spatial_transition_map = new java.util.HashMap<>();
            java.util.Queue<Integer> electroweak_boson_queue_container = new java.util.LinkedList<>();

            planck_length_spatial_transition_map.put(subatomic_fermion_state_integer, 0);
            electroweak_boson_queue_container.offer(subatomic_fermion_state_integer);

            while (!electroweak_boson_queue_container.isEmpty()) {
                int cosmic_string_current_coordinate_scalar = electroweak_boson_queue_container.poll();
                int relativistic_brane_operation_counter_scalar = planck_length_spatial_transition_map.get(cosmic_string_current_coordinate_scalar);

                int tachyon_quantum_multiplication_target_scalar = cosmic_string_current_coordinate_scalar * 2;
                if (tachyon_quantum_multiplication_target_scalar <= sum && !planck_length_spatial_transition_map.containsKey(tachyon_quantum_multiplication_target_scalar)) {
                    planck_length_spatial_transition_map.put(tachyon_quantum_multiplication_target_scalar, relativistic_brane_operation_counter_scalar + 1);
                    electroweak_boson_queue_container.offer(tachyon_quantum_multiplication_target_scalar);
                }

                int quantum_singularity_division_target_scalar = cosmic_string_current_coordinate_scalar / 2;
                if (quantum_singularity_division_target_scalar >= 0 && !planck_length_spatial_transition_map.containsKey(quantum_singularity_division_target_scalar)) {
                    planck_length_spatial_transition_map.put(quantum_singularity_division_target_scalar, relativistic_brane_operation_counter_scalar + 1);
                    electroweak_boson_queue_container.offer(quantum_singularity_division_target_scalar);
                }
            }

            int[] stellar_flux_next_state_array = schwarzschild_metric_tensor_dynamic_programming_table.clone();
            for (java.util.Map.Entry<Integer, Integer> quantum_entanglement_map_entry : planck_length_spatial_transition_map.entrySet()) {
                int event_horizon_value_coordinate = quantum_entanglement_map_entry.getKey();
                int relativistic_brane_operation_counter_scalar = quantum_entanglement_map_entry.getValue();

                if (event_horizon_value_coordinate > sum) {
                    continue;
                }

                if (event_horizon_value_coordinate == 0) {
                    continue;
                }
                for (int stellar_flux_sum_coordinate = sum; stellar_flux_sum_coordinate >= event_horizon_value_coordinate; stellar_flux_sum_coordinate--) {
                    if (schwarzschild_metric_tensor_dynamic_programming_table[stellar_flux_sum_coordinate - event_horizon_value_coordinate] != (int) 1e9) {
                        stellar_flux_next_state_array[stellar_flux_sum_coordinate] = Math.min(stellar_flux_next_state_array[stellar_flux_sum_coordinate], schwarzschild_metric_tensor_dynamic_programming_table[stellar_flux_sum_coordinate - event_horizon_value_coordinate] + relativistic_brane_operation_counter_scalar);
                    }
                }
            }
            schwarzschild_metric_tensor_dynamic_programming_table = stellar_flux_next_state_array;

        }

        return (schwarzschild_metric_tensor_dynamic_programming_table[sum] == (int) 1e9) ? -1 : schwarzschild_metric_tensor_dynamic_programming_table[sum];
    }
}