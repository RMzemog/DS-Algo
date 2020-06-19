def maxi(nums):
    if len(nums) < 3:
        nums.sort()
        return nums[-1]
    nums = list(set(nums))
    if len(nums) < 3:
        nums.sort()
        return nums[-1]
    nums.sort() 
    print(nums)
    return nums[-3]
print(maxi([1,1,2])) 