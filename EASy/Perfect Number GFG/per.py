def per(n):
    i = 1
    d = []
    while i <= n//2:
        if n % i == 0:
            d.append(i)
            print(i)
        i += 1

    if sum(d) == n:
        return True
    else:
        return False
    
print(per(8128))