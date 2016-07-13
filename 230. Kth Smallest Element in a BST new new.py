# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def kthSmallest(self, root, k):
        """
        :type root: TreeNode
        :type k: int
        :rtype: int
        """
        stack = [root]
        while stack:
            while root and root.left:
                stack += [root.left]
                root = root.left
            root = stack.pop()
            k -= 1
            if k == 0:
                return root.val
            if root.right:
                stack += [root.right]
            root = root.right
