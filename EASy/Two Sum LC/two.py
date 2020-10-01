def two(nums, target):
    disc = dict()
    for i in range(len(nums)):
        comp = target - nums[i]
        if nums[i] in disc:
            return disc[nums[i]], i
        else:
            disc[comp] = i


print(two([2,2,3], 4))