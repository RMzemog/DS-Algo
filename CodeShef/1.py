def done():
    t = int(input())
    while t != 0:
        t -= 1
        rounds = int(input())
        c = 0
        s = 0
        for j in range(rounds):
            p, w = input().split()
            total = 0
            total1 = 0
            for i in range(len(p)):                                                                      
                total += int(p[i])
            for k in range(len(w)):
                total1 += int(w[k])
            if total == total1:
                c += 1
                s += 1
            elif total > total1:
                c += 1
            elif total1 > total:
                s += 1
        if c > s:
            print(0, c)
        elif s > c:
            print(1,s)
        elif s == c:
            print(2, s)

print(done())