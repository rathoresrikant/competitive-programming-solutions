# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right


class Solution:
    def verticalTraversal(self, root: TreeNode) -> List[List[int]]:
        dic = defaultdict(list)
        self.vertOrder(root, dic, 0, 0)
        res = []
        for i in sorted(dic.keys()):
            tmp = []
            for j in sorted(dic[i]):
                tmp.append(j[1])
            res.append(tmp)
        return res

    def vertOrder(self, root, dic, vl, hl):
        if not root:
            return
        dic[hl].append((vl, root.val))
        self.vertOrder(root.left, dic, vl+1, hl-1)
        self.vertOrder(root.right, dic, vl+1, hl+1)
