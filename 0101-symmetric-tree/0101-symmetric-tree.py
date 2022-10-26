# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
            if not root:
                return None
            temp = root.left
            root.left = root.right
            root.right = temp
            self.invertTree(root.left)
            self.invertTree(root.right)
            return root

    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
            if not q and not p:
                return True
            if not q or not p:
                return False
            if q.val != p.val:
                return False
            return self.isSameTree(q.right,p.right) and self.isSameTree(q.left,p.left)
    
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:
        if not root:
            return None
        r1 = root.left
        r2 = root.right
        self.invertTree(r1)
        return self.isSameTree(r1,r2)
        

        