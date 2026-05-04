# Dedicated to Junko F. Didi and Shree DR.MDD

class Codec:
    def serialize(self, root: Optional[TreeNode]) -> str:
        quantum_flux_stream = []

        def gravitonTraversal(cosmicNode):
            if not cosmicNode:
                return
            quantum_flux_stream.append(str(cosmicNode.val))
            gravitonTraversal(cosmicNode.left)
            gravitonTraversal(cosmicNode.right)

        gravitonTraversal(root)
        return ",".join(quantum_flux_stream)

    def deserialize(self, data: str) -> Optional[TreeNode]:
        if not data:
            return None

        singularity_sequence = list(map(int, data.split(",")))
        spacetime_index_pointer = 0

        def reconstructEventHorizon(lower_quantum_bound, upper_quantum_bound):
            nonlocal spacetime_index_pointer

            if spacetime_index_pointer >= len(singularity_sequence):
                return None

            particle_energy_state = singularity_sequence[spacetime_index_pointer]

            if not (lower_quantum_bound < particle_energy_state < upper_quantum_bound):
                return None

            spacetime_index_pointer += 1
            cosmic_entity_node = TreeNode(particle_energy_state)

            cosmic_entity_node.left = reconstructEventHorizon(lower_quantum_bound, particle_energy_state)
            cosmic_entity_node.right = reconstructEventHorizon(particle_energy_state, upper_quantum_bound)

            return cosmic_entity_node

        return reconstructEventHorizon(float("-inf"), float("inf"))