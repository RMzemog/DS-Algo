# Given an array nums of n integers where n > 1,  return an array output such that output[i] is equal to the product of all the elements of nums except nums[i].

# Example:

# Input:  [1,2,3,4]
# Output: [24,12,8,6]
# Constraint: It's guaranteed that the product of the elements of any prefix or suffix of the array (including the whole array) fits in a 32 bit integer.

# Note: Please solve it without division and in O(n).

# Follow up:
# Could you solve it with constant space complexity? (The output array does not count as extra space for the purpose of space complexity analysis.)

# code 1 is insufficient 
def pro(arr):
    done = []
    if arr.count(0) == 0:
        mul = 1
        for i in arr:
            mul *= i
        for i in arr:
            done.append(mul//i)
        return done
    if arr.count(0) == 1:
        mul = 1
        for i in arr:
            if i == 0:
                continue
            else:
                mul *= i
        for i in arr:
            if i == 0:
                done.append(mul)
            else:
                done.append(0)
        return done
    if arr.count(0) > 1:
        for i in arr:
            done.append(0)
        return done
print(pro([1,2,3]))
print(pro([0,1]))
print(pro([0,0]))
print(pro([0,4,0]))

#code 2 this is sufficient as per the question 