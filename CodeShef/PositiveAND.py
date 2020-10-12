from itertools import permutations
test_case = int(input())

for i in range(test_case):
    x = int(input())
    d = list(range(1, x+1))

    perm = list(permutations(d))
    # print(perm)
    ee = 0
    for j in range(len(perm)):
        boll = True
        for k in range(1,len(perm[0])):
            # print("I J ",perm[j][k-1] , perm[j][k])
            dddd = perm[j][k - 1] & perm[j][k]
            # print(dddd)
            if dddd == 0:
                boll = False
        if boll:
            print(*perm[j])
            break
    if (not boll): 
        print(-1)