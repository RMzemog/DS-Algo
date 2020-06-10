def m0(nums):
    zeros = 0
    for i in nums:
        if i == 0:
            nums.remove(i)
            nums.append(0)
    return nums



print(m0([0,1,0,3,12]))