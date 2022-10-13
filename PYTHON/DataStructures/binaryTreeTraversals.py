def inorderTraversal(root):
    res = []
    if root == None:
        return 
    if root.left:
        res += inorderTraversal(root.left)
    res.append(root.val)
    if root.right:
        res += inorderTraversal(root.right)
    return res

def preorderTraversal(root):
    res = []
    if root == None:
        return 
    res.append(root.val)
    if root.left:
        res += preorderTraversal(root.left)
    if root.right:
        res += preorderTraversal(root.right)
    return res

def postorderTraversal(root):
    res = []
    if root == None:
        return 
    if root.left:
        res += postorderTraversal(root.left)
    if root.right:
        res += postorderTraversal(root.right)
    res.append(root.val)
    return res