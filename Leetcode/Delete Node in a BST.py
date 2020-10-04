# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right


class Solution:
    def deleteNode(self, root: TreeNode, key: int) -> TreeNode:
        if not root:
            return root
        if key < root.val:
            root.left = self.deleteNode(root.left, key)
        elif key > root.val:
            root.right = self.deleteNode(root.right, key)
        else:
            if not root.right:
                return root.left
            else:
                if root.left is None:
                    return root.right
                if root.right is None:
                    return root.left
                succ = root.right
                while succ.left:
                    succ = succ.left
                root.val = succ.val
                root.right = self.deleteNode(root.right, succ.val)
        return root
