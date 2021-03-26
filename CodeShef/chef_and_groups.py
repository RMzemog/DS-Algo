test = int(input())
ans = []
for i in range(test):
    arr = []
    seats = str(input())
    arr = seats.split('0')
    minus = 0
    for i in range(len(arr)):
        if arr[i] == '':
            minus += 1
    print(len(arr) - minus)
    
