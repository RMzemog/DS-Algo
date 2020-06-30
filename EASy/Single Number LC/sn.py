# Given a non-empty array of integers, every element appears twice except for one. Find that single one.

# Note:

# Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

# Example 1:

# Input: [2,2,1]
# Output: 1
# Example 2:

# Input: [4,1,2,1,2]
# Output: 4


def sol(arr):
    d = {}
    for i in arr:
        if i in d:
          d[i] += 1
        else:
            d[i] = 1

    for key, value in d.items():
        print("%d, %d"%(key, value))
        if value == 1:
            return key


print(sol([1,1,2,2,4,5,7,7,5]))  