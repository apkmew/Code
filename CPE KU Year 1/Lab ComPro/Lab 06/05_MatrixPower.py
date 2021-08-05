A = [[1,2,3],[4,5,6],[7,8,9]]
c = 2

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

print_matrix(power_matrix(A,c))