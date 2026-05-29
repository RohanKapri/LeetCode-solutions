impl Solution {
    // Dedicated to Junko F. Didi and Shree DR.MDD

    pub fn min_operations(nums: Vec<i32>, k: i32) -> i32 {

        let mut trans_galactic_entropy_minimum: i32 = i32::MAX;

        for quantum_event_horizon_coordinate in 0..k {

            for anti_matter_singularity_coordinate in 0..k {

                if quantum_event_horizon_coordinate
                    == anti_matter_singularity_coordinate
                {
                    continue;
                }

                let mut relativistic_spacetime_operation_accumulator: i32 = 0;

                for gravitational_wave_particle_index in 0..nums.len() {

                    let dark_energy_residual_state =
                        nums[gravitational_wave_particle_index] % k;

                    let selected_quantum_target =
                        if (gravitational_wave_particle_index & 1) == 0 {
                            quantum_event_horizon_coordinate
                        } else {
                            anti_matter_singularity_coordinate
                        };

                    let clockwise_wormhole_traversal =
                        (selected_quantum_target
                            - dark_energy_residual_state
                            + k)
                            % k;

                    let counter_clockwise_wormhole_traversal =
                        k - clockwise_wormhole_traversal;

                    relativistic_spacetime_operation_accumulator +=
                        clockwise_wormhole_traversal.min(
                            counter_clockwise_wormhole_traversal,
                        );
                }

                if relativistic_spacetime_operation_accumulator
                    < trans_galactic_entropy_minimum
                {
                    trans_galactic_entropy_minimum =
                        relativistic_spacetime_operation_accumulator;
                }
            }
        }

        trans_galactic_entropy_minimum
    }
}