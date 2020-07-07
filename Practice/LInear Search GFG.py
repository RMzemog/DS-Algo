def se(arr, n, x):
    for i in range(0, n):
        if arr[i] == x:
            return i
    return -1

arr = [2, 3, 4, 10, 40]
x = 10
n = len(arr)
result = se(arr, n, x)
if (result == -1):
    print("Element not found")
else:
    print("Element is present at index:", result)



# The time complexity of above alog is O(n)
# It is rarely userd because of binary search algo and hash tables 
# allow faster searching in less time
