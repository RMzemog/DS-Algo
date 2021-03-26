test = input()
test = int(test)
for i in range(test):
    mtime = input()
    # intmtime = int(mtime[0:2]) + float(mtime[4:6])/100.0
    ampm = mtime[-2:]
    target = 0
    if (ampm == "AM"):
        if (int(mtime[0:2]) == 12):
            # print('adf')
            target += 0 + (float(mtime[3:5])/100.0)
        else:
            target += int(mtime[0:2]) + float(mtime[3:5])/100.0
    else:
        if (int(mtime[0:2]) == 12):
            target += int(mtime[0:2]) + float(mtime[3:5])/100.0
        else:
            target += 12 + int(mtime[0:2]) + float(mtime[3:5])/100.0
    # print(target)
    n = input()
    n = int(n)
    ans = ""
    for j in range(n):
        between = input()
        b1 = between[6:8]
        b2 = between[-2:]
        # print("b1", b1)
        # print('b2', b2)
        first = 0
        second = 0
        if (b1 == "AM"):
            if (int(between[0:2]) == 12):
                first += 0 + float(between[3:5])/100.0
            else:
                first += int(between[0:2]) + float(between[3:5])/100.0
        else:
            if (int(between[0:2]) == 12):
                first += int(between[0:2]) + float(between[3:5])/100.0
            else:
                first += 12 + int(between[0:2]) + float(between[3:5])/100.0
        if (b2 == "AM"):
            if (int(between[9:11]) == 12):
                second += 0 + float(between[12:14])/100.0
            else:
                second += int(between[9:11]) + float(between[12:14])/100.0
        else:
            if (int(between[9:11]) == 12):
                second += int(between[9:11]) + float(between[12:14])/100.0
            else:
                second += 12 + int(between[9:11]) + float(between[12:14])/100.0
        # print("first ", first)
        # print('second ', second)
        if target >= first and target <= second:
            ans += '1'
        else:
            ans += '0'
    print(ans)

