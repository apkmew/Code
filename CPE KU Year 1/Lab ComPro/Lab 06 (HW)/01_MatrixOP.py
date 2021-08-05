A = [[1,2],[3,4],[5,6]]
B = [[7,9,11],[8,10,12]]
C = [[13,14],[15,16]]
D = [[100,50],[20,70]]
c = 2

def transpose_matrix(A) :
    newrow,newcolumn = len(A[0]),len(A)
    X = [[0]*newcolumn for i in range(newrow)]
    for i in range(newrow) :
        for j in range(newcolumn) :
            X[i][j] = A[j][i]
    return X

def plus_matrix(A,B) :
    row,column = len(A),len(A[0])
    C = [[0]*column for i in range(row)]
    for i in range(row) : 
        for j in range(column) :
            C[i][j] = A[i][j] + B[i][j]
    return C

def minus_matrix(A,B) :
    row,column = len(A),len(A[0])
    C = [[0]*column for i in range(row)]
    for i in range(row) : 
        for j in range(column) :
            C[i][j] = A[i][j] - B[i][j]
    return C

def mul_matrix(A,B) :
    row,column = len(A),len(B[0])
    X = [[0]*column for i in range(row)]
    for i in range(row) :
        for j in range(column) :
            for k in range(len(A[0])) :
                X[i][j] += A[i][k] * B[k][j]
    return X

def power_matrix(A,c) :
    row,column = len(A),len(A[0])
    X = A
    c -= 1
    while c :
        c -= 1
        Y = X
        X = [[0]*column for i in range(row)]
        for i in range(row) :
            for j in range(column) :
                for k in range(len(A[0])) :
                    X[i][j] += Y[i][k] * A[k][j]
    return X

def print_matrix(A) :
    row,column = len(A),len(A[0])
    for i in range(row) : 
        for j in range(column) :
            print(f'{A[i][j]:^6}', end = ' ')
        print()

print_matrix(mul_matrix(plus_matrix(A,transpose_matrix(B)),(minus_matrix(power_matrix(C,c),D))))