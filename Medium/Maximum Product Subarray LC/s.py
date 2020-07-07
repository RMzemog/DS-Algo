# Given an integer array nums, find the contiguous subarray within an array (containing at least one number) which has the largest product.

# Example 1:

# Input: [2,3,-2,4]
# Output: 6
# Explanation: [2,3] has the largest product 6.
# Example 2:

# Input: [-2,0,-1]
# Output: 0
# Explanation: The result cannot be 2, because [-2,-1] is not a subarray.


def med(arr):
    current_max = arr[0]
    final_max= arr[0]
    current_min = arr[0]
    for i in range(1, len(arr)):
        temp = current_max
        current_max = max(max(current_max * arr[i], current_min * arr[i]), arr[i])
        print("MAX",current_max)
        current_min = min(min(temp * arr[i], current_min*arr[i]),arr[i])
        print('MIN', current_min)
        if current_max > final_max:
            print('FINAL', final_max)
            final_max = current_max
    return final_max
print(med([2, -3, 4, -2, -1]))