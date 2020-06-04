# def rotate(nums, k):
#    if k >= len(nums):
#        nums.reverse()
#        return nums      
 #   nums1 = nums[-k:]
 #   del nums[-k:]
  #  nums[:] = nums1 + nums
   # return nums

def rotate2(nums, k):
    nums[:] = nums[len(nums)-k:] + nums[:len(nums)-k]
    return nums
#print(rotate([1,2,3,4,5,6], 3))
print(rotate2([1,2,3,4,5,6], 8))
#print(rotate([1,2],3))
print(rotate2([1,2],3))

