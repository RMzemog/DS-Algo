def sliding_window_brute_force(arr, k):  
    max_sum = 0
    for i in range(len(arr) - k + 1):
        current_sum = 0
        for j in range(k):
            current_sum += arr[i+j]
        max_sum = max(current_sum, max_sum)
    return max_sum



def sliding_window(arr,k):
    max_sum = 0
    window = sum(arr[:k])
    for i in range(len(arr)-k):
        window = window-arr[i]+arr[i+k]
        max_sum = max(window, max_sum)
    return max_sum

# max of each subarray
#[1, 2, 3, 1, 4, 5, 2, 3, 6]
# Input: arr[] = {8, 5, 10, 7, 9, 4, 15, 12, 90, 13}, K = 4
#Output: 10 10 10 15 15 90 90     
def sliding_window2(arr,k):
    max_sum = []
    window = arr[:k]
    for i in range(len(arr)-k):
        max_sum.append(max(window))
        window.append(arr[i+k])
        window.pop(0)
    return max_sum

def sliding_window3(arr,k):
    median = []
    window = arr[:K]
    for i in range(len(arr)-k):
        median.append(window[len(window//2)])
        window.append(arr[i+k])
        window.pop(0)
    return median
    
print(sliding_window3([8, 5, 10, 7, 9, 4, 15, 12, 90, 13],4))




