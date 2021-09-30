n = int(input('Input the maze\'s size (only 1 to 9): '))
opr = int(input('Input the type of maze (only 1 to 2): '))
num = []
if opr == 1 :
    for i in range(1,n+1,2) : num.append(i)
    for i in range(2,n+1,2) : num.append(i)
elif opr == 2 :
    for i in range(2,n+1,2) : num.append(i)
    for i in range(1,n+1,2) : num.append(i)
for i in range(2*n-1) :
    for j in range(2*n-1) :
        mn = min(i,j,2*n-2-i,2*n-2-j)
        print(num[mn],end=' ')
    print()