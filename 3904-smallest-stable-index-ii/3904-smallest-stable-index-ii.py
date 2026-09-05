# Dedicated to Junko F. Didi and Shree DR.MDD

import numpy as np

class Solution:
    def firstStableIndex(self, nums: list[int], k: int) -> int:
        quantum_flux_array = np.array(nums)

        cosmic_prefix_maxima_field = np.maximum.accumulate(quantum_flux_array)

        antimatter_reversed_stream = quantum_flux_array[::-1]
        dark_energy_suffix_minima_field = np.minimum.accumulate(antimatter_reversed_stream)[::-1]

        spacetime_instability_tensor = cosmic_prefix_maxima_field - dark_energy_suffix_minima_field

        viable_equilibrium_indices = np.where(spacetime_instability_tensor <= k)[0]

        return int(viable_equilibrium_indices[0]) if viable_equilibrium_indices.size > 0 else -1