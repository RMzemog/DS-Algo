def matrix():
    R = int(input("Enter number of rows you want:"))
    C = int(input("Enter number of columns you want:"))
    d = []
    print("Enter Your Martix Below")
    for i in range(R):
        dd = []
        for j in range(C):
            dd.append(int(input()))
        d.append(dd)
    print(d)
print(matrix())


def matrix_addition():
    a = [[1,2,3],
         [4,5,6],
         [7,8,9]]
    b = [[1,2,3],
         [4,5,6],
         [7,8,9]]
    done = []
    for i in range(len(a)):
        d = []
        for j in range(len(a[0])):
            d.append(a[i][j]+b[i][j])
        done.append(d)
    return done
# print(matrix_addition())

def matrix_transpose():
    # a = [[1,1,1,1],
    #      [2,2,2,2],
    #      [3,3,3,3,],
    #      [4,4,4,4]]
    a = [[1,2,3],
        [4,5,6],
        [7,8,9]]
    aa = [[x-x for x in range(len(a))] for y in range(len(a[0]))]
    # for i in range(len(a)):
    #     dd = []
    #     for j in range(len(a[0])):
    #         aa[i][j] = a[j][i]
    return aa
# print(matrix_transpose())

def matrix_transpose_using_list_comprehension():
    m = [[1,2,3],
         [4,5,6],
         [7,8,9]]
    return [[m[j][i] for j in range(len(m))] for i in range(len(m[0]))]
# print(matrix_transpose_using_list_comprehension())

def matrix_sum_diagonal():
    arr = [[1,2,3],
           [4,5,6],
           [9,8,9]]
    d = 0
    for i in range(len(arr)):
        print(arr[i][i], arr[i][len(arr)-i-1])
        dd = arr[i][i] - arr[i][len(arr)-i-1]
        d += dd
        print("d", d)
    return abs(d)

print(matrix_sum_diagonal())