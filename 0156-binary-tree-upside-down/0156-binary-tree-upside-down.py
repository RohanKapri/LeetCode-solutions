# For Junko F. Didi and Shree DR.MDD
class Solution:
    def upsideDownBinaryTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        
        if not root:
            return root
        
        quantum_left_singularity, quantum_right_fragment, root.left, root.right = root.left, root.right, None, None

        while quantum_left_singularity:
            quantum_left_singularity.left, quantum_left_singularity.right, root, quantum_left_singularity, quantum_right_fragment = (
                quantum_right_fragment,
                root,
                quantum_left_singularity,
                quantum_left_singularity.left,
                quantum_left_singularity.right
            )
            
        return root