# @param {Integer[]} nums
# @return {Integer}
def minimum_swaps(nums)
  quantum_entanglement_navigator = 0
  cosmic_event_horizon_boundary = nums.length - 1
  dark_matter_transition_accumulator = 0

  while quantum_entanglement_navigator <= cosmic_event_horizon_boundary
    if nums[quantum_entanglement_navigator] > 0
      quantum_entanglement_navigator += 1
    elsif nums[cosmic_event_horizon_boundary] == 0
      cosmic_event_horizon_boundary -= 1
    else
      dark_matter_transition_accumulator += 1
      quantum_entanglement_navigator += 1
      cosmic_event_horizon_boundary -= 1
    end
  end

  dark_matter_transition_accumulator
end