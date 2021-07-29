A = [[1,2,3],[4,5,6],[7,8,9]]
B = [[22,13,23],[54,43,21],[23,78,71]]

def plus_matrix(A,B) :
    row,column = len(A),len(A[0])
    C = [[0]*column for i in range(row)]
    for i in range(row) : 
        for j in range(column) :
            C[i][j] = A[i][j] + B[i][j]
    return C
def print_matrix(A) :
    row,column = len(A),len(A[0])
    for i in range(row) : 
        for j in range(column) :
            print(f'{A[i][j]:^6}', end = ' ')
        print('')

print_matrix(plus_matrix(A,B))