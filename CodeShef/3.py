def inp():
    a = int(input())
    for i in range(a):
        b = int(input())
        d = []
        e = []
        for j in range((4*b)-1):
            x,y = input().split()
            x = int(x)
            y = int(y)
            d.append(x) 
            e.append(y)
        o1 = 0
        o2 = 0
        ad = 0
        while ad < len(d):
            if d.count(d[ad]) % 2 != 0:
                o1 = d[ad]
            if e.count(e[ad]) % 2 != 0:
                o2 = e[ad]
            ad += 1
        print(o1, o2)