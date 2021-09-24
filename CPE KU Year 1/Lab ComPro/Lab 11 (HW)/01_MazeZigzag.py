n = int(input())
i,j,cou = n-1,0,1
ans = [[0 for i in range(n)] for j in range(n)]
if n == 1 :
    ans[0][0],x,y = 1,0,0
    print(f'{ans[x][y]:3.0f}',end=' ')
    exit(0)
while True :
    if n%2==0 and i == 0 and j == 0 : break
    if n%2==1 and i == -1 and j == 0 : break
    while j >= 0 :
        ans[i][j] = cou
        cou += 1
        i -= 1
        j -= 1
    j += 1
    if n%2==0 and i == 0 and j == 0 : break
    if n%2==1 and i == -1 and j == 0 : break
    while i < n : 
        ans[i][j] = cou
        cou += 1
        i += 1
        j += 1
    i -= 1
if n%2 == 0 : i,j =  0,0
else : i,j = 0,1
while True :
    if i == 0 and j == n-1 : break
    while j < n : 
        ans[i][j] = cou
        cou += 1
        i += 1
        j += 1
    i -= 2
    j -= 1
    if i == 0 and j == n-1 : break
    while i >= 0 :
        ans[i][j] = cou
        cou += 1
        i -= 1
        j -= 1
    if i == 0 and j == n-1 : break
    i += 1
    j += 2
ans[0][n-1] = cou
for x in range(n) :
    for y in range(n) :
        print(f'{ans[x][y]:3.0f}',end=' ')
    print()