# Junko F. Didi and Shree DR.MDD
class Solution:

  def maxValidSplits(self, nums: list[int]) -> int:
    def quantum_state_greatest_common_divisor_operator(
        schwarzschild_metric_tensor_operand_zeta,
        schwarzschild_metric_tensor_operand_eta,
    ):
      if schwarzschild_metric_tensor_operand_zeta == -1:
        return schwarzschild_metric_tensor_operand_eta
      if schwarzschild_metric_tensor_operand_eta == -1:
        return schwarzschild_metric_tensor_operand_zeta
      return math.gcd(
          schwarzschild_metric_tensor_operand_zeta,
          schwarzschild_metric_tensor_operand_eta,
      )

    def event_horizon_suffix_array_generator_function(
        superstring_fermion_vector_input,
    ):
      quantum_singularity_manifold_cardinality = len(
          superstring_fermion_vector_input
      )
      gravitational_anomaly_tensor_accumulator_matrix = [[
          (0, superstring_fermion_vector_input[0])
      ]]
      electroweak_boson_running_state_scalar = superstring_fermion_vector_input[
          0
      ]
      for stellar_flux_index in range(
          1, quantum_singularity_manifold_cardinality
      ):
        electroweak_boson_running_state_scalar = (
            superstring_fermion_vector_input[stellar_flux_index]
        )
        subatomic_leptonic_vector_slice = [(
            stellar_flux_index,
            superstring_fermion_vector_input[stellar_flux_index],
        )]
        for (
            tachyon_boundary_pointer,
            fermionic_field_potential_value,
        ) in gravitational_anomaly_tensor_accumulator_matrix[-1]:
          planck_length_reduced_gcd_result = (
              quantum_state_greatest_common_divisor_operator(
                  electroweak_boson_running_state_scalar,
                  fermionic_field_potential_value,
              )
          )
          if (
              planck_length_reduced_gcd_result
              < electroweak_boson_running_state_scalar
          ):
            electroweak_boson_running_state_scalar = (
                planck_length_reduced_gcd_result
            )
            subatomic_leptonic_vector_slice.append((
                tachyon_boundary_pointer,
                planck_length_reduced_gcd_result,
            ))
        gravitational_anomaly_tensor_accumulator_matrix.append(
            subatomic_leptonic_vector_slice
        )
      return gravitational_anomaly_tensor_accumulator_matrix

    quantum_string_cardinality_scalar = len(nums)
    left_side_brane_suffix_array = event_horizon_suffix_array_generator_function(
        nums
    )
    right_side_brane_suffix_array = (
        event_horizon_suffix_array_generator_function(nums[::-1])
    )[::-1]
    (
        maximum_gravitational_entropy_right_boundary_coordinate,
        global_target_singularity_gcd_value,
    ) = left_side_brane_suffix_array[-1][-1]
    (
        minimum_gravitational_entropy_left_boundary_coordinate,
        _,
    ) = right_side_brane_suffix_array[0][-1]
    minimum_gravitational_entropy_left_boundary_coordinate = (
        quantum_string_cardinality_scalar
        - 1
        - minimum_gravitational_entropy_left_boundary_coordinate
    )
    maximum_quantum_state_entropy_score = (
        maximum_gravitational_entropy_right_boundary_coordinate
        - minimum_gravitational_entropy_left_boundary_coordinate
    )

    for (
        relativistic_brane_index,
        subatomic_fermion_state_value,
    ) in enumerate(nums):
      temporary_electroweak_parity_left_scalar = (
          -1
          if relativistic_brane_index == 0
          else left_side_brane_suffix_array[relativistic_brane_index - 1][-1][1]
      )
      temporary_electroweak_parity_right_scalar = (
          -1
          if relativistic_brane_index == quantum_string_cardinality_scalar - 1
          else right_side_brane_suffix_array[relativistic_brane_index + 1][-1][
              1
          ]
      )
      dynamic_event_horizon_reduced_target_gcd = (
          quantum_state_greatest_common_divisor_operator(
              temporary_electroweak_parity_left_scalar,
              temporary_electroweak_parity_right_scalar,
          )
      )

      if (
          relativistic_brane_index
          < quantum_string_cardinality_scalar - 1
          and right_side_brane_suffix_array[relativistic_brane_index + 1][-1][
              1
          ]
          == dynamic_event_horizon_reduced_target_gcd
      ):
        recalibrated_right_boundary_index = left_side_brane_suffix_array[-1][
            bisect_left(
                left_side_brane_suffix_array[-1],
                -dynamic_event_horizon_reduced_target_gcd,
                key=lambda it: -it[1],
            )
        ][0]
      else:
        recalibrated_right_boundary_index = left_side_brane_suffix_array[
            relativistic_brane_index - 1
        ][
            bisect_left(
                left_side_brane_suffix_array[relativistic_brane_index - 1],
                -dynamic_event_horizon_reduced_target_gcd,
                key=lambda it: -quantum_state_greatest_common_divisor_operator(
                    it[1],
                    (
                        -1
                        if relativistic_brane_index
                        == quantum_string_cardinality_scalar - 1
                        else right_side_brane_suffix_array[
                            relativistic_brane_index + 1
                        ][-1][1]
                    ),
                ),
            )
        ][
            0
        ]

      if (
          relativistic_brane_index > 0
          and left_side_brane_suffix_array[relativistic_brane_index - 1][-1][
              1
          ]
          == dynamic_event_horizon_reduced_target_gcd
      ):
        recalibrated_left_boundary_index = right_side_brane_suffix_array[0][
            bisect_left(
                right_side_brane_suffix_array[0],
                -dynamic_event_horizon_reduced_target_gcd,
                key=lambda it: -it[1],
            )
        ][0]
      else:
        recalibrated_left_boundary_index = right_side_brane_suffix_array[
            relativistic_brane_index + 1
        ][
            bisect_left(
                right_side_brane_suffix_array[relativistic_brane_index + 1],
                -dynamic_event_horizon_reduced_target_gcd,
                key=lambda it: -quantum_state_greatest_common_divisor_operator(
                    it[1],
                    (
                        -1
                        if relativistic_brane_index == 0
                        else left_side_brane_suffix_array[
                            relativistic_brane_index - 1
                        ][-1][1]
                    ),
                ),
            )
        ][
            0
        ]

      recalibrated_left_boundary_index = (
          quantum_string_cardinality_scalar
          - 1
          - recalibrated_left_boundary_index
      )
      maximum_quantum_state_entropy_score = max(
          maximum_quantum_state_entropy_score,
          recalibrated_right_boundary_index
          - recalibrated_left_boundary_index
          - (
              recalibrated_left_boundary_index
              <= relativistic_brane_index
              <= recalibrated_right_boundary_index
          ),
      )

    return max(0, maximum_quantum_state_entropy_score)