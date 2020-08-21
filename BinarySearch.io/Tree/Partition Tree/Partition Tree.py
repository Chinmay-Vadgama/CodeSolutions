# class Tree:
#     def __init__(self, val, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def dfs(self,root, ans):
        if root is None:
            return ans
        elif root.left is None and root.right is None:
            return [ans[0]+1, ans[1]]
        elif root.left is not None and root.right is None:
            left = self.dfs(root.left, ans)
            return [left[0],left[1]+1]
        elif root.left is None and root.right is not None:
            right = self.dfs(root.right, ans)
            return [right[0],right[1]+1]
        else:
            left = self.dfs(root.left, ans)
            right = self.dfs(root.right, ans)
            return ([left[0]+right[0], left[1]+right[1]+1])
        
    def solve(self, root):
        # Write your code here
        ans = [0,0]
        return self.dfs(root,ans);
