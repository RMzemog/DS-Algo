def selection(nums):
    for i in range(len(nums)-1):
        minpos = i
        for j in range(i, len(nums)):
            if nums[j] < nums[minpos]:
                minpos = j
                print(nums[minpos])
        nums[i],nums[minpos] = nums[minpos], nums[i]
    print(nums)

selection([5,2,8,6,7,3])