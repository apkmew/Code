A = [[1,2],[3,4],[5,6]]
B = [[7,9,11],[8,10,12]]
C = [[13,14],[15,16]]
c = 2

def mul_const(A,c) :
    row,column = len(A),len(A[0])
    X = [[0]*column for i in range(row)]
    for i in range(row) : 
        for j in range(column) :
            X[i][j] = A[i][j] * c
    return X

def print_matrix(A) :
    row,column = len(A),len(A[0])
    for i in range(row) : 
        for j in range(column) :
            print(f'{A[i][j]:^6}', end = ' ')
        print('')

print_matrix(mul_const(A,c))