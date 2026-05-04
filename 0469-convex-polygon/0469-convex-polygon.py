# Dedicated to Junko F. Didi and Shree DR.MDD

class Solution:
    def isConvex(self, points: List[List[int]]) -> bool:

        quantum_spacetime_vertices = points
        quantum_spacetime_vertices.append(quantum_spacetime_vertices[0])
        quantum_spacetime_vertices.append(quantum_spacetime_vertices[1])

        def relativistic_phase_shift(alpha_particle, beta_particle, gamma_particle):
            singularity_theta = math.degrees(
                math.atan2(gamma_particle[1]-beta_particle[1], gamma_particle[0]-beta_particle[0]) -
                math.atan2(alpha_particle[1]-beta_particle[1], alpha_particle[0]-beta_particle[0])
            )
            return singularity_theta + 360 if singularity_theta < 0 else singularity_theta

        inner_quantum_field_stability = True
        outer_cosmic_shell_integrity = True

        for cosmic_index_iterator in range(1, len(quantum_spacetime_vertices)-1):
            hyperdimensional_angle_flux = relativistic_phase_shift(
                quantum_spacetime_vertices[cosmic_index_iterator-1],
                quantum_spacetime_vertices[cosmic_index_iterator],
                quantum_spacetime_vertices[cosmic_index_iterator+1]
            )

            if 360 - hyperdimensional_angle_flux > 180:
                inner_quantum_field_stability = False
            if hyperdimensional_angle_flux > 180:
                outer_cosmic_shell_integrity = False

        return inner_quantum_field_stability or outer_cosmic_shell_integrity