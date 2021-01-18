# import math
# try:

#     z=input()
#     z = int(z)
#     for i in range(z):
#         a,b=map(int,input().split())

#         t=list(map(int, input().split()))

#         risk=[]
#         nrisk=[]
#         for i in t:
#             if i<=9 or i>=80:
#                 risk.append(i)
#             else:
#                 nrisk.append(i)
#         print(math.ceil(len(risk)/b)+ math.ceil(len(nrisk)/b))
# except:
#     pass
# z=int(input())
# for i in range(z):
#     a,b=map(int,input().split())
#     if a%2==0:
#         ea=int(a/2)
#         oa=int(a/2)
#     else:
#         ea=int(a/2)
#         oa=int((a/2)+1)
#     if b%2==0:
#         eb=int(b/2)
#         ob=int(b/2)
#     else:
#         eb=int(b/2)
#         ob=int((b/2) +1)

#     le=ea * eb
#     lb=ob * ob
#     print(le+lb)

# t=input()
# t = int(t)
# for i in range(t):
#     l=[]
#     n,k,x,y=list(map(int, input().split()))
#     if x==y:
#         print(n,n)
#         continue
#     elif x<y:
#         l=[[0, y - x], [(n-y)+x, n], [n,(n-y)+x], [y - x,0]]
#     elif x>y:
#         l=[[x-y,0], [n,(n-x)+y], [(n-x)+y, n], [0,x-y]]
#     print(*l[k%4])

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