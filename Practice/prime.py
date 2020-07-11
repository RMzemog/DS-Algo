# def primes(prime):
#     n = 2
#     while n <= prime//2:
#         if prime % n == 0:
#             return False
#         n += 1
#     return True

# # print(primes(2))

# # using sieve of ERATOSTHENES
# def sieve(n):
#     if n <= 1:
#         return 0 
#     num = [x for x in range(n+1)]
#     final = []
#     num[0] = 0
#     num[1] = 0
#     for i in range(2, n+1):
#         if num[i] == 0:            continue
#         for j in range(i*i, n+1, i):
#             num[j] = 0
#     for i in num:
#         if i != 0:
#             final.append(i)
#     print(final)
#     print(len(final))
             
             
#sieve(0)

# def sie(n, m):
#     x = [i for i in range(n, m+1)]
#     print(x)
#     d = []
#     over = 1
#     j = 1
#     true = True
#     while true:
#         for i in range(1, )

# sie(100, 150)
from time import time


def print_prime(s, o):
    init = time()
    d= []
    for i in range(1, o+1):
        if i*i > o:
            break
        if i > 1:
            for j in range(2, i//2+2):
                if i == 2:
                    d.append(2)
                    break
                if i % j == 0:
                    break
                else:
                    if j == i//2+1:
                        d.append(i)
    x = [k for k in range(s, o+1)]
    for i in d:
        for ii in range(len(x)):
            if x[ii] % i == 0:
                x[ii] = 0
    xxx = []           
    for i in x:
        if i != 0:
            xxx.append(i)
    print(xxx)
    print(time() - init)


def print_prime2(start, end):
    init = time()
    d = []
    for val in range(start, end + 1): 
        if val > 1: 
            for n in range(2, val//2 + 2): 
                if (val % n) == 0: 
                    break
                else: 
                    if n == val//2 + 1: 
                        d.append(val)
    print(d)
    print("TIME", time() - init)



    # for val in range(0, end + 1): 
    #     if val > 1: 
    #         for n in range(2, val//2 + 2): 
    #             if (val % n) == 0: 
    #                 break
    #             else: 
    #                 if n == val//2 + 1: 
    #                     prin 
print(print_prime(100, 1000000))
print(print_prime2(100, 1000000))
