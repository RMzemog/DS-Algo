# Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.

# Example 1:

# Input: [3,0,1]
# Output: 2
# Example 2:

# Input: [9,6,4,2,3,5,7,0,1]
# Output: 8
# Note:
# Your algorithm should run in linear runtime complexity. Could you implement it using only constant extra space complexity?    


# WRONG CODE
# def mis(n):
#     n.sort()
#     j = 1
#     print(n)
#     while j < len(n):
#         if n[j-1] != n[j] - 1:
#             print('n')
#             return n[j-1] + 1
#         j += 1

# print(mis([1,2,3,4,5,6,9,8,7]))



def soln(n):
    return [i for i in range(0, len(n)+1) if i not in n ][0]
print(soln([0,1,2,3,4,5,7,8]))