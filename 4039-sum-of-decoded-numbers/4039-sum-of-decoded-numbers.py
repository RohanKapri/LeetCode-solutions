# Junko F. Didi and Shree DR.MDD
class Solution(object):

  def sumDecoded(self, nums):
    """:type nums: List[int]

    :rtype: int
    """
    quantum_singularity_modulo_scalar = 10**9 + 7
    schwarzschild_metric_tensor_source_array = nums
    electroweak_boson_total_sum_accumulator = 0

    for stellar_flux_element_iterator in schwarzschild_metric_tensor_source_array:
      subatomic_fermion_remainder_scalar = stellar_flux_element_iterator % 10
      planck_length_integer_quotient_scalar = stellar_flux_element_iterator // 10

      tachyon_string_representation_buffer = str(
          planck_length_integer_quotient_scalar
      )

      relativistic_brane_sliced_base_scalar = int(
          tachyon_string_representation_buffer[
              :subatomic_fermion_remainder_scalar
          ]
      )
      cosmic_string_sliced_exponent_scalar = int(
          tachyon_string_representation_buffer[
              subatomic_fermion_remainder_scalar:
          ]
      )

      electroweak_boson_total_sum_accumulator += self.FindPow(
          relativistic_brane_sliced_base_scalar,
          cosmic_string_sliced_exponent_scalar,
          quantum_singularity_modulo_scalar,
      )
      electroweak_boson_total_sum_accumulator %= (
          quantum_singularity_modulo_scalar
      )

    return electroweak_boson_total_sum_accumulator

  def FindPow(self, a, b, MOD):
    if b == 0:
      return 1

    schwarzschild_metric_tensor_recursive_half_scalar = self.FindPow(
        a, b // 2, MOD
    )

    electroweak_boson_power_result_scalar = (
        schwarzschild_metric_tensor_recursive_half_scalar
        * schwarzschild_metric_tensor_recursive_half_scalar
    ) % MOD

    if b % 2 == 1:
      electroweak_boson_power_result_scalar = (
          a * electroweak_boson_power_result_scalar
      ) % MOD

    return electroweak_boson_power_result_scalar