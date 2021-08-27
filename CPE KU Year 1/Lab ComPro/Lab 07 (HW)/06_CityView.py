print('City Size: ',end='')
n,m = [int(x) for x in input().split()]
a = []
for i in range(n) :
    b = [int(x) for x in input().split()]
    a.append(b)
nn = s = m
e = w = n
for j in range(m) :
    mx = a[0][j]
    for i in range(1,n) :
        if a[i][j] > mx :
            mx = a[i][j]
            nn += 1
for j in range(m) :
    mx = a[n-1][j]
    for i in range(n-2,-1,-1) :
        if a[i][j] > mx :
            mx = a[i][j]
            s += 1
for i in range(n) :
    mx = a[i][0]
    for j in range(m) :
        if a[i][j] > mx :
            mx = a[i][j]
            w += 1
for i in range(n) :
    mx = a[i][n-1]
    for j in range(m-2,-1,-1) :
        if a[i][j] > mx :
            mx = a[i][j]
            e += 1
mx = max(n,e,w,s)
if nn == mx : print('N',end=' ')
if s == mx : print('S',end=' ')
if e == mx : print('E',end=' ')
if w == mx : print('W',end=' ')