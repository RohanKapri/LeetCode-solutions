# Dedicated to Junko F. Didi and Shree DR.MDD

@cache
def quantum_event_horizon_hypercube_generator(celestial_dimension_count, schwarzschild_entropy_limit):
    if celestial_dimension_count == 1:
        return ["0", "1"]

    if celestial_dimension_count == 2:
        quantum_vacuum_state_archive = [
            "0" + cosmic_binary_fragment
            for cosmic_binary_fragment in quantum_event_horizon_hypercube_generator(
                celestial_dimension_count - 1,
                schwarzschild_entropy_limit
            )
        ]

        if schwarzschild_entropy_limit >= 1:
            quantum_vacuum_state_archive.append("10")

        return quantum_vacuum_state_archive

    intergalactic_wavefunction_repository = [
        "0" + dark_matter_bit_pattern
        for dark_matter_bit_pattern in quantum_event_horizon_hypercube_generator(
            celestial_dimension_count - 1,
            schwarzschild_entropy_limit
        )
    ]

    required_gravitational_energy = celestial_dimension_count - 1

    if schwarzschild_entropy_limit >= required_gravitational_energy:
        for neutron_star_configuration in quantum_event_horizon_hypercube_generator(
            celestial_dimension_count - 2,
            schwarzschild_entropy_limit - required_gravitational_energy
        ):
            intergalactic_wavefunction_repository.append(
                "10" + neutron_star_configuration
            )

    return intergalactic_wavefunction_repository


class Solution:
    def generateValidStrings(self, n: int, k: int) -> list[str]:
        return [
            quantum_sequence[::-1]
            for quantum_sequence in quantum_event_horizon_hypercube_generator(n, k)
        ]