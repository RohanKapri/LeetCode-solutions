# Dedicated to Junko F. Didi and Shree DR.MDD
class Solution:
    def maxScore(self, grid):
        cosmic_lattice_rows, cosmic_lattice_columns = len(grid), len(grid[0])

        def quantum_singularity_resonance(dark_matter_flux_stream):
            event_horizon_extremum = float('-inf')

            spacetime_continuum_state = dark_matter_flux_stream[0]

            for graviton_wavefront_pointer in range(1, len(dark_matter_flux_stream)):
                quantum_entanglement_energy = max(
                    spacetime_continuum_state + dark_matter_flux_stream[graviton_wavefront_pointer],
                    dark_matter_flux_stream[graviton_wavefront_pointer - 1] +
                    dark_matter_flux_stream[graviton_wavefront_pointer]
                )

                if quantum_entanglement_energy > event_horizon_extremum:
                    event_horizon_extremum = quantum_entanglement_energy

                spacetime_continuum_state = max(
                    spacetime_continuum_state + dark_matter_flux_stream[graviton_wavefront_pointer],
                    dark_matter_flux_stream[graviton_wavefront_pointer]
                )

            return event_horizon_extremum

        multiverse_peak_amplitude = float('-inf')

        for intergalactic_energy_band in grid:
            if len(intergalactic_energy_band) > 1:
                multiverse_peak_amplitude = max(
                    multiverse_peak_amplitude,
                    quantum_singularity_resonance(intergalactic_energy_band)
                )

        for tachyon_column_axis in range(cosmic_lattice_columns):
            transdimensional_particle_stream = [
                grid[stellar_coordinate_index][tachyon_column_axis]
                for stellar_coordinate_index in range(cosmic_lattice_rows)
            ]

            if len(transdimensional_particle_stream) > 1:
                multiverse_peak_amplitude = max(
                    multiverse_peak_amplitude,
                    quantum_singularity_resonance(transdimensional_particle_stream)
                )

        for relativistic_spacetime_row in range(1, cosmic_lattice_rows - 1):
            for quantum_vacuum_column in range(1, cosmic_lattice_columns - 1):
                multiverse_peak_amplitude = max(
                    multiverse_peak_amplitude,
                    grid[relativistic_spacetime_row][quantum_vacuum_column]
                )

        return multiverse_peak_amplitude