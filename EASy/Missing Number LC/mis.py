def mis(n):
    n.sort()
    j = 1
    print(n)
    while j < len(n):
        if n[j-1] != n[j] - 1:
            print('n')
            return n[j-1] + 1
        j += 1

print(mis([1,2,3,4,5,6,9,8,7]))