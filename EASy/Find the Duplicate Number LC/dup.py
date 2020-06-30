def dup(arr):
    d = {}
    for i in arr:
        if i in d:
            d[i] += 1
        else:
            d[i] = 1
    for key, value in d.items():
        if value > 1:
            return key
    

print(dup([1,3,4,2,2]))