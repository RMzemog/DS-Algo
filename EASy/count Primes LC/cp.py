def count_prime(n):
    count = 0
    for i in range(n+1):
        if i > 1:
            for n in range(2, i):
                print(n)
                if (i %n ) == 0:
                    break
            else:    
                count += 1
    return count
print(count_prime(1000000000))