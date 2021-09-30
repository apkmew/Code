n = int(input('Length: '))
m = int(input('Width: '))
court = []
for i in range(n) :
    a = [int(x) for x in input().split()]
    court.append(a)
ans = []
for i in range(1,n-4) :
    for j in range(1,m-2) :
        if court[i][j] == 1 and court[i+1][j] == 1 and court[i+2][j] == 1 and court[i+3][j] == 1 :
            if court[i][j+1] == 1 and court[i+1][j+1] == 1 and court[i+2][j+1] == 1 and court[i+3][j+1] ==1 :
                ans.append((i,j))
print(f'{len(ans)} possible court(s)')
for k in range(len(ans)) :
    x,y = ans[k][0],ans[k][1]
    for i in range(n) :
        for j in range(m) :
            if 0 <= i-x < 4 and 0 <= j-y < 2 : print('x',end=' ')
            else : print(court[i][j],end=' ')
        print()
    print()