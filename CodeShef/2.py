def done():
    t = int(input())
    for i in range(t):
        N = int(input())
        chief_count = 0
        morty_count = 0
        for j in range(N):
            a, b = input().split()
            total = 0
            total1 = 0
            for i in range(len(a)):                                                                      
                total += int(a[i])
            for k in range(len(b)):
                total1 += int(b[k])                   
            if total > total1:
                chief_count += 1
            elif total1 > total:
                morty_count += 1
            elif total == total1:
                morty_count += 1
                chief_count += 1
        if chief_count > morty_count:
            print(0, chief_count)
        elif morty_count > chief_count:
            print(1, morty_count)
        elif chief_count == morty_count:
            print(2, chief_count)

print(done())