def add(arr, target):
    a = 0
    b = len(arr)-1
    while a <= b:
        sums = arr[a] + arr[b]
        if sums > target:
            b -= 1
        elif sums < target:
            a += 1
        else:
            return [a+1, b+1]


print(add([2,7,11,15], 9))
print(add([1,2,3,5,6], 4))
print(add([-1,2,3,5,6], 4))