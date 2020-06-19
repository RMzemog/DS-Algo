def uniq(a):
    a = list(a)
    d = -1
    for i in a:
        d += 1
        if a.count(i) == 1:
            return d
    return -1


print(uniq('aa'))