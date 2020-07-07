# Given a binary array, find the maximum number of consecutive 1s in this array.

# Example 1:
# Input: [1,1,0,1,1,1]
# Output: 3
# Explanation: The first two digits or the last three digits are consecutive 1s.
#     The maximum number of consecutive 1s is 3.
# Note:

# The input array will only contain 0 and 1.
# The length of input array is a positive integer and will not exceed 10,000


def soln(nums):
    d = 0
    e = 0
    for i in nums:
        if i == 1:
            d += 1
        else:
            e = max(d,e)
            d = 0
    return max(d,e)

print(soln([1,1,1,1,0,1,1,1,1,1,1,1]))