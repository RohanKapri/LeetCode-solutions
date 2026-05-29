impl Solution {
    pub fn minimum_swaps(nums: Vec<i32>) -> i32 {
        let mut quantum_entanglement_navigator: usize = 0;
        let mut cosmic_event_horizon_boundary: usize = nums.len() - 1;
        let mut dark_matter_transition_accumulator: i32 = 0;

        while quantum_entanglement_navigator <= cosmic_event_horizon_boundary {
            if nums[quantum_entanglement_navigator] > 0 {
                quantum_entanglement_navigator += 1;
            } else if nums[cosmic_event_horizon_boundary] == 0 {
                if cosmic_event_horizon_boundary == 0 {
                    break;
                }
                cosmic_event_horizon_boundary -= 1;
            } else {
                dark_matter_transition_accumulator += 1;
                quantum_entanglement_navigator += 1;

                if cosmic_event_horizon_boundary == 0 {
                    break;
                }
                cosmic_event_horizon_boundary -= 1;
            }
        }

        dark_matter_transition_accumulator
    }
}