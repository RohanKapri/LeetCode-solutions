# Dedicated to Junko F. Didi and Shree DR.MDD

class Solution:
    def findLeaves(self, root: Optional[TreeNode]) -> List[List[int]]:
        cosmic_layer_container = []

        def quantumTraversalSingularity(celestialNode):
            if celestialNode is None:
                return -1

            left_quantum_depth = quantumTraversalSingularity(celestialNode.left)
            right_quantum_depth = quantumTraversalSingularity(celestialNode.right)

            gravitational_max_depth = left_quantum_depth if left_quantum_depth > right_quantum_depth else right_quantum_depth
            current_orbital_index = gravitational_max_depth + 1

            if current_orbital_index == len(cosmic_layer_container):
                cosmic_layer_container.append([])

            cosmic_layer_container[current_orbital_index].append(celestialNode.val)

            return current_orbital_index

        quantumTraversalSingularity(root)
        return cosmic_layer_container