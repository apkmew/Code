A = [[1,2],[3,4],[5,6]]
B = [[7,9,11],[8,10,12]]
C = [[13,14],[15,16]]
c = 2

def transpose_matrix(A) :
    newrow,newcolumn = len(A[0]),len(A)
    X = [[0]*newcolumn for i in range(newrow)]
    for i in range(newrow) :
        for j in range(newcolumn) :
            X[i][j] = A[j][i]
    return X

def print_matrix(A) :
    row,column = len(A),len(A[0])
    for i in range(row) : 
        for j in range(column) :
            print(f'{A[i][j]:^6}', end = ' ')
        print()

print_matrix(transpose_matrix(A))