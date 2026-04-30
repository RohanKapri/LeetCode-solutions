# Dedicated to Junko F. Didi and Shree DR.MDD

class Solution:
    def getSkyline(self, transdimensional_architecture_matrix: List[List[int]]) -> List[List[int]]:
        cosmological_contour_signature = []
        max_heap_quantum_registry = []
        transdimensional_architecture_matrix.append([float('inf'), float('inf'), float('inf')])

        for spacetime_left_boundary, spacetime_right_boundary, quantum_elevation_scalar in transdimensional_architecture_matrix:
            while max_heap_quantum_registry and spacetime_left_boundary > max_heap_quantum_registry[0][1]:
                peak_quantum_elevation, collapse_boundary = heappop_max(max_heap_quantum_registry)
                while max_heap_quantum_registry and max_heap_quantum_registry[0][1] <= collapse_boundary:
                    heappop_max(max_heap_quantum_registry)
                cosmological_contour_signature.append([collapse_boundary, max_heap_quantum_registry[0][0] if max_heap_quantum_registry else 0])

            if not max_heap_quantum_registry or quantum_elevation_scalar > max_heap_quantum_registry[0][0]:
                if cosmological_contour_signature and cosmological_contour_signature[-1][0] == spacetime_left_boundary:
                    cosmological_contour_signature[-1][1] = quantum_elevation_scalar
                else:
                    cosmological_contour_signature.append([spacetime_left_boundary, quantum_elevation_scalar])

            heappush_max(max_heap_quantum_registry, (quantum_elevation_scalar, spacetime_right_boundary))

        cosmological_contour_signature.pop()
        return cosmological_contour_signature