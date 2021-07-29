A = [[1,2,3],[4,5,6],[7,8,9]]
B = [[22,13,23],[54,43,21],[23,78,71]]

def mul_matrix(A,B) :
    row,column = len(A),len(B[0])
    X = [[0]*column for i in range(row)]
    for i in range(row) :
        for j in range(column) :
            for k in range(len(A[0])) :
                X[i][j] += A[i][k] * B[k][j]
    return X

def print_matrix(A) :
    row,column = len(A),len(A[0])
    for i in range(row) : 
        for j in range(column) :
            print(f'{A[i][j]:^6}', end = ' ')
        print()

print_matrix(mul_matrix(A,B))