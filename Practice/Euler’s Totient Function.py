def gcd(a, b):
    if a == 0:
        return b
    return gcd(b % a, a)

def phi(n):
    r = 1
    for i in range(2, n):
        if gcd(i,n) == 1:
            r += 1
    return r

print(phi(10))