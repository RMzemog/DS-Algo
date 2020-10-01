x = int(input())
test = []
for i in range(x):
    dd = []
    ddd = input()
    for j in range(len(ddd)):
        dd.append(int(ddd[j]))
    test.append(dd)
for i in range(len(test[0]) - 2):
    #print(test[0][i:len(test) - 2+i + 1])
    for j in range(len(test[0]) - 2):
        # print(test[j][i:len(test) - 2+i + 1])
        # print(test[j+1][i:len(test) - 2+i +1])
        # print(test[j+2][i:len(test) - 2+i + 1])
        # print(" ", test[j][i+1])
        # print(test[j+1][i] , test[j+1][i+1], test[j+1][i+2])
        # print(" ", test[j+2][i+1])
        if str(test[j][i+1]).isnumeric() and str(test[j+1][i]).isnumeric() and str(test[j+1][i+2]).isnumeric() and str(test[j+2][i+1]).isnumeric():

            if test[j][i+1] < test[j+1][i+1] and test[j+1][i] < test[j+1][i+1] and test[j+1][i+2] < test[j+1][i+1] and test[j+2][i+1] < test[j+1][i+1]:
                        test[j+1][i+1] = "X"
        # print()
for i in range(len(test[0])):
    for j in range(len(test[0])):
        print(test[i][j], end="")
    print()
