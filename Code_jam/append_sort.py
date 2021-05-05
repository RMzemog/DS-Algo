test = int(input())
for i in range(0, test):
    n = int(input())
    arr = []
    count = 0
    for i in range(0, n):
        temp = int(input())
        if(i != 0):
            a = str(arr[i-1])
            b = str(temp)
            if (arr[i-1] == temp):
                count += 1
                b += '0'
            elif (arr[i-1] < temp):
                continue
            elif (arr[i-1] > temp):
                aa = a[0:len(b)-1]
                if (int(aa) > int(b)):
                    lo = (len(a) - len(b)) + 1
                    b += '0' * lo
                    count += lo
                elif(int(aa) < int(b)):
                    lo = (len(a) - len(b))
                    b += '0' * lo
                elif(int(aa) == int(b)):
                    lo = len(a) - len(b)
                    nine = '9' * lo
                    sub = a[len(b):]
                    if(nine == sub):
                        b += nine + '0'
                        count += lo + 1
                    else:
                        sub = sub[::-1]
                        count += lo
                        carry = 0
                        for k in range(0,len(sub)):
                            if (sub[k] == '9'):
                                carry == 1
                            elif(sub[k] == '1'):
                                sub = sub[0:k] + '2' +sub[k+1:]
                            elif(sub[k] == '2'):
                                sub = sub[0:k] + '3' +sub[k+1:]
                            elif(sub[k] == '3'):
                                sub = sub[0:k] + '4' +sub[k+1:]
                            elif(sub[k] == '4'):
                                sub = sub[0:k] + '5' +sub[k+1:]
                            elif(sub[k] == '5'):
                                sub = sub[0:k] + '6' +sub[k+1:]
                            elif(sub[k] == '6'):
                                sub = sub[0:k] + '7' +sub[k+1:]
                            elif(sub[k] == '7'):
                                sub = sub[0:k] + '8' +sub[k+1:]
                            elif(sub[k] == '8'):
                                sub = sub[0:k] + '9' +sub[k+1:]
                            elif(sub[k] == '0'):
                                sub = sub[0:k] + '1' +sub[k+1:]
                            if(carry == 1):
                                sub = sub[0:k]+'0'+sub[k+1]
                        sub = sub[::-1]
                        b += sub
            temp = int(b)            
        arr[i] = temp
    print(arr)