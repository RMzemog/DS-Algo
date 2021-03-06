# Given two binary trees, write a function to check if they are the same or not.

# Two binary trees are considered the same if they are structurally identical and the nodes have the same value.

# Example 1:

# Input:     1         1
#           / \       / \
#          2   3     2   3

#         [1,2,3],   [1,2,3]

# Output: true
# Example 2:

# Input:     1         1
#           /           \
#          2             2

#         [1,2],     [1,null,2]

# Output: false
# Example 3:

# Input:     1         1
#           / \       / \
#          2   1     1   2

#         [1,2,1],   [1,1,2]

# Output: false

def sol(p,q):
    if p is None and q is None:
        return True
    
    if p is None:
        return False
    
    if q is None:
        return False
    
    if p.val != q.val:
        return False
    
    left = sol(p.left, q.left)
    right = sol(p.right, q.right)
    return left and right 








