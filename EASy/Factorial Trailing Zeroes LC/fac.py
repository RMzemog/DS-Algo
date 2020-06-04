#           TRASH            ########

#import math
# def fac(n):
#    fact = math.factorial(n)
#    print(fact)
#    final = 0
#    n = 0
#    while n < len(str(fact)):
#        if fact % 10 == 0:
#            f = fact % 10
#            final += 1
#        n += 1
#    return final

import math
def fact(n):
    fac = math.factorial(n)
    final = 0
    string = list(str(fac))
    string.reverse()
    print(string)
    for i in string:
        if i == '0':
            final += 1
        else:
            break
    return final

                                   # MAIN CODE #
def f(n):
    count = 0
    i = 5
    while (n/i>=1):
        count += int(n/i)
        i *= 5
    return int(count)



print(f(5))
print(fact(5))