def input_matrix(R , C):
    matrix = []
    for i in range(R):
        a = []
        for j in range(C):
            a.append(int(input()))
        matrix.append(a)
    for i in range(R):
        for j in range(C):
            print(matrix[i][j], end = ' ')
        print()

# input_matrix()

def add():
    R = int(input("Enter the number of rows:"))
    C = int(input("Enter the number of columns"))
    a = input_matrix(R, C)
    b = input_matrix(R, C)
    c = a * 0
    print(a)
    print(b)
    for i in range(R):
        for j in range(C):
            c[i][j] = a[i][j] + b[i][j]
    print(c)

#add()

def asd():
    R = int(input("Enter Number of Rows: "))
    C = int(input("Enter Number of Columns:"))
    matrix = []
    for i in range(R):
        a = []
        for j in range(C):
            a.append(int(input()))
        matrix.append(a)
    for i in range(R):
        for j in range(C):
            print(matrix[i][j], end= " ")
        print()
asd()