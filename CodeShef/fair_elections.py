t = input()
t = int(t)
for i in range(t):
    n,m = map(int, input().split())
    ni = list(map(int,input().split()))
    mi = list(map(int, input().split()))
    nsum = sum(ni)
    msum = sum(mi)
    ni.sort()
    mi = sorted(mi, reverse = True)
    if nsum > msum:
        print(0)
    else:
        count = 0
        for i in range(min(len(ni), len(mi))):
            if ni[i] < mi[i]:
                ni[i],mi[i] = mi[i],ni[i]
                count += 1
            if sum(ni) > sum(mi):
                print(count)
                break
        if (sum(ni) <= sum(mi)):
            print(-1)

    # print(ni)
    # print(mi)