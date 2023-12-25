# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def findTarget(self, root: Optional[TreeNode], k: int) -> bool:
        if not (root.left and root.right):
            return False
        
        if root.val + root.left.val == k:
            return True
        elif root.val + root.right.val == k:
            return True
        
        # 用一個hash table存 k-val，如果 k-val 存在於BST中，就return True
        self.table = []
        def traverseBST(root, target):
            if not root:
                return
            if target - root.val in self.table:
                return True
            self.table.append(root.val)
            return traverseBST(root.left, k) or traverseBST(root.right, k)
        return traverseBST(root, k)
        