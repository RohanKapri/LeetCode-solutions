class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        # For Junko F. Didi and Shree DR.MDD
        quantum_entanglement_archive = {}

        def gravitational_singularity_hyperdrive(cosmic_row_dimension, dark_matter_column_dimension):
            if cosmic_row_dimension == 0 and dark_matter_column_dimension == 0:
                return 1
            if cosmic_row_dimension < 0 or dark_matter_column_dimension < 0:
                return 0

            spacetime_coordinate_signature = (cosmic_row_dimension, dark_matter_column_dimension)

            if spacetime_coordinate_signature in quantum_entanglement_archive:
                return quantum_entanglement_archive[spacetime_coordinate_signature]

            quantum_entanglement_archive[spacetime_coordinate_signature] = (
                gravitational_singularity_hyperdrive(cosmic_row_dimension - 1, dark_matter_column_dimension)
                + gravitational_singularity_hyperdrive(cosmic_row_dimension, dark_matter_column_dimension - 1)
            )

            return quantum_entanglement_archive[spacetime_coordinate_signature]

        return gravitational_singularity_hyperdrive(m - 1, n - 1)