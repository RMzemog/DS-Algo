# Given an array of integers nums sorted in ascending order, find the starting and ending position of a given target value.

# Your algorithm's runtime complexity must be in the order of O(log n).

# If the target is not found in the array, return [-1, -1].

# Example 1:

# Input: nums = [5,7,7,8,8,10], target = 8
# Output: [3,4]
# Example 2:

# Input: nums = [5,7,7,8,8,10], target = 6
# Output: [-1,-1]
 

# Constraints:

# 0 <= nums.length <= 10^5
# -10^9 <= nums[i] <= 10^9
# nums is a non decreasing array.
# -10^9 <= target <= 10^9




done = []
def t1(nums, target):
    start = 0 
    index = -1
    end = len(nums)-1
    while (start <= end):
        mid = (start+end)//2
        if nums[mid] >= target:
            end = mid - 1
        else:
            start  = mid + 1
        if nums[mid] == target:
            index = mid
    return index
def t2(nums, target):
    start = 0 
    index = -1
    end = len(nums)-1
    while (start <= end):
        mid = (start+end)//2
        if nums[mid] <= target:
            start = mid + 1
        else:
            end  = mid - 1
        if nums[mid] == target:
            index = mid
    
    return index
def ans(nums, target):    
    f = t1(nums, target)
    s = t2(nums, target)
    done.append(f)
    done.append(s)
    return done
# def ans(arr, t):
#     start = 0
#     index = -1
#     end = len(arr) - 1
#     while start <= end :
#         mid = (start + end)// 2
#         if t >= arr[mid]:
#             start = mid + 1
#         else :
#             end = mid - 1
#         if arr[mid] == t :
#             print(arr[:mid])
#             print(mid, index)
#             index = mid
#     return index
               
print(ans([1,2,2,2,3,4,5,6,7,8,9], 2))



















