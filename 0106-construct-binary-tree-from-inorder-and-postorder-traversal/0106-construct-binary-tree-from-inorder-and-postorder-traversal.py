class Solution:
    def buildTree(self, inorder, postorder):
        self.postIdx, mp = len(postorder)-1, {val: idx for idx, val in enumerate(inorder)}
        def build(inStart, inEnd):
            if inStart > inEnd: return None
            root = TreeNode(postorder[self.postIdx])
            self.postIdx -= 1
            root.right = build(mp[root.val]+1, inEnd)
            root.left  = build(inStart, mp[root.val]-1)
            return root        
        return build(0, len(inorder)-1)