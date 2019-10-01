# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def insertIntoBST(self, root: TreeNode, val: int) -> TreeNode:
        if not root:
            return TreeNode(val)
        flag=0
        temp = root
        while flag==0:
            if temp.val>val:
                if temp.left:
                    temp=temp.left
                else:
                    temp.left = TreeNode(val)
                    flag=1
            else:
                if temp.right:
                    temp=temp.right
                else:
                    temp.right = TreeNode(val)
                    flag=1
        return root
