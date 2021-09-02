def mul_matrix(A,B) :
    row,column = len(A),len(B[0])
    X = [[0]*column for i in range(row)]
    for i in range(row) :
        for j in range(column) :
            for k in range(len(A[0])) :
                X[i][j] += A[i][k] * B[k][j]
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

f = input('File name: ')
with open(f,'r') as fp :
    a = []
    b = []
    opr = ['+','-','*']
    ch = 0
    for line in fp :
        c = line.split()
        if c[0] in opr and ch == 0 : 
            ch = 1
            x = c[0]
        elif c[0] in opr and ch == 1 :
            if x == '+' : a = plus_matrix(a,b)
            elif x == '-' : a = minus_matrix(a,b)
            elif x == '*' : a = mul_matrix(a,b)
            b.clear()
            x = c[0]
        if c[0] not in opr : 
            for i in range(len(c)) :
                c[i] = int(c[i])
            if ch == 0 : a.append(c)
            else : b.append(c)
    if x == '+' : a = plus_matrix(a,b)
    elif x == '-' : a = minus_matrix(a,b)
    elif x == '*' : a = mul_matrix(a,b)
    for i in range(len(a)):
        for j in range(len(a[0])):
            print(f"{a[i][j]:^5}",end=" ")
        print()