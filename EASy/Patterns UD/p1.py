x = int(input('Enter the number of lines'))
for i in range(x):
    for j in range(i+1):
        print('* ',end ='')
    print()


for i in range(0, x):
    for j in range(0, x-i):
        print('*',end=" ")
    print()

for i in range(0, x):
    for j in range(0, x-i-1):
        print(end=" ")
    for j in range(0, i+1):
        print('*', end=" ")
    print()    