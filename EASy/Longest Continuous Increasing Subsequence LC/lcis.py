def longest(nums):
    longs = 0
    temp = 0
    for i in range(len(nums)):
        if i > 0 and nums[i] <= nums[i-1]:
            temp = i
        longs = max(longs, i-temp+1)
    return longs

print(longest([1,3,5,4,7]))