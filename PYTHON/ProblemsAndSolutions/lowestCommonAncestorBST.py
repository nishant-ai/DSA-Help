# Sample:
# Input: root = [6,2,8,0,4,7,9,null,null,3,5], p = 2, q = 8
# Output: 6
# Explanation: The LCA of nodes 2 and 8 is 6.

def lowestCommonAncestor(root, p, q):
    if root == None:
        return None
    if root == p or root == q:
        return root
    l = lowestCommonAncestor(root.left,p,q)
    r = lowestCommonAncestor(root.right,p,q)
    if l == None:
        return r
    if r == None:
        return l
    return root