test = int(input())
for i in range(0, test):
    n, x = input().split()
    n = int(n)
    x = int(x)
    arr = list(map(int, input().split()))
    total = {}
    for j in range(0, len(arr)):
        if arr[j] in total and x == 0:
            total[arr[j]] += 1
        elif arr[j] in total and x != 0:
            x -= 1
        elif arr[j] not in total:
            total[arr[j]] = 1
    if(x == 0):
        print(len(total))
    elif (x != 0):
        print(len(total) - x)


