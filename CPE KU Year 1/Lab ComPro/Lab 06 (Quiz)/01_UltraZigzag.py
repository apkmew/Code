print('Enter a sentence or pharse and then press ENTER')
a = input()
opr = int(input('Enter output type (only 1..5:) '))
l = len(a)
n = 1
while n*n < l : n += 1
table = [['*']*n for i in range(n)]
for i in range(n) :
    if i*n >= l : break
    for j in range(n) :
        if i*n+j >= l : break
        table[i][j] = a[i*n+j]
print('  ',end=' ')
for i in range(n) : print(i+1,end='  ')
print()
if opr == 1 :
    for i in range(n) :
        print('',i+1,end=' ')
        for j in range(n) :
            print(table[i][j],end='  ')
        print()

if opr == 2 :
    for j in range(n) :
        print('',j+1,end=' ')
        for i in range(n) :
            print(table[i][j],end='  ')
        print()

if opr == 3 :
    for i in range(n) :
        print('',i+1,end=' ')
        for j in range(n) :
            print(table[n-i-1][n-j-1],end='  ')
        print()

if opr == 4 :
    for j in range(n) :
        print('',j+1,end=' ')
        for i in range(n) :
            print(table[n-i-1][n-j-1],end='  ')
        print()

if opr == 5 :
    i,j,cou = n-1,0,0
    while True :
        if l%2==1 and i == 0 and j == 0 : break
        if l%2==0 and i == -1 and j == 0 : break
        while j >= 0 :
            if cou >= l : table[i][j] = '*'
            else : table[i][j] = a[cou]
            cou += 1
            i -= 1
            j -= 1
        j += 1
        if l%2==1 and i == 0 and j == 0 : break
        if l%2==0 and i == -1 and j == 0 : break
        while i < n : 
            if cou >= l : table[i][j] = '*'
            else : table[i][j] = a[cou]
            cou += 1
            i += 1
            j += 1
        i -= 1
    if l%2 == 0 : i,j =  0,0
    else : i,j = 0,1
    while True :
        if i == 0 and j == n-1 : break
        while j < n : 
            print(i,j,cou)
            if cou >= l : table[i][j] = '*'
            else : table[i][j] = a[cou]
            cou += 1
            i += 1
            j += 1
        i -= 2
        j -= 1
        if i == 0 and j == n-1 : break
        while i >= 0 :
            print(i,j,cou)
            if cou >= l : table[i][j] = '*'
            else : table[i][j] = a[cou]
            cou += 1
            i -= 1
            j -= 1
        if i == 0 and j == n-1 : break
        i += 1
        j += 2
    table[0][n-1] = '*'
    for i in range(n) :
        print('',i+1,end=' ')
        for j in range(n) :
            print(table[i][j],end='  ')
        print()

#Put a value v at the top of stack s ok