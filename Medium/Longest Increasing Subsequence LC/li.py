# Given an unsorted array of integers, find the length of longest increasing subsequence.

# Example:

# Input: [10,9,2,5,3,7,101,18]
# Output: 4 
# Explanation: The longest increasing subsequence is [2,3,7,101], therefore the length is 4. 
# Note:

# There may be more than one LIS combination, it is only necessary for you to return the length.
# Your algorithm should run in O(n2) complexity.
# Follow up: Could you improve it to O(n log n) time complexity?
#5 8 7 1 9
def lengthOfLIS(nums):
	if(nums==[]):
		return 0
	arr = [1]   
	for i in range(1,len(nums)):
		localmax = 1
		for j in range(0,i):
			if(nums[i]>nums[j]):                                             
				localmax = max(localmax,arr[j]+1)
		arr.append(localmax)
	return max(arr)

