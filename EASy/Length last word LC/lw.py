def lw(wo):
    #spl = wo.split(" ")
    spl = wo.split()
    print(spl)
    if spl:
        return len(spl[-1])
    else:
        return 0


print(lw('Hello World'))
print(lw('dh'))
print(lw('s '))
print(lw(''))