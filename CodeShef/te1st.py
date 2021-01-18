test = int(input())
for i in range(test):
    length = int(input())
    bits = str(input())
    ans = ""
    listbits =[bits[i:i+4] for i in range(0, len(bits), 4)]
    for i in range(len(listbits)):
        first = 'abcdefghijklmnop'
        for j in range(4):
            if (listbits[i][j] == '0'):
                if (len(first) == 2):
                    first = first[0]
                else:
                    first = first[0:len(first)//2]
            else:
                if (len(first) == 2):
                    first = first[1]
                else:
                    first = first[len(first)//2: len(first)]
        ans += first
    print(ans)