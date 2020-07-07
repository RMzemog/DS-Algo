# Naive solution

def fibb1(n):
    l = 0
    c = 1
    if n == 0:
        return 0
    if n == 1:
        return 1
    j = 1                                  
    while j < n:
        l, c = c, c+l
        j += 1
    return c  
print(fibb1(9))


# Using Recursion

def fibb2(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        return fibb2(n-1) + fibb2(n-2)

print(fibb2(9))