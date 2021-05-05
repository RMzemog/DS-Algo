test = int(input())
for i in range(0,test):
    n = int(input())
    first = list(map(int , input().split()))
    second = list(map(int , input().split()))
    # print(first)
    # print(second)
    dona = False
    dhoka = {}
    for j in range(0, n):
        if first[j] not in dhoka:
            dhoka[first[j]] = second[j]
        if first[j] in dhoka:
            if dhoka[first[j]] != second[j]:
                print('NO')
                dona = True
                break
    if dona == False:
        print('YES')