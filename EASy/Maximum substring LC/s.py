#Given an integer array nums,
#find the contiguous subarray (containing at least one number) 
#which has the largest sum and return its sum.

#Example:

#Input: [-2,1,-3,4,-1,2,1,-5,4],
#Output: 6
#Explanation: [4,-1,2,1] has the largest sum = 6.




# def st(su):
#    done = -100000
 #   n = 0
#    don = []
#    while n < len(su):
#        for i in range(len(su)):
#            print(su[n:len(su)-i])
#            sus = sum(su[n:len(su)-i])
#            print(sus)
#            if done < sus:
#                done = sus
 #               don.append(su[n:len(su)-i])
                
        
#      n += 1
#    print(done)
#   print(don)

def sr(arr):
    if len(arr) == 1:
        return arr[0]
    max_sum = arr[0]
    current_sum = max_sum
    for i in range(1, len(arr)):
        current_sum = max(arr[i] + current_sum, arr[i])
        max_sum = max(current_sum , max_sum)
    return max_sum





print(sr([-2,1,-3,4,-1,2,1,-5,4]))
print(sr([-1,-2,-3,0,-1]))
print(sr([1]))
#print(sum([-2,1,-3,4,-1,2,1,-5,4]))
