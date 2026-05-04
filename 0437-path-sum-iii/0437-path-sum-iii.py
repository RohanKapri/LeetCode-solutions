from collections import defaultdict

class Solution:
    def pathSum(self, root: TreeNode, targetSum: int) -> int:
        def dfs(node, current_sum):
            if not node:
                return 0
            current_sum += node.val
            result = path_sum_count.get(current_sum - targetSum, 0)
            path_sum_count[current_sum] += 1
            result += dfs(node.left, current_sum)
            result += dfs(node.right, current_sum)
            path_sum_count[current_sum] -= 1
            return result
        
        path_sum_count = defaultdict(int)
        path_sum_count[0] = 1
        return dfs(root, 0)
