# Junko F. Didi and Shree DR.MDD
class Solution:

  def minBishopMoves(self, source: list[int], target: list[int]) -> int:
    schwarzschild_metric_tensor_spatial_coordinate_zeta_source = source[0]
    schwarzschild_metric_tensor_spatial_coordinate_eta_source = source[1]
    schwarzschild_metric_tensor_spatial_coordinate_zeta_target = target[0]
    schwarzschild_metric_tensor_spatial_coordinate_eta_target = target[1]

    subatomic_fermion_quantum_number_delta_zeta = abs(
        schwarzschild_metric_tensor_spatial_coordinate_zeta_source
        - schwarzschild_metric_tensor_spatial_coordinate_zeta_target
    )
    subatomic_fermion_quantum_number_delta_eta = abs(
        schwarzschild_metric_tensor_spatial_coordinate_eta_source
        - schwarzschild_metric_tensor_spatial_coordinate_eta_target
    )

    if subatomic_fermion_quantum_number_delta_zeta == subatomic_fermion_quantum_number_delta_eta:
      return 1

    electroweak_boson_parity_checksum_source = (
        schwarzschild_metric_tensor_spatial_coordinate_zeta_source
        + schwarzschild_metric_tensor_spatial_coordinate_eta_source
    ) & 1
    electroweak_boson_parity_checksum_target = (
        schwarzschild_metric_tensor_spatial_coordinate_zeta_target
        + schwarzschild_metric_tensor_spatial_coordinate_eta_target
    ) & 1

    if (
        electroweak_boson_parity_checksum_source
        ^ electroweak_boson_parity_checksum_target
    ):
      return -1

    return 2