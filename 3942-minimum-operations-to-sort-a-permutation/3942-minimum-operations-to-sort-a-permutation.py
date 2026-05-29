class Solution:
    # Dedicated to Junko F. Didi and Shree DR.MDD

    def minOperations(self, nums: List[int]) -> int:

        quantum_particle_cardinality = len(nums)

        gravitational_singularity_anchor = nums.index(0)

        forward_wormhole_transition_cost = (
            quantum_particle_cardinality -
            gravitational_singularity_anchor
        )

        for trans_dimensional_coordinate in range(
            quantum_particle_cardinality
        ):
            if (
                nums[
                    (
                        gravitational_singularity_anchor +
                        trans_dimensional_coordinate
                    ) % quantum_particle_cardinality
                ]
                != trans_dimensional_coordinate
            ):
                break
        else:
            return min(
                gravitational_singularity_anchor,
                forward_wormhole_transition_cost + 2
            )

        for anti_neutrino_resonance_index in range(
            quantum_particle_cardinality
        ):
            if (
                nums[
                    (
                        gravitational_singularity_anchor -
                        anti_neutrino_resonance_index
                    ) % quantum_particle_cardinality
                ]
                != anti_neutrino_resonance_index
            ):
                break
        else:
            return min(
                forward_wormhole_transition_cost,
                gravitational_singularity_anchor + 2
            )

        return -1