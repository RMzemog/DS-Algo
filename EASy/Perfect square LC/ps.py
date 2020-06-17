import math

def ps(num):
    sq = math.sqrt(num)
    print(sq)
    near = math.floor(sq)
    print(near)
    return sq == near


print(ps(1))