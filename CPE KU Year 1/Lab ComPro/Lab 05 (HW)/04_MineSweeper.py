print('Grid Size: ',end='')
m,n = [int(x) for x in input().split()]
a = [[0]*m for i in range(n)]
k = int(input('Number of mine(s): '))
for i in range(1,k+1) :
    print(f'Mine#{i}: ',end='')
    y,x = [int(x) for x in input().split()]
    a[x][y] = -1

for i in range(n) :
    for j in range(m) :
        if a[i][j] == -1 : print('X',end=' ')
        else :
            total = 0
            if i >= 1 and j>=1 and a[i-1][j-1] == -1 : total += 1
            if i >= 1 and j<=m-2 and a[i-1][j+1] == -1 : total += 1
            if i <= n-2 and j>=1 and a[i+1][j-1] == -1 : total += 1
            if i <= n-2 and j <= m-2 and a[i+1][j+1] == -1 : total += 1
            if i >= 1 and a[i-1][j] == -1 : total += 1
            if i <= n-2 and a[i+1][j] == -1 : total += 1
            if j >= 1 and a[i][j-1] == -1 : total += 1
            if j <= m-2 and a[i][j+1] == -1 : total += 1
            print(total,end=' ')
    print()
