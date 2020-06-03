#Given a sorted array and a target value, return the index
# if the target is found. 
# If not, return the index where it would be
#  if it were inserted in order.
def fin(nums , target): 
    if target in nums:
        return nums.index(target)
    elif target > nums[-1]:
        return len(nums)
    elif target not in nums:
        for i in range(len(nums)):
            if nums[i] > target:
                return i

print(fin([1,2,3,4], 2))
print(fin([1,3,4], 2))
print(fin([1,2,3,4],0))
print(fin([-1, 2 ,4 ,5 ,5], 0))
print(fin([1,2,3,4,5], 8))