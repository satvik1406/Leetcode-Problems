# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def traverse(self, root, res):
        if root == None: return
        
        self.traverse(root.left, res)
        self.traverse(root.right, res)
        res.append(root.val)

    def postorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        res = []
        self.traverse(root, res)
        return res
        