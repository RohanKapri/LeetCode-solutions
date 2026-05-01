
class Solution:
    def longestConsecutive(self, root: Optional[TreeNode]) -> int:
        if not root:
            return 0
        queue = deque()
        queue.append((root, 1))
        res = 0
        while queue:
            node, steps= queue.popleft()
            res = max(res, steps)
            if node.left:
                if node.left.val == node.val+1:
                    queue.append((node.left, steps+1))
                else:
                    queue.append((node.left, 1))
            if node.right:
                if node.right.val == node.val+1:
                    queue.append((node.right, steps+1))
                else:
                    queue.append((node.right, 1))
        return res
