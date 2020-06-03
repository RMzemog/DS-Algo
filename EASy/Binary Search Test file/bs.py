def binary_search(arr, target):
    start = 0
    end = len(arr) - 1
    while start <= end:
        mid = (start + end)//2
        #if target == arr[mid]:
        #    print(arr[mid])
        #    return 'Found'
        if target > arr[mid]:
            print('smaller', arr[mid])
            start = mid + 1
        elif target < arr[mid]:
            print("Greater", arr[mid])
            end = mid - 1
        else:
            if mid - 1 < 0:
                return mid
            if arr[mid -1 ] != target:
                return mid 
            end = mid -1
            
    return "Not Found"

#print(binary_search([2,3,3,3,4,5,6], 3))


def test(arr, target):
    start = 0
    found = 0
    end = len(arr)-1
    while (start <= end):
        mid = (start+end)//2
        if arr[mid] >= target:
            end = mid-1
        else:
            start = mid +1
        if arr[mid] == target:
            found += mid
    print(found)
def test2(arr, target):
    start = 0
    end = len(arr)-1
    foun = 0
    while start <= end:
        mid = (start+end)//2
        if arr[mid] <= target:
            start = mid +  1
        else:
            end = mid - 1
        if arr[mid] == target:
            foun = mid
    print(foun)
test([1,2,4,5,6,6,6,6,7], 6)
test2([1,2,4,5,6,6,6,6,7], 6)
