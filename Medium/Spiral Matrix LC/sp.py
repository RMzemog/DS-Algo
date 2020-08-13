# Given a matrix of m x n elements (m rows, n columns), return all elements of the matrix in spiral order.

# Example 1:

# Input:
# [
#  [ 1, 2, 3 ],
#  [ 4, 5, 6 ],
#  [ 7, 8, 9 ]
# ]
# Output: [1,2,3,6,9,8,7,4,5]
# Example 2:

# Input:
# [
#   [1, 2, 3, 4],
#   [5, 6, 7, 8],
#   [9,10,11,12]
# ]
# Output: [1,2,3,4,8,12,11,10,9,5,6,7]


def snail():
    # matrix = [[1,2,3],
    #           [4,5,6],
    #           [7,8,9]]
    # matrix = [[1,2],
    #           [3,4]]
    matrix = [[1,2,3,4],
              [5,6,7,8],
              [9,10,11,12],
              [13,14,15,16]]
    row_begin = 0
    row_end = len(matrix)
    column_begin = 0
    column_end = len(matrix[0])
    result =  []
    print(row_end)
    print(column_end)
    print(row_begin)
    print(column_begin)
    while row_end > row_begin and column_end > column_begin:
        for i in range(column_begin, column_end):
            result.append(matrix[row_begin][i])
            print("one", matrix[row_begin][i])
        for i in range(row_begin+1, row_end-1):
            result.append(matrix[i][column_end - 1])
            print("TwoOne",matrix[i][column_end - 1])
        if row_end != row_begin + 1:
            for i in range(column_end - 1, column_begin -1, -1):
                result.append(matrix[row_end - 1][i])
                print("I", i)
                print("Two",matrix[row_end - 1][i]) 
        if column_begin != column_end - 1:
            for i in range(row_end - 2, row_begin, -1):
                result.append(matrix[i][column_begin])
                print("Three",matrix[i][column_begin])
        row_begin += 1
        row_end -= 1
        column_begin += 1
        column_end -= 1
    return result
        # for i in range(row_begin, column_end):
        #     print(matrix[row_begin][i])
        # row_begin += 1
        # for i in range(row_begin, row_end):
        #     print(matrix[i][column_end-1])
        # row_begin += 1
        # column_end -= 1
        # for i in range(column_end-1, column_begin-1, -1):
        #     print(matrix[row_begin][i])
        # column_end -= 1
        # for i in range(row_end, row_begin)
print(snail())
