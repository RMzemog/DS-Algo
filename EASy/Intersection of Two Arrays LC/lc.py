def ins(num1, num2):
    num1 = list(set(num1))
    num2 = list(set(num2))
    if len(num1) < len(num2):
        num1, num2 = num2, num1
    output = []
    print(num1)
    print(num2)
    z = 0
    while z < len(num1):
        if num1[z] in num2:
            output.append(num1[z])
        z += 1
    print(output)


ins([1,2,2,1], [2,2])    