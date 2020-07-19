# Given an array of n positive integers and a positive integer s, find the minimal length of a contiguous subarray of which the sum ≥ s. If there isn't one, return 0 instead.

# Example: 

# Input: s = 7, nums = [2,3,1,2,4,3]
# Output: 2
# Explanation: the subarray [4,3] has the minimal length under the problem constraint.
# Follow up:
# If you have figured out the O(n) solution, try coding another solution of which the time complexity is O(n log n). 
import sys
def sub(nums, s):
# current_sum will be a[0]
# use a for loop to iterate over the array
# if the number is greater than s current sum will be equal to 
# (current sum = current sum - a[starting of current sum] + a[next_element of the array ie element after current_sum last element ]])
# if current sum is equal to s  count number
    # current_sum = nums[0]
    # d = 1
    # start = 0
    # m = 2010202020
    # for i in range(1, len(nums)):
    #     if current_sum >= s :
    #         m = min(m, d)
    #         d = 1
    #         current_sum = current_sum - nums[start]
    #         start += 1
    #     if current_sum < s:
    #          current_sum += nums[i]
    #          d += 1
    # return m 
    result = sys.maxsize
    left = 0
    val_sum = 0
    for i in range(len(nums)):
        val_sum += nums[i]
        while val_sum >= s:
            result = min(result, i+1-left)
            val_sum -= nums[left]
            left += 1
    return result
print(sub([2,3,2,2,4,3], 7))           